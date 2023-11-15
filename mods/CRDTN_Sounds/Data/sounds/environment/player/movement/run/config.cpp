class CfgPatches
{
	/// @brief Big thanks to the creator of CSO - Complete sound overhaul
	/// @details  https://steamcommunity.com/sharedfiles/filedetails/?id=2810590959 
	class CSO_Sounds_run
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
	class runErc_asphalt_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_08",
				1
			}
		};
		volume="boots * 0.3";
	};
	class runErc_asphalt_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_08",
				1
			}
		};
		volume="sneakers * 0.3";
	};
	class runErc_asphalt_ext_asphalt_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.3";
	};
	class runErc_asphalt_felt_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_08",
				1
			}
		};
		volume="boots * 0.4";
	};
	class runErc_asphalt_felt_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_08",
				1
			}
		};
		volume="sneakers * 0.4";
	};
	class runErc_asphalt_felt_ext_asphalt_felt_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.4";
	};
	class runErc_concrete_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete6",
				1
			}
		};
		volume="boots * 0.38";
	};
	class runErc_concrete_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete6",
				1
			}
		};
		volume="sneakers * 0.5";
	};
	class runErc_concrete_ext_concrete_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.3";
	};
	class runErc_dirt_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_08",
				1
			}
		};
		volume="boots * 0.35";
	};
	class runErc_dirt_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_08",
				1
			}
		};
		volume="sneakers * 0.3";
	};
	class runErc_dirt_ext_dirt_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.2";
	};
	class runErc_dirt_ext_gravel_small_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.15";
	};
	class runErc_gravel_small_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_08",
				1
			}
		};
		volume="boots * 0.2";
	};
	class runErc_gravel_small_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_08",
				1
			}
		};
		volume="sneakers * 0.2";
	};
	class runErc_gravel_small_ext_gravel_small_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.3";
	};
	class runErc_wood_parquet_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_10",
				1
			}
		};
		volume="boots * 0.4";
	};
	class runErc_wood_parquet_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_10",
				1
			}
		};
		volume="sneakers * 0.4";
	};
	class runErc_wood_parquet_ext_wood_parquet_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.4";
	};
	class runErc_wood_planks_int_wood_planks_int_walkErc_creak_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume=0.050000001;
	};
	class runErc_wood_planks_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_10",
				1
			}
		};
		volume="boots * 0.4";
	};
	class runErc_wood_planks_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_10",
				1
			}
		};
		volume="sneakers * 0.4";
	};
	class runErc_wood_planks_ext_wood_planks_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.4";
	};
	class runErc_ceramic_tiles_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_08",
				1
			}
		};
		volume="boots * 0.5";
	};
	class runErc_ceramic_tiles_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_08",
				1
			}
		};
		volume="sneakers * 0.5";
	};
	class runErc_ceramic_tiles_ext_ceramic_tiles_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.4";
	};
	class runErc_metal_thick_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal6",
				1
			}
		};
		volume="boots * 0.4";
	};
	class runErc_metal_thick_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal6",
				1
			}
		};
		volume="sneakers * 0.4";
	};
	class runErc_metal_thick_ext_metal_thick_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.4";
	};
	class runErc_metal_thin_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_10",
				1
			}
		};
		volume="boots * 0.4";
	};
	class runErc_metal_thin_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_10",
				1
			}
		};
		volume="sneakers * 0.4";
	};
	class runErc_metal_thin_ext_metal_thin_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.5";
	};
	class runErc_metal_thin_mesh_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_10",
				1
			}
		};
		volume="boots * 0.4";
	};
	class runErc_metal_thin_mesh_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_10",
				1
			}
		};
		volume="sneakers * 0.4";
	};
	class runErc_metal_thin_mesh_ext_metal_thin_mesh_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.5";
	};
	class runErc_sand_ext_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_08",
				1
			}
		};
		volume="boots * 0.25";
	};
	class runErc_sand_ext_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_08",
				1
			}
		};
		volume="sneakers * 0.25";
	};
	class runErc_sand_ext_sand_ext_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.25";
	};
	class runErc_cp_broadleaf_dense1_cp_broadleaf_dense1_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.18";
	};
	class runErc_asphalt_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_08",
				1
			}
		};
		volume="boots * 0.3";
	};
	class runErc_asphalt_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_08",
				1
			}
		};
		volume="sneakers * 0.3";
	};
	class runErc_asphalt_int_asphalt_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.3";
	};
	class runErc_asphalt_felt_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_08",
				1
			}
		};
		volume="boots * 0.4";
	};
	class runErc_asphalt_felt_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_08",
				1
			}
		};
		volume="sneakers * 0.4";
	};
	class runErc_asphalt_felt_int_asphalt_felt_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.4";
	};
	class runErc_concrete_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete6",
				1
			}
		};
		volume="boots * 0.38";
	};
	class runErc_concrete_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_concrete6",
				1
			}
		};
		volume="sneakers * 0.5";
	};
	class runErc_concrete_int_concrete_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.3";
	};
	class runErc_dirt_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_08",
				1
			}
		};
		volume="boots * 0.25";
	};
	class runErc_dirt_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\soil_run_08",
				1
			}
		};
		volume="sneakers * 0.25";
	};
	class runErc_dirt_int_dirt_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.4";
	};
	class runErc_dirt_int_gravel_small_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.15";
	};
	class runErc_gravel_small_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_08",
				1
			}
		};
		volume="boots * 0.2";
	};
	class runErc_gravel_small_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_gravel_08",
				1
			}
		};
		volume="sneakers * 0.2";
	};
	class runErc_gravel_small_int_gravel_small_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.2";
	};
	class runErc_wood_parquet_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_10",
				1
			}
		};
		volume="boots * 0.4";
	};
	class runErc_wood_parquet_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_10",
				1
			}
		};
		volume="sneakers * 0.4";
	};
	class runErc_wood_parquet_int_wood_parquet_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.4";
	};
	class runErc_wood_planks_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_10",
				1
			}
		};
		volume="boots * 0.4";
	};
	class runErc_wood_planks_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_wood_10",
				1
			}
		};
		volume="sneakers * 0.4";
	};
	class runErc_wood_planks_int_wood_planks_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.4";
	};
	class runErc_ceramic_tiles_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_08",
				1
			}
		};
		volume="boots * 0.4";
	};
	class runErc_ceramic_tiles_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_asphalt_08",
				1
			}
		};
		volume="sneakers * 0.4";
	};
	class runErc_ceramic_tiles_int_ceramic_tiles_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.4";
	};
	class runErc_metal_thick_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal6",
				1
			}
		};
		volume="boots * 0.4";
	};
	class runErc_metal_thick_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal5",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_metal6",
				1
			}
		};
		volume="sneakers * 0.4";
	};
	class runErc_metal_thick_int_metal_thick_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.4";
	};
	class runErc_metal_thin_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_10",
				1
			}
		};
		volume="boots * 0.4";
	};
	class runErc_metal_thin_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_10",
				1
			}
		};
		volume="sneakers * 0.4";
	};
	class runErc_metal_thin_int_metal_thin_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.5";
	};
	class runErc_metal_thin_mesh_int_boots_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_10",
				1
			}
		};
		volume="boots * 0.4";
	};
	class runErc_metal_thin_mesh_int_sneakers_shoes_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_09",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\run\run_proflist_10",
				1
			}
		};
		volume="sneakers * 0.4";
	};
	class runErc_metal_thin_mesh_int_metal_thin_mesh_int_runErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]={};
		volume="(1 - bare) * 0.5";
	};
};
