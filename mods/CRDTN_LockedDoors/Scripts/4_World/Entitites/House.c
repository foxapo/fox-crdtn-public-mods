modded class House
{
    private ref array<ref DoorInfo> m_Doors = new array<ref DoorInfo>;
    
    override void DeferredInit()
	{
        super.DeferredInit();
		if(!GetGame().IsServer())
        {
            GetGame().RPCSingleParam(this, CRDTN_LockedDoorsRPC.SYNC_DOOR_INFO, NULL, false);
            return;
        }

        if(!GetLockedDoorsPlugin())
        {
            DebugUtils.Log("LockedDoorsPlugin not found - " + this.GetType());
            return;
        }
        GetLockedDoorsPlugin().LockDoors(this);
	}

    void SetDoorInfo(ref array<ref DoorInfo> doors)
    {
        m_Doors = doors;
        foreach (ref DoorInfo info : m_Doors)
        {
            if(info.BuildingPosition != GetPosition() && info.BuildingPosition != "-1 -1 -1") //dontobf
            {
                continue;
            }
            // Close the door if they are opened from previous session 
            if(IsDoorOpen(info.DoorIndex))
            {
                CloseDoor(info.DoorIndex);
            }

            LockDoor(info.DoorIndex);
            SetAllowDamage(false);
        }
    }

    override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
	{
        super.OnRPC(sender, rpc_type, ctx);

        switch(rpc_type)
        {
            case CRDTN_LockedDoorsRPC.SYNC_DOOR_INFO:

                if(GetGame().IsServer())
                {
                    GetGame().RPCSingleParam(this, CRDTN_LockedDoorsRPC.SYNC_DOOR_INFO, new Param1<ref array<ref DoorInfo>>(m_Doors), false, sender);
                    return;
                }

                if(GetGame().IsClient())
                {
                    Param1<ref array<ref DoorInfo>> data;
                    if(!ctx.Read(data))
                    {
                        return;
                    }
                    m_Doors = data.param1;
                }
                break;
        }
    }

    ref DoorInfo GetDoorInfo(int index)
    {
        foreach(ref DoorInfo doorInfo : m_Doors)
        {
            if(doorInfo.DoorIndex == index)
            {
                return doorInfo;
            }
        }

        return null;
    }
}