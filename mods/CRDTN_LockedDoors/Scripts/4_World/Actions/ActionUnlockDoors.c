modded class ActionUnlockDoors
{

    protected Object m_SyncedObject = NULL;

    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
        bool state = super.ActionCondition(player, target, item);
        if(!state)
        {
            return false;
        }

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

        if(m_SyncedObject != target.GetObject())
        {
            GetGame().RPCSingleParam(target.GetObject(), CRDTN_LockedDoorsRPC.SYNC_DOOR_INFO, NULL, false);
            m_SyncedObject = target.GetObject();
        }

        autoptr DoorInfo doorInfo = building.GetDoorInfo(doorIndex);
        if(!doorInfo)
        {
            return true;
        }

        return false;
	}
};