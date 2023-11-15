modded class ModifiersManager
{
    override void Init()
    {
        super.Init();
        AddModifier(new FireHeal); // Change the value here to change the rate of healing
    }
};