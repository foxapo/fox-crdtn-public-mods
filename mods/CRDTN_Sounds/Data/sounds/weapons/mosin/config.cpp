class CfgPatches
{
	class CRDTN_Sounds_mosin
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
class base_Closure_SoundShader;
class base_closeShot_SoundShader;
class base_midShot_SoundShader;
class base_distShot_SoundShader;
class base_tailDistant_SoundShader;
class base_tailForest_SoundShader;
class base_tailHouses_SoundShader;
class base_tailInterior_SoundShader;
class base_tailMeadows_SoundShader;
class base_tailTrees_SoundShader;
class base_ProfessionalSilenced_closeShot_SoundShader;
class base_ProfessionalSilenced_midShot_SoundShader;
class base_ProfessionalSilenced_distShot_SoundShader;
class base_ProfessionalSilenced_tailForest_SoundShader;
class base_ProfessionalSilenced_tailHouses_SoundShader;
class base_ProfessionalSilenced_tailInterior_SoundShader;
class base_ProfessionalSilenced_tailMeadows_SoundShader;
class base_ProfessionalSilenced_tailTrees_SoundShader;
class base_HomeSilenced_closeShot_SoundShader;
class base_HomeSilenced_midShot_SoundShader;
class base_HomeSilenced_distShot_SoundShader;
class base_HomeSilenced_tailForest_SoundShader;
class base_HomeSilenced_tailHouses_SoundShader;
class base_HomeSilenced_tailInterior_SoundShader;
class base_HomeSilenced_tailMeadows_SoundShader;
class base_HomeSilenced_tailTrees_SoundShader;
class reloadWeapon_SoundShader;
class reloadWeaponINT_SoundShader;
class CfgSoundShaders
{
	class Mosin_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mosin\mosin_outdoor_close1",
				1
			}
		};
		volume=1.1220185;
	};
	class Mosin_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mosin\mosin_outdoor_distant1",
				1
			}
		};
		volume=0.70794576;
	};
	class Mosin_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mosin\mosin_outdoor_far1",
				1
			}
		};
		volume=0.70794576;
	};
	class Mosin_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"",
				1
			}
		};
		volume=1.7782794;
	};
	class Mosin_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"",
				1
			}
		};
	};
	class Mosin_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"",
				1
			}
		};
	};
	class Mosin_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\Mosin_tail_interior",
				1
			}
		};
	};
	class Mosin_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"",
				1
			}
		};
	};
	class Mosin_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"",
				1
			}
		};
	};
	class Mosin_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\Mosin_close_shot_homeSilenced_01",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\Mosin_close_shot_homeSilenced_02",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\Mosin_close_shot_homeSilenced_03",
				1
			}
		};
	};
	class Mosin_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\Mosin_mid_shot_homeSilenced_01",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\Mosin_mid_shot_homeSilenced_02",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\Mosin_mid_shot_homeSilenced_03",
				1
			}
		};
		volume=0.56234133;
	};
	class Mosin_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\Mosin_dist_shot_Silenced_01",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\Mosin_dist_shot_Silenced_02",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\Mosin_dist_shot_Silenced_03",
				1
			}
		};
	};
	class Mosin_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\Mosin_tail_silenced_forest",
				1
			}
		};
	};
	class Mosin_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\Mosin_tail_silenced_houses",
				1
			}
		};
	};
	class Mosin_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\Mosin_tail_silenced_interior",
				1
			}
		};
	};
	class Mosin_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\Mosin_tail_silenced_meadows",
				1
			}
		};
	};
	class Mosin_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\Mosin_tail_silenced_trees",
				1
			}
		};
	};
	class Mosin_charge_open_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mosin\mosin_bolt_na_tebya",
				1
			}
		};
		volume=0.79432821;
	};
	class Mosin_charge_close_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mosin\mosin_bolt_ot_tebya",
				1
			}
		};
		volume=0.79432821;
	};
	class Mosin_chamber_load_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mosin\mosin_round_load1",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mosin\mosin_round_load2",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mosin\mosin_round_load3",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mosin\mosin_round_load4",
				1
			},
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mosin\mosin_round_load5",
				1
			}
		};
		volume=0.79432821;
	};
	class Mosin_dry_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\mosin_dry",
				1
			}
		};
		volume=0.79432821;
	};
	class Mosin_jamming1_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\jamming_01",
				1
			}
		};
		volume=0.79432821;
	};
	class Mosin_jamming2_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\jamming_02",
				1
			}
		};
		volume=0.79432821;
	};
	class Mosin_jamming3_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\jamming_03",
				1
			}
		};
		volume=0.79432821;
	};
	class Mosin_jamming4_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\jamming_04",
				1
			}
		};
		volume=1;
	};
	class Mosin_jamming5_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\jamming_05",
				1
			}
		};
		volume=0.79432821;
	};
	class Mosin_jamming6_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\jamming_06",
				1
			}
		};
		volume=0.79432821;
	};
	class Mosin_jamming7_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\jamming_07",
				1
			}
		};
		volume=0.79432821;
	};
	class Mosin_jamming8_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\jamming_08",
				1
			}
		};
		volume=0.79432821;
	};
	class Mosin_jamming9_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\jamming_09",
				1
			}
		};
		volume=0.79432821;
	};
	class Mosin_jamming10_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\jamming_10",
				1
			}
		};
		volume=0.79432821;
	};
	class Mosin_jamming11_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\jamming_11",
				1
			}
		};
		volume=0.79432821;
	};
	class Mosin_jam_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\jam",
				1
			}
		};
		volume=0.79432821;
	};
	class Mosin_charge_open_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mosin\mosin_bolt_na_tebya",
				1
			}
		};
	};
	class Mosin_chamber_load_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\tail\chamber_load_tail_Interior",
				1
			}
		};
	};
	class Mosin_dry_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\mosin_dry_tail_Interior",
				1
			}
		};
	};
	class Mosin_jamming1_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\tail\jamming_01_tail_Interior",
				1
			}
		};
	};
	class Mosin_jamming2_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\tail\jamming_02_tail_Interior",
				1
			}
		};
	};
	class Mosin_jamming3_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\tail\jamming_03_tail_Interior",
				1
			}
		};
	};
	class Mosin_jamming4_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\tail\jamming_04_tail_Interior",
				1
			}
		};
	};
	class Mosin_jamming5_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\tail\jamming_05_tail_Interior",
				1
			}
		};
	};
	class Mosin_jamming6_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\tail\jamming_06_tail_Interior",
				1
			}
		};
	};
	class Mosin_jamming7_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\tail\jamming_07_tail_Interior",
				1
			}
		};
	};
	class Mosin_jamming8_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\tail\jamming_08_tail_Interior",
				1
			}
		};
	};
	class Mosin_jamming9_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\tail\jamming_09_tail_Interior",
				1
			}
		};
	};
	class Mosin_jamming10_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\tail\jamming_10_tail_Interior",
				1
			}
		};
	};
	class Mosin_jamming11_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\tail\jamming_11_tail_Interior",
				1
			}
		};
	};
	class Mosin_jam_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mosin9130\handling\tail\jam_tail_Interior",
				1
			}
		};
	};
};
