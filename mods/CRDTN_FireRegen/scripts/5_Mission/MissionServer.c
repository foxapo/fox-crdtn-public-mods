modded class MissionServer
{
    override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
    {
        super.InvokeOnConnect(player, identity);
        if (identity == NULL)
        {
            return;
        }
        if (GetPluginManager() && GetPluginManager().GetPluginByType(FireRegenServer))
		{
            FireRegenServer.Cast(GetPluginManager().GetPluginByType(FireRegenServer)).OnPlayerConnected(identity, player);
		}
    }
};