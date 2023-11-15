class AdminActionLockDoorsCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.LOCK);
	}
};

class AdminActionLockDoors: ActionContinuousBase
{
	void AdminActionLockDoors()
	{
		m_CallbackClass = AdminActionLockDoorsCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_HIGH;
		m_Text = "Lock Admin Door - Save position";
	}
	
	override void CreateConditionComponents()
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTCursor;
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target ) return false;
		//if( IsDamageDestroyed(action_data.m_Target) ) return false;
		if( !IsBuilding(target) ) return false;
		if( !IsInReach(player, target, UAMaxDistances.DEFAULT) ) return false;

		Building building;
		if( Class.CastTo(building, target.GetObject()) )
		{
			int doorIndex = building.GetDoorIndex(target.GetComponentIndex());
			if ( doorIndex != -1 )
				return (!building.IsDoorOpen(doorIndex) && !building.IsDoorLocked(doorIndex));
		}
		return false;
	}

	protected void LockDoor(ActionTarget target)
	{
		Building building;
		if ( Class.CastTo(building, target.GetObject()) )
		{
			int doorIndex = building.GetDoorIndex(target.GetComponentIndex());
			if ( doorIndex != -1 )
			{
				building.LockDoor(doorIndex);
			}
		}
	}
		
	override void OnFinishProgressServer(ActionData action_data)
	{
		super.OnFinishProgressServer(action_data);
		Building building = Building.Cast(action_data.m_Target.GetObject());
		if(!building)
		{
			return;
		}
		
		int doorIndex = building.GetDoorIndex(action_data.m_Target.GetComponentIndex());
		if (doorIndex != -1)
		{
			vector buildingPosition = building.GetPosition();
			string buildingName = building.GetType();

			autoptr DoorInfo doorInfo = new DoorInfo(doorIndex, buildingPosition, buildingName, ""); //dontobf
			autoptr TStringArray keys = new TStringArray;

        	action_data.m_MainItem.ConfigGetTextArray("keys", keys);
			
			if(keys)
			{
				doorInfo.SetKeys(keys);
			}

			GetLockedDoorsPlugin().ReloadConfig();
			GetLockedDoorsPlugin().SaveDoors(doorInfo);
			GetLockedDoorsPlugin().LockDoors(building);
		}
		
	}
};