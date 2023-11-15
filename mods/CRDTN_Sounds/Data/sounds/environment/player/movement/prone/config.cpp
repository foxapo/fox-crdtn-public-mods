class CfgPatches
{
	/// @brief Big thanks to the creator of CSO - Complete sound overhaul
	/// @details  https://steamcommunity.com/sharedfiles/filedetails/?id=2810590959 
	class CSO_Sounds_landing
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
	class walkProne_asphalt_ext_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\prone\prone_concrete1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\prone\prone_concrete2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\prone\prone_concrete3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\prone\prone_concrete4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\prone\prone_concrete5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\prone\prone_concrete6",
				1
			}
		};
		volume=0.30000001;
	};
};
