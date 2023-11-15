class CfgPatches
{
	class CRDTN_Sounds_svd
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
	class SVD_Closure_SoundShader: base_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_closure_01",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_closure_02",
				1
			}
		};
		volume=0.56234133;
	};
	class SVD_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\svd\svd_fire_close",
				1
			}
		};
		volume=0.79432821;
	};
	class SVD_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\svd\svd_fire_distant",
				1
			}
		};
		volume=0.79432821;
	};
	class SVD_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\svd\svd_fire_far",
				1
			}
		};
		volume=0.79432821;
	};
	class SVD_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_tail_distant",
				1
			}
		};
		volume=1.7782794;
	};
	class SVD_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_tail_forest",
				1
			}
		};
	};
	class SVD_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_tail_houses",
				1
			}
		};
	};
	class SVD_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_tail_interior",
				1
			}
		};
	};
	class SVD_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_tail_meadows",
				1
			}
		};
	};
	class SVD_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_tail_trees",
				1
			}
		};
	};
	class SVD_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_close_shot_homeSilenced_01",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_close_shot_homeSilenced_02",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_close_shot_homeSilenced_03",
				1
			}
		};
	};
	class SVD_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_mid_shot_homeSilenced_01",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_mid_shot_homeSilenced_02",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_mid_shot_homeSilenced_03",
				1
			}
		};
		volume=0.56234133;
	};
	class SVD_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_dist_shot_Silenced_01",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_dist_shot_Silenced_02",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_dist_shot_Silenced_03",
				1
			}
		};
	};
	class SVD_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_tail_silenced_forest",
				1
			}
		};
	};
	class SVD_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_tail_silenced_houses",
				1
			}
		};
	};
	class SVD_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_tail_silenced_interior",
				1
			}
		};
	};
	class SVD_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_tail_silenced_meadows",
				1
			}
		};
	};
	class SVD_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_tail_silenced_trees",
				1
			}
		};
	};
	class SVD_charge_open_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\svd\svd_slider_in",
				1
			}
		};
		volume=0.56234133;
	};
	class SVD_charge_open_release_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\svd\svd_slider_in",
				1
			}
		};
		volume=0.56234133;
	};
	class SVD_charge_close_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\svd\svd_slider_out",
				1
			}
		};
		volume=0.56234133;
	};
	class SVD_charge_close_release_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\svd\svd_slider_out",
				1
			}
		};
		volume=0.56234133;
	};
	class SVD_chamber_load_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\chamber_load",
				1
			}
		};
		volume=0.56234133;
	};
	class SVD_chamber_load2_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\chamber_load2",
				1
			}
		};
		volume=0.56234133;
	};
	class SVD_mag_in_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\svd\svd_mag_button",
				1
			}
		};
	};
	class SVD_mag_load_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\svd\svd_mag_in_faster_for_check",
				1
			}
		};
	};
	class SVD_mag_out_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\svd\svd_mag_button",
				1
			}
		};
	};
	class SVD_mag_remove_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\svd\svd_mag_out",
				1
			}
		};
	};
	class SVD_jamming1_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\jamming_01",
				1
			}
		};
		volume=0.79432821;
	};
	class SVD_jamming2_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\jamming_02",
				1
			}
		};
		volume=0.79432821;
	};
	class SVD_jamming3_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\jamming_03",
				1
			}
		};
		volume=0.79432821;
	};
	class SVD_jamming4_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\jamming_04",
				1
			}
		};
		volume=0.79432821;
	};
	class SVD_jamming5_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\jamming_05",
				1
			}
		};
		volume=0.79432821;
	};
	class SVD_jamming6_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\jamming_06",
				1
			}
		};
		volume=0.79432821;
	};
	class SVD_jamming7_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\jamming_07",
				1
			}
		};
		volume=0.79432821;
	};
	class SVD_jamming8_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\jamming_08",
				1
			}
		};
		volume=0.79432821;
	};
	class SVD_jamming9_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\jamming_09",
				1
			}
		};
		volume=0.79432821;
	};
	class SVD_dry_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_dry",
				1
			}
		};
		volume=0.56234133;
	};
	class SVD_weapon_down_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\weapon_down_01",
				1
			}
		};
		volume=0.56234133;
	};
	class SVD_jam_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\jam",
				1
			}
		};
		volume=0.79432821;
	};
	class SVD_charge_open_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\tail\charge_open_tail_Interior",
				1
			}
		};
	};
	class SVD_charge_open_release_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\tail\charge_open_release_tail_Interior",
				1
			}
		};
	};
	class SVD_charge_close_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\tail\charge_close_tail_Interior",
				1
			}
		};
	};
	class SVD_charge_close_release_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\tail\charge_close_release_tail_Interior",
				1
			}
		};
	};
	class SVD_chamber_load_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\tail\chamber_load_tail_Interior",
				1
			}
		};
	};
	class SVD_chamber_load2_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\tail\chamber_load2_tail_Interior",
				1
			}
		};
	};
	class SVD_mag_in_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\svd\svd_mag_button",
				1
			}
		};
	};
	class SVD_mag_load_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\svd\svd_mag_in_faster_for_check",
				1
			}
		};
	};
	class SVD_mag_out_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\svd\svd_mag_button",
				1
			}
		};
	};
	class SVD_mag_remove_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\svd\svd_mag_out",
				1
			}
		};
	};
	class SVD_jamming1_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\tail\jamming_01_tail_Interior",
				1
			}
		};
	};
	class SVD_jamming2_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\tail\jamming_02_tail_Interior",
				1
			}
		};
	};
	class SVD_jamming3_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\tail\jamming_03_tail_Interior",
				1
			}
		};
	};
	class SVD_jamming4_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\tail\jamming_04_tail_Interior",
				1
			}
		};
	};
	class SVD_jamming5_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\tail\jamming_05_tail_Interior",
				1
			}
		};
	};
	class SVD_jamming6_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\tail\jamming_06_tail_Interior",
				1
			}
		};
	};
	class SVD_jamming7_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\tail\jamming_07_tail_Interior",
				1
			}
		};
	};
	class SVD_jamming8_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\tail\jamming_08_tail_Interior",
				1
			}
		};
	};
	class SVD_dry_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\SVD_dry_tail_Interior",
				1
			}
		};
	};
	class SVD_hand_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\tail\hand_0_tail_Interior",
				1
			}
		};
	};
	class SVD_weapon_down_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SVD\handling\tail\weapon_down_01_tail_Interior",
				1
			}
		};
	};
};
