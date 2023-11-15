class CfgPatches
{
	class CRDTN_FireRegen
	{
		units[] = {};
		requiredAddons[] = {"DZ_Data", "DZ_Scripts"};
	};
};

class CfgMods
{
	class CRDTN_FireRegen
	{
		type = "mod";
		dir = "CRDTN_FireRegen";
		author = "Freeman";
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"CRDTN_FireRegen/scripts/3_Game"};
			};

			class worldScriptModule
			{
				value = "";
				files[] = {"CRDTN_FireRegen/scripts/4_World"};
			};

			class missionScriptModule
			{
				value = "";
				files[] = {"CRDTN_FireRegen/scripts/5_Mission"};
			};

			class imageSets
			{
				files[] = {};
			};
		};
	};
};