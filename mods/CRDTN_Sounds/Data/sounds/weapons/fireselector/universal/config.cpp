class CfgPatches
{
	class CRDTN_Sounds_fireselctor
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
	class weap_fireselector_uni_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\fireselector\universal\weap_fireselctor",
				1
			}
		};
		volume=0.31622776;
	};
	class kedr_fireselector_up_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\fireselector\universal\kedr_fireselector_up",
				1
			}
		};
		volume=0.31622776;
	};
	class kedr_fireselector_down_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\fireselector\universal\kedr_fireselector_down",
				1
			}
		};
		volume=0.31622776;
	};
};
class baseCharacter_SoundSet;
class CfgSoundSets
{
	class weap_fireselector_uni_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"weap_fireselector_uni_SoundShader"
		};
	};
	class kedr_fireselector_up_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"kedr_fireselector_up_SoundShader"
		};
	};
	class kedr_fireselector_down_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"kedr_fireselector_down_SoundShader"
		};
	};
};
