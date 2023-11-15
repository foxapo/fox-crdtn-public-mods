class CfgPatches
{
	/// @brief Big thanks to the creator of CSO - Complete sound overhaul
	/// @details  https://steamcommunity.com/sharedfiles/filedetails/?id=2810590959 
	class CSO_Sounds_takeout
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
	class ShoulderL_Hide_Rifle_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\holding\weapon\takeout\weap_out",
				1
			}
		};
		volume=0.40000001;
	};
	class ShoulderL_Show_Rifle_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\holding\weapon\takeout\weap_in",
				1
			}
		};
		volume=0.5;
	};
	class ShoulderR_Hide_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\holding\weapon\takeout\weap_out",
				1
			}
		};
		volume=0.69999999;
	};
	class ShoulderR_Show_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\holding\weapon\takeout\weap_in",
				1
			}
		};
		volume=0.69999999;
	};
};
