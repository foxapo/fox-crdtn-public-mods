class FireRegenServer : FireRegenBase
{
    void FireRegenServer()
    {
        if (GetGame().IsClient())
        {
            return;
        }

        if (!FileExist(CFG_FireRegensFolder))
        {
            MakeDirectory(CFG_FireRegensFolder);
        }

        if (!FileExist(CFG_FireRegenSubFolder))
        {
            MakeDirectory(CFG_FireRegenSubFolder);
        }

        if (!FileExist(CFG_FireRegenSubFolder))
        {
            MakeDirectory(CFG_FireRegenSubFolder);
        }

        FireRegenConfig.Load(m_FireRegenConfig);
    }

    void ~FireRegenServer()
    {
        if (GetGame().IsClient())
        {
            return;
        }
        delete m_FireRegenConfig;
    }

    void OnPlayerConnected(ref PlayerIdentity identity, ref Object player)
    {
        if (GetGame().IsServer())
        {
            GetRPCManager().SendRPC("CRDTN Fire Regen", "RPC_GetConfig", new Param1<ref FireRegenConfig>(m_FireRegenConfig), false, identity);
        }
    }
}