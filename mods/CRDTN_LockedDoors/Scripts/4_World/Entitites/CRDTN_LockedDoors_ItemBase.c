class CRDTN_LockedDoors_ItemBase : ItemBase
{
    override void SetActions()
    {
        super.SetActions();
        AddAction(CRDTN_ActionUnlockLockedDoor);
    }
};

class CRDTN_Key_LockedDoors : CRDTN_LockedDoors_ItemBase
{
};
class CRDTN_Card_LockedDoors : CRDTN_LockedDoors_ItemBase
{
};