class LockedDoorsPlugin : PluginBase
{

    protected string m_Path = "$profile:\\CRDTN\\LockedDoors.json";
    protected ref LockedDoorsConfig m_Config;

    override void OnInit()
    {
        // Zjistit, jestli ten json existuje, pokud ne, tak nacist 
        super.OnInit();
        
        if(!GetGame().IsServer())
        {
            return;
        }

        LockedDoorsConfig.Load(m_Path, m_Config);
        if(!m_Config)
        {
            m_Config = new LockedDoorsConfig();
            // Save
            LockedDoorsConfig.Save(m_Config, m_Path);
        }
    }

    void SaveDoors(ref DoorInfo doorInfo)
    {
        m_Config.AddDoorsToBuilding(doorInfo);
        LockedDoorsConfig.Save(m_Config, m_Path);
    }

    void ReloadConfig()
    {
        LockedDoorsConfig.Load(m_Path, m_Config);
    }

    void LockDoors(EntityAI ent)
    {
        House building = House.Cast(ent);
        if(!building)
        {
            return;
        }

        autoptr array<ref DoorInfo> doorInfo;
        if(!m_Config.TryGetDoorInfo(ent.GetType(), doorInfo))
        {
            return;
        }

        building.SetDoorInfo(doorInfo);
    }
};

LockedDoorsPlugin GetLockedDoorsPlugin()
{
    return LockedDoorsPlugin.Cast(GetPluginManager().GetPluginByType(LockedDoorsPlugin));
}