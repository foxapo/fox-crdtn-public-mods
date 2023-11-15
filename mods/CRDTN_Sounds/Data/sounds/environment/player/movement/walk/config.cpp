class CfgPatches
{
	/// @brief Big thanks to the creator of CSO - Complete sound overhaul
	/// @details  https://steamcommunity.com/sharedfiles/filedetails/?id=2810590959 
	class CSO_Sounds_walk
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
	class walkErc_metal_thin_mesh_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_10",
				1
			}
		};
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_metal_thin_mesh_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_10",
				1
			}
		};
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_metal_thin_mesh_int_metal_thin_mesh_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class walkErc_metal_thin_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_10",
				1
			}
		};
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_metal_thin_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_10",
				1
			}
		};
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_metal_thin_int_metal_thin_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class walkErc_metal_thick_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal6",
				1
			}
		};
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_metal_thick_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal6",
				1
			}
		};
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_metal_thick_int_metal_thick_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class walkErc_wood_planks_int_wood_planks_int_walkErc_creak_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_17",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_18",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_19",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_20",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_21",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_22",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_23",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_24",
				1
			}
		};
		volume=0.050000001;
		frequency=0.80000001;
	};
	class walkErc_ceramic_tiles_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_08",
				1
			}
		};
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_ceramic_tiles_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_08",
				1
			}
		};
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_ceramic_tiles_int_ceramic_tiles_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class walkErc_wood_planks_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_17",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_18",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_19",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_20",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_21",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_22",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_23",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_24",
				1
			}
		};
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_wood_planks_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_17",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_18",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_19",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_20",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_21",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_22",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_23",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_24",
				1
			}
		};
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_wood_planks_int_wood_planks_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class walkErc_wood_parquet_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_17",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_18",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_19",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_20",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_21",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_22",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_23",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_24",
				1
			}
		};
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_wood_parquet_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_17",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_18",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_19",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_20",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_21",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_22",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_23",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_24",
				1
			}
		};
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_wood_parquet_int_wood_parquet_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class walkErc_gravel_small_int_gravel_small_int_walkErc_rocks_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_08",
				60
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_09",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_10",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_11",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_12",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_13",
				10
			}
		};
		volume=0.059999999;
		frequency=1;
	};
	class runErc_gravel_small_int_gravel_small_int_walkErc_rocks_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_08",
				60
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_09",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_10",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_11",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_12",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_13",
				10
			}
		};
		volume=0.02;
		frequency=1;
	};
	class walkErc_gravel_small_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_08",
				60
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_09",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_10",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_11",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_12",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_13",
				10
			}
		};
		volume="boots * 0.1";
		frequency=1;
	};
	class walkErc_gravel_small_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_08",
				60
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_09",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_10",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_11",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_12",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_13",
				10
			}
		};
		volume="sneakers * 0.1";
		frequency=1.1;
	};
	class walkErc_gravel_small_int_gravel_small_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.15";
		frequency=1;
	};
	class walkErc_dirt_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_08",
				1
			}
		};
		volume="boots * 0.1";
		frequency=1;
	};
	class walkErc_dirt_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_08",
				1
			}
		};
		volume="sneakers * 0.1";
		frequency=1.1;
	};
	class walkErc_dirt_int_dirt_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.15";
		frequency=1;
	};
	class walkErc_dirt_int_gravel_small_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.05";
		frequency=1;
	};
	class walkErc_concrete_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete6",
				1
			}
		};
		volume="boots * 0.28";
		frequency=1;
	};
	class walkErc_concrete_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete6",
				1
			}
		};
		volume="sneakers * 0.28";
		frequency=1.1;
	};
	class walkErc_concrete_int_concrete_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.2";
		frequency=1;
	};
	class walkErc_asphalt_felt_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_08",
				1
			}
		};
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_asphalt_felt_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_08",
				1
			}
		};
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_asphalt_felt_int_asphalt_felt_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class walkErc_asphalt_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_08",
				1
			}
		};
		volume="boots * 0.2";
		frequency=1;
	};
	class walkErc_asphalt_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_08",
				1
			}
		};
		volume="sneakers * 0.2";
		frequency=1.1;
	};
	class walkErc_asphalt_ext_asphalt_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.2";
		frequency=1;
	};
	class walkErc_asphalt_int_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_08",
				1
			}
		};
		volume="boots * 0.2";
		frequency=1;
	};
	class walkErc_asphalt_int_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_08",
				1
			}
		};
		volume="sneakers * 0.2";
		frequency=1.1;
	};
	class walkErc_asphalt_int_asphalt_int_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.2";
		frequency=1;
	};
	class walkErc_sand_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_08",
				1
			}
		};
		volume="boots * 0.15";
		frequency=1;
	};
	class walkErc_sand_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_08",
				1
			}
		};
		volume="sneakers * 0.15";
		frequency=1.1;
	};
	class walkErc_sand_ext_sand_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.15";
		frequency=1;
	};
	class walkErc_metal_thin_mesh_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_10",
				1
			}
		};
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_metal_thin_mesh_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_10",
				1
			}
		};
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_metal_thin_mesh_ext_metal_thin_mesh_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class walkErc_metal_thin_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_10",
				1
			}
		};
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_metal_thin_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_proflist_10",
				1
			}
		};
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_metal_thin_ext_metal_thin_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class walkErc_metal_thick_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal6",
				1
			}
		};
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_metal_thick_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_metal6",
				1
			}
		};
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_metal_thick_ext_metal_thick_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class walkErc_wood_planks_ext_wood_planks_ext_walkErc_creak_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_17",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_18",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_19",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_20",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_21",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_22",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_23",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_24",
				1
			}
		};
		volume=0.050000001;
		frequency=0.80000001;
	};
	class runErc_wood_planks_ext_wood_planks_ext_walkErc_creak_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_17",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_18",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_19",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_20",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_21",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_22",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_23",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_24",
				1
			}
		};
		volume=0.050000001;
		frequency=0.89999998;
	};
	class walkErc_ceramic_tiles_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_08",
				1
			}
		};
		volume="boots * 0.4";
		frequency=1;
	};
	class walkErc_ceramic_tiles_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_08",
				1
			}
		};
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class walkErc_ceramic_tiles_ext_ceramic_tiles_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class walkErc_wood_planks_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_17",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_18",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_19",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_20",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_21",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_22",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_23",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_24",
				1
			}
		};
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_wood_planks_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_17",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_18",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_19",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_20",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_21",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_22",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_23",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_24",
				1
			}
		};
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_wood_planks_ext_wood_planks_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class walkErc_wood_parquet_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_17",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_18",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_19",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_20",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_21",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_22",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_23",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_24",
				1
			}
		};
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_wood_parquet_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_17",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_18",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_19",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_20",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_21",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_22",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_23",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_wood_24",
				1
			}
		};
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_wood_parquet_ext_wood_parquet_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class walkErc_gravel_small_ext_gravel_small_ext_walkErc_rocks_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_08",
				60
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_09",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_10",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_11",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_12",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_13",
				10
			}
		};
		volume=0.059999999;
		frequency=1;
	};
	class runErc_gravel_small_ext_gravel_small_ext_walkErc_rocks_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_08",
				60
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_09",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_10",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_11",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_12",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_13",
				10
			}
		};
		volume=0.02;
		frequency=1;
	};
	class walkErc_gravel_small_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_08",
				60
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_09",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_10",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_11",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_12",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_13",
				10
			}
		};
		volume="boots * 0.1";
		frequency=1;
	};
	class walkErc_gravel_small_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_08",
				60
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_09",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_10",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_11",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_12",
				10
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_gravel_13",
				10
			}
		};
		volume="sneakers * 0.1";
		frequency=1.1;
	};
	class walkErc_gravel_small_ext_gravel_small_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.2";
		frequency=1;
	};
	class walkErc_dirt_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_08",
				1
			}
		};
		volume="boots * 0.2";
		frequency=1;
	};
	class walkErc_dirt_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\soil_walk_08",
				1
			}
		};
		volume="sneakers * 0.2";
		frequency=1.1;
	};
	class walkErc_dirt_ext_dirt_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.1";
		frequency=1;
	};
	class walkErc_dirt_ext_gravel_small_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.05";
		frequency=1;
	};
	class walkErc_asphalt_felt_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_08",
				1
			}
		};
		volume="boots * 0.3";
		frequency=1;
	};
	class walkErc_asphalt_felt_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_asphalt_08",
				1
			}
		};
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class walkErc_asphalt_felt_ext_asphalt_felt_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class walkErc_concrete_ext_concrete_ext_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class walkErc_concrete_ext_boots_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete6",
				1
			}
		};
		volume="boots * 0.28";
		frequency=1;
	};
	class walkErc_concrete_ext_sneakers_shoes_walkErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\walk\walk_concrete6",
				1
			}
		};
		volume="sneakers * 0.28";
		frequency=1.1;
	};
};
