modded class PluginManager
{
	override void Init()
	{
		RegisterPlugin("FireRegenServer", false, true);
		super.Init();
	}
};

FireRegenBase GetFireRegenPlugin()
{
	if (GetPluginManager() && GetPluginManager().GetPluginByType(FireRegenServer))
	{
		return FireRegenServer.Cast(GetPluginManager().GetPluginByType(FireRegenServer));
	}
	return NULL;
}