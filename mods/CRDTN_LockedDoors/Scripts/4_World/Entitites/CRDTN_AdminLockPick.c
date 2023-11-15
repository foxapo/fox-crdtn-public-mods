class CRDTN_AdminLockPick : Lockpick
{
    override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionLockDoors);
        AddAction(AdminActionLockDoors);
	}
};