modded class PluginManager
{
	override void Init()
	{
		super.Init();
		if(!GetGame().IsServer() && GetGame().IsClient())
		{
			return;
		}
		RegisterPlugin("LockedDoorsPlugin", false, true);
	}
}