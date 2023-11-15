class CfgPatches
{
	/// @brief Big thanks to the creator of CSO - Complete sound overhaul
	/// @details  https://steamcommunity.com/sharedfiles/filedetails/?id=2810590959 
	class CSO_Sounds_FabricRifle
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Effects"
		};
	};
};
class baseCharacter_SoundShader;
class CfgSoundShaders
{
	class pickUpRifle_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\holding\weapon\hands\hand_grip1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\holding\weapon\hands\hand_grip2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\holding\weapon\hands\hand_grip3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\holding\weapon\hands\hand_grip4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\holding\weapon\hands\hand_grip5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\holding\weapon\hands\hand_grip6",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\holding\weapon\hands\hand_grip7",
				1
			}
		};
		volume=1;
	};
	class pickUpRifleLight_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\holding\weapon\hands\hand_grip1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\holding\weapon\hands\hand_grip2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\holding\weapon\hands\hand_grip3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\holding\weapon\hands\hand_grip4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\holding\weapon\hands\hand_grip5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\holding\weapon\hands\hand_grip6",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\holding\weapon\hands\hand_grip7",
				1
			}
		};
		volume=0.25118864;
	};
};
