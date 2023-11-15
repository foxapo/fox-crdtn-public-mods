class CRDTN_ActionUnlockLockedDoor_CB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
        Object target = m_ActionData.m_Target.GetObject();
        House building = House.Cast(target);
        if(!building)
        {
		    m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.UNLOCK);
            return;
        }

        int doorIndex = building.GetDoorIndex(m_ActionData.m_Target.GetComponentIndex());
        if ( doorIndex == -1 )
        {
            m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.UNLOCK);
            return;
        }
        
        autoptr DoorInfo doorInfo = building.GetDoorInfo(doorIndex);
        if(!doorInfo)
        {
            m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.UNLOCK);
            return;
        }

        m_ActionData.m_ActionComponent = new CAContinuousTime(doorInfo.GetUnlockTime());
	}
};


class CRDTN_ActionUnlockLockedDoor : ActionContinuousBase
{

    protected string m_UnlockActionText = "Unlock";
    protected Object m_SyncedObject = NULL;

    void CRDTN_ActionUnlockLockedDoor()
	{
		m_CallbackClass = CRDTN_ActionUnlockLockedDoor_CB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_Text = "#unlock";
	}

    override string GetText()
    {
        return m_UnlockActionText;
    }

    override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTCursor;
	}

    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target ) return false;
		if( !IsBuilding(target) ) return false;
		if( !IsInReach(player, target, UAMaxDistances.DEFAULT) ) return false;

        House building = House.Cast(target.GetObject());
        if(!building)
        {
            return false;
        }

        int doorIndex = building.GetDoorIndex(target.GetComponentIndex());
        if ( doorIndex == -1 )
        {
            return false;
        }
        
        if(!building.IsDoorLocked(doorIndex))
        {
            return false;
        }

        autoptr DoorInfo doorInfo = building.GetDoorInfo(doorIndex);
        if(!doorInfo)
        {
            return false;
        }

        doorInfo.PrintInfo();

        m_UnlockActionText = doorInfo.GetActionText();

        if(!item)
        {
            return false;
        }

        if(item.IsRuined())
        {
            return false;
        }

        if(item.GetType() == "CRDTN_KeyMaster")
        {
            return true;
        }

        return doorInfo.IsRequiredKey(item.GetType());
	}

    protected void FinalizeActionOnServer(ActionData action_data)
    {
        ActionTarget target = action_data.m_Target;
        House house = House.Cast(target.GetObject());
        if(!house)
        {
            return;
        }

        int doorIndex = house.GetDoorIndex(target.GetComponentIndex());
        autoptr DoorInfo doorInfo = house.GetDoorInfo(doorIndex);

        if(!doorInfo)
        {
            return;
        }

        house.UnlockDoor(doorIndex);

        if(doorInfo.SendNotificationToClient())
        {
            NotificationSystem.SendNotificationToPlayerIdentityExtended(action_data.m_Player.GetIdentity(), 3, doorInfo.GetNotificationHeader(), doorInfo.GetNotificationText(), doorInfo.GetNotificationIcon());
        }

        if(doorInfo.SendNotificationToAll() || doorInfo.IsAlarmed())
        {
            autoptr array<Man> players = new array<Man>;
            GetGame().GetPlayers(players);
            foreach(Man man : players)
            {
                if(doorInfo.SendNotificationToAll())
                {
                    NotificationSystem.SendNotificationToPlayerIdentityExtended(man.GetIdentity(), 3, doorInfo.GetNotificationHeader(), doorInfo.GetNotificationText(), doorInfo.GetNotificationIcon()); 
                }
                
                if(doorInfo.IsAlarmed() && doorInfo.GetAlarmSound() != "") 
                {
                    GetCRDTN_CorePluginServer().PlaySoundOnClientObject(action_data.m_Player, house, doorInfo.GetAlarmSound());
                }
            }
        }
        
    }

    override void OnFinishProgressServer( ActionData action_data )
	{	
        FinalizeActionOnServer(action_data);
		//TODO: Damage the key or change quantity
		//float dmg = action_data.m_MainItem.GetMaxHealth() * 0.04; //Multiply max health by 'x' amount depending on number of usages wanted (0.04 = 25)
		action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
		float skillLevel = action_data.m_Player.GetSoftSkillsManager().GetSpecialtyLevel();	
		float appliedDamage = 5 + 2*skillLevel; 
		MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, appliedDamage);
	}
}