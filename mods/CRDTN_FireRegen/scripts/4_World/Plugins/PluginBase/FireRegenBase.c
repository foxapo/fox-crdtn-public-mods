class FireRegenBase : PluginBase
{
    protected ref FireRegenConfig m_FireRegenConfig;
    ref FireRegenConfig GetConfig()
    {
        return m_FireRegenConfig;
    }
};