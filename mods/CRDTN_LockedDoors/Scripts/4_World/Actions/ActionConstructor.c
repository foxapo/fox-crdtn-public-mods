modded class ActionConstructor
{
    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);
        actions.Insert(AdminActionLockDoors);
        actions.Insert(CRDTN_ActionUnlockLockedDoor);
    }
}