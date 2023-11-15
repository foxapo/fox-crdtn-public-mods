class CfgPatches
{
	/// @brief Big thanks to the creator of CSO - Complete sound overhaul
	/// @details  https://steamcommunity.com/sharedfiles/filedetails/?id=2810590959 
	class CSO_Sounds_sprint
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
	class sprintErc_metal_thin_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_12",
				1
			}
		};
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_metal_thin_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_12",
				1
			}
		};
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_metal_thin_int_metal_thin_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class sprintErc_metal_thick_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal6",
				1
			}
		};
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_metal_thick_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal6",
				1
			}
		};
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_metal_thick_int_metal_thick_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class sprintErc_ceramic_tiles_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_17",
				1
			}
		};
		volume="boots * 0.55";
		frequency=1;
	};
	class sprintErc_ceramic_tiles_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_17",
				1
			}
		};
		volume="sneakers * 0.55";
		frequency=1.1;
	};
	class sprintErc_ceramic_tiles_int_ceramic_tiles_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.55";
		frequency=1;
	};
	class sprintErc_wood_planks_int_wood_planks_int_walkErc_creak_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_13",
				1
			}
		};
		volume=0.050000001;
		frequency=1.1;
	};
	class sprintErc_wood_planks_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_13",
				1
			}
		};
		volume="boots * 0.55";
		frequency=1;
	};
	class sprintErc_wood_planks_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_13",
				1
			}
		};
		volume="sneakers * 0.55";
		frequency=1.1;
	};
	class sprintErc_wood_planks_int_wood_planks_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.55";
		frequency=1;
	};
	class sprintErc_wood_parquet_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_13",
				1
			}
		};
		volume="boots * 0.55";
		frequency=1;
	};
	class sprintErc_wood_parquet_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_13",
				1
			}
		};
		volume="sneakers * 0.55";
		frequency=1.1;
	};
	class sprintErc_wood_parquet_int_wood_parquet_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.55";
		frequency=1;
	};
	class sprintErc_gravel_small_int_gravel_small_int_walkErc_rocks_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_12",
				1
			}
		};
		volume=0.029999999;
		frequency=1.1;
	};
	class sprintErc_gravel_small_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_12",
				1
			}
		};
		volume="boots * 0.3";
		frequency=1;
	};
	class sprintErc_gravel_small_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_12",
				1
			}
		};
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class sprintErc_gravel_small_int_gravel_small_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class sprintErc_dirt_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_08",
				1
			}
		};
		volume="boots * 0.35";
		frequency=1;
	};
	class sprintErc_dirt_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_08",
				1
			}
		};
		volume="sneakers * 0.35";
		frequency=1.1;
	};
	class sprintErc_dirt_int_dirt_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class sprintErc_dirt_int_gravel_small_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.2";
		frequency=1;
	};
	class sprintErc_concrete_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_17",
				1
			}
		};
		volume="boots * 0.53";
		frequency=1;
	};
	class sprintErc_concrete_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_17",
				1
			}
		};
		volume="sneakers * 0.63";
		frequency=1.1;
	};
	class sprintErc_concrete_int_concrete_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.35";
		frequency=1;
	};
	class sprintErc_asphalt_felt_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_17",
				1
			}
		};
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_asphalt_felt_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_17",
				1
			}
		};
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_asphalt_felt_int_asphalt_felt_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class sprintErc_asphalt_int_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_17",
				1
			}
		};
		volume="boots * 0.4";
		frequency=1;
	};
	class sprintErc_asphalt_int_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_17",
				1
			}
		};
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class sprintErc_asphalt_int_asphalt_int_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.43";
		frequency=1;
	};
	class sprintErc_cp_broadleaf_dense1_cp_broadleaf_dense1_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.28";
		frequency=1;
	};
	class sprintErc_textile_carpet_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_17",
				1
			}
		};
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_textile_carpet_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_17",
				1
			}
		};
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_textile_carpet_ext_textile_carpet_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class sprintErc_sand_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_08",
				1
			}
		};
		volume="boots * 0.45";
		frequency=1;
	};
	class sprintErc_sand_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_08",
				1
			}
		};
		volume="sneakers * 0.45";
		frequency=1.1;
	};
	class sprintErc_sand_ext_sand_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.45";
		frequency=1;
	};
	class sprintErc_metal_thin_mesh_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_12",
				1
			}
		};
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_metal_thin_mesh_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_12",
				1
			}
		};
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_metal_thin_mesh_ext_metal_thin_mesh_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class sprintErc_metal_thin_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_12",
				1
			}
		};
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_metal_thin_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_proflist_12",
				1
			}
		};
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_metal_thin_ext_metal_thin_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class sprintErc_metal_thick_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal6",
				1
			}
		};
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_metal_thick_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_metal6",
				1
			}
		};
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_metal_thick_ext_metal_thick_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class sprintErc_ceramic_tiles_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_17",
				1
			}
		};
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_ceramic_tiles_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_17",
				1
			}
		};
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_ceramic_tiles_ext_ceramic_tiles_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.55";
		frequency=1;
	};
	class sprintErc_wood_planks_ext_wood_planks_ext_walkErc_creak_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_13",
				1
			}
		};
		volume=0.050000001;
		frequency=1.1;
	};
	class sprintErc_wood_planks_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_13",
				1
			}
		};
		volume="boots * 0.55";
		frequency=1;
	};
	class sprintErc_wood_planks_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_13",
				1
			}
		};
		volume="sneakers * 0.55";
		frequency=1.1;
	};
	class sprintErc_wood_planks_ext_wood_planks_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.55";
		frequency=1;
	};
	class sprintErc_wood_parquet_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_13",
				1
			}
		};
		volume="boots * 0.55";
		frequency=1;
	};
	class sprintErc_wood_parquet_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_wood_13",
				1
			}
		};
		volume="sneakers * 0.55";
		frequency=1.1;
	};
	class sprintErc_wood_parquet_ext_wood_parquet_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.55";
		frequency=1;
	};
	class sprintErc_gravel_small_ext_gravel_small_ext_walkErc_rocks_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_12",
				1
			}
		};
		volume=0.029999999;
		frequency=1.1;
	};
	class sprintErc_gravel_small_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_12",
				1
			}
		};
		volume="boots * 0.3";
		frequency=1;
	};
	class sprintErc_gravel_small_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_gravel_12",
				1
			}
		};
		volume="sneakers * 0.3";
		frequency=1.1;
	};
	class sprintErc_gravel_small_ext_gravel_small_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.4";
		frequency=1;
	};
	class sprintErc_dirt_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_08",
				1
			}
		};
		volume="boots * 0.4";
		frequency=1;
	};
	class sprintErc_dirt_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\soil_sprint_08",
				1
			}
		};
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class sprintErc_dirt_ext_dirt_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
	class sprintErc_dirt_ext_gravel_small_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.2";
		frequency=1;
	};
	class sprintErc_concrete_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_17",
				1
			}
		};
		volume="boots * 0.53";
		frequency=1;
	};
	class sprintErc_concrete_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_17",
				1
			}
		};
		volume="sneakers * 0.63";
		frequency=1.1;
	};
	class sprintErc_asphalt_felt_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_17",
				1
			}
		};
		volume="boots * 0.6";
		frequency=1;
	};
	class sprintErc_asphalt_felt_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_17",
				1
			}
		};
		volume="sneakers * 0.6";
		frequency=1.1;
	};
	class sprintErc_asphalt_felt_ext_asphalt_felt_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.6";
		frequency=1;
	};
	class sprintErc_asphalt_ext_boots_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_17",
				1
			}
		};
		volume="boots * 0.4";
		frequency=1;
	};
	class sprintErc_asphalt_ext_sneakers_shoes_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_17",
				1
			}
		};
		volume="sneakers * 0.4";
		frequency=1.1;
	};
	class sprintErc_asphalt_ext_asphalt_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_10",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_11",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_12",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_13",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_14",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_15",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_16",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\sprint\sprint_asphalt_17",
				1
			}
		};
		volume="(1 - bare) * 0.43";
		frequency=1;
	};
	class sprintErc_concrete_ext_concrete_ext_sprintErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.3";
		frequency=1;
	};
};
