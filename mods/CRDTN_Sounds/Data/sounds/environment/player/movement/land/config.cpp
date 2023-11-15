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
	class landFeetErc_asphalt_ext_boots_asphalt_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_06",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_asphalt_int_boots_asphalt_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_06",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_asphalt_felt_ext_boots_asphalt_felt_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_06",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_asphalt_felt_int_boots_asphalt_felt_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_06",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_ceramic_tiles_ext_boots_ceramic_tiles_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_tile_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_tile_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_tile_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_tile_04",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_ceramic_tiles_int_boots_ceramic_tiles_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_tile_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_tile_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_tile_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_tile_04",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_concrete_ext_boots_concrete_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_concrete1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_concrete2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_concrete3",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_concrete_int_boots_concrete_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_concrete1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_concrete2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_concrete3",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_cp_broadleaf_dense1_boots_cp_broadleaf_dense1_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_08",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_cp_grass_tall_boots_cp_grass_tall_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_08",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_dirt_ext_boots_dirt_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_04",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_dirt_int_boots_dirt_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_04",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_grass_dry_ext_boots_grass_dry_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_08",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_grass_dry_int_boots_grass_dry_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_08",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_gravel_small_ext_boots_gravel_small_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_09",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_gravel_small_int_boots_gravel_small_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_09",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thick_ext_boots_metal_thick_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_metal1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_metal2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_metal3",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thick_int_boots_metal_thick_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_metal1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_metal2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_metal3",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thin_ext_boots_metal_thin_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_05",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thin_int_boots_metal_thin_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_05",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thin_mesh_ext_boots_metal_thin_mesh_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_05",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thin_mesh_int_boots_metal_thin_mesh_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_05",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_sand_ext_boots_sand_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_04",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_sand_int_boots_sand_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_04",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_textile_carpet_ext_boots_textile_carpet_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_ext\boots\landFeetErc_1",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_ext\boots\landFeetErc_2",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_ext\boots\landFeetErc_3",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_ext\boots\landFeetErc_4",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_ext\boots\landFeetErc_5",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_ext\boots\landFeetErc_6",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_ext\boots\landFeetErc_7",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_ext\boots\landFeetErc_8",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_textile_carpet_int_boots_textile_carpet_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_int\boots\landFeetErc_1",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_int\boots\landFeetErc_2",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_int\boots\landFeetErc_3",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_int\boots\landFeetErc_4",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_int\boots\landFeetErc_5",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_int\boots\landFeetErc_6",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_int\boots\landFeetErc_7",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_int\boots\landFeetErc_8",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_wood_parquet_ext_boots_wood_parquet_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_09",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_wood_parquet_int_boots_wood_parquet_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_09",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_wood_planks_ext_boots_wood_planks_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_09",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_wood_planks_int_boots_wood_planks_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_09",
				1
			}
		};
		volume="boots * 0.7";
		frequency=1;
	};
	class landFeetErc_asphalt_ext_sneakers_asphalt_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_06",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_asphalt_int_sneakers_asphalt_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_06",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_asphalt_felt_ext_sneakers_asphalt_felt_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_06",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_asphalt_felt_int_sneakers_asphalt_felt_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_asphalt_06",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_ceramic_tiles_ext_sneakers_ceramic_tiles_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_tile_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_tile_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_tile_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_tile_04",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_ceramic_tiles_int_sneakers_ceramic_tiles_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_tile_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_tile_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_tile_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_tile_04",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_concrete_ext_sneakers_concrete_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_concrete1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_concrete2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_concrete3",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_concrete_int_sneakers_concrete_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_concrete1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_concrete2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_concrete3",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_cp_broadleaf_dense1_sneakers_cp_broadleaf_dense1_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_08",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_cp_grass_tall_sneakers_cp_grass_tall_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_08",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_dirt_ext_sneakers_dirt_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_04",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_dirt_int_sneakers_dirt_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_04",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_grass_dry_ext_sneakers_grass_dry_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_08",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_grass_dry_int_sneakers_grass_dry_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_grasslow_08",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_gravel_small_ext_sneakers_gravel_small_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_09",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_gravel_small_int_sneakers_gravel_small_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_gravel_09",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thick_ext_sneakers_metal_thick_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_metal1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_metal2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_metal3",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thick_int_sneakers_metal_thick_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_metal1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_metal2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_metal3",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thin_ext_sneakers_metal_thin_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_05",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thin_int_sneakers_metal_thin_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_05",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thin_mesh_ext_sneakers_metal_thin_mesh_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_05",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_metal_thin_mesh_int_sneakers_metal_thin_mesh_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_proflist_05",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_sand_ext_sneakers_sand_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_04",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_sand_int_sneakers_sand_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\soil_landing_04",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_textile_carpet_ext_sneakers_textile_carpet_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_ext\sneakers\landFeetErc_1",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_ext\sneakers\landFeetErc_2",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_ext\sneakers\landFeetErc_3",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_ext\sneakers\landFeetErc_4",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_ext\sneakers\landFeetErc_5",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_ext\sneakers\landFeetErc_6",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_ext\sneakers\landFeetErc_7",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_ext\sneakers\landFeetErc_8",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_textile_carpet_int_sneakers_textile_carpet_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_int\sneakers\landFeetErc_1",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_int\sneakers\landFeetErc_2",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_int\sneakers\landFeetErc_3",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_int\sneakers\landFeetErc_4",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_int\sneakers\landFeetErc_5",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_int\sneakers\landFeetErc_6",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_int\sneakers\landFeetErc_7",
				1
			},
			
			{
				"\DZ\sounds\Characters\movement\footstep\textile_carpet_int\sneakers\landFeetErc_8",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_wood_parquet_ext_sneakers_wood_parquet_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_09",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_wood_parquet_int_sneakers_wood_parquet_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_09",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_wood_planks_ext_sneakers_wood_planks_ext_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_09",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
	class landFeetErc_wood_planks_int_sneakers_wood_planks_int_landFeetErc_Char_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_01",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_02",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_03",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_04",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_05",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_06",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_07",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_08",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\environment\player\movement\land\landing_wood_09",
				1
			}
		};
		volume="sneakers * 0.7";
		frequency=1;
	};
};
