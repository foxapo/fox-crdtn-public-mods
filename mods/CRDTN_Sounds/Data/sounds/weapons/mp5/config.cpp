class CfgPatches
{
	class CRDTN_Sounds_mp5k
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
class closeShotSMG_SoundShader;
class midShotSMG_SoundShader;
class distShotSMG_SoundShader;
class tailDistantSMG_SoundShader;
class tailForestSMG_SoundShader;
class tailHousesSMG_SoundShader;
class tailInteriorSMG_SoundShader;
class tailMeadowsSMG_SoundShader;
class tailTreesSMG_SoundShader;
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
	class MP5K_Closure_SoundShader: base_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\MP5K_closure_01",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\mp5k\MP5K_closure_02",
				1
			}
		};
		volume=0.44668359;
	};
	class MP5K_closeShot_SoundShader: closeShotSMG_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_outdoor_close_1",
				1
			}
		};
		volume=1;
	};
	class MP5K_midShot_SoundShader: midShotSMG_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_outdoor_close_1",
				1
			}
		};
		volume=0.89125091;
	};
	class MP5K_distShot_SoundShader: distShotSMG_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_outdoor_close_1",
				1
			}
		};
		volume=1.4125376;
	};
	class MP5K_tailDistant_SoundShader: tailDistantSMG_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_outdoor_close_tail",
				1
			}
		};
		volume=2.5118864;
	};
	class MP5K_tailForest_SoundShader: tailForestSMG_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_outdoor_close_tail",
				1
			}
		};
	};
	class MP5K_tailHouses_SoundShader: tailHousesSMG_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_outdoor_close_tail",
				1
			}
		};
	};
	class MP5K_tailInterior_SoundShader: tailInteriorSMG_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_indoor_close_tail",
				1
			}
		};
	};
	class MP5K_tailMeadows_SoundShader: tailMeadowsSMG_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_outdoor_close_tail",
				1
			}
		};
	};
	class MP5K_tailTrees_SoundShader: tailTreesSMG_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_outdoor_close_tail",
				1
			}
		};
	};
	class MP5K_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_outdoor_close_silenced_1",
				1
			}
		};
	};
	class MP5K_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\MP5K_mid_shot_proSilenced_01",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\mp5k\MP5K_mid_shot_proSilenced_02",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\mp5k\MP5K_mid_shot_proSilenced_03",
				1
			}
		};
	};
	class MP5K_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\MP5K_dist_shot_Silenced_01",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\mp5k\MP5K_dist_shot_Silenced_02",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\mp5k\MP5K_dist_shot_Silenced_03",
				1
			}
		};
	};
	class MP5K_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_outdoor_silenced_tail",
				1
			}
		};
	};
	class MP5K_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_outdoor_silenced_tail",
				1
			}
		};
	};
	class MP5K_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_indoor_silenced_tail",
				1
			}
		};
	};
	class MP5K_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_outdoor_silenced_tail",
				1
			}
		};
	};
	class MP5K_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_outdoor_silenced_tail",
				1
			}
		};
	};
	class MP5K_charge_open_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_weap_bolt_out",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5K_charge_open_release_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_weap_bolt_out_handle",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5K_charge_close_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_weap_bolt_in",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5K_charge_close_release_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_weap_bolt_in_slap",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5K_chamber_load_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\chamber_load",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5K_mag_in_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_weap_mag_release_button",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5K_mag_load_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_weap_mag_in",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5K_mag_out_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_weap_mag_release_button",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5K_mag_remove_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\mp5\mp5_weap_mag_out",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5K_hand_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\hand_0",
				1
			}
		};
		volume=0.50118721;
	};
	class MP5_jamming1_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\jamming_01",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5_jamming2_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\jamming_02",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5_jamming3_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\jamming_03",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5_jamming4_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\jamming_04",
				1
			}
		};
		volume=1;
	};
	class MP5_jamming5_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\jamming_05",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5_jamming6_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\jamming_06",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5_jamming7_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\jamming_07",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5_jamming8_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\jamming_08",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5_jamming9_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\jamming_09",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5_jamming10_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\jamming_10",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5_jamming11_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\jamming_11",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5_jamming12_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\jamming_12",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5_jamming13_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\jamming_13",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5_jam_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\jam",
				1
			}
		};
		volume=0.79432821;
	};
	class MP5K_charge_open_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\charge_open_tail_Interior",
				1
			}
		};
	};
	class MP5K_charge_open_release_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\charge_open_release_tail_Interior",
				1
			}
		};
	};
	class MP5K_charge_close_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\charge_close_tail_Interior",
				1
			}
		};
	};
	class MP5K_charge_close_release_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\charge_close_release_tail_Interior",
				1
			}
		};
	};
	class MP5K_chamber_load_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\chamber_load_tail_Interior",
				1
			}
		};
	};
	class MP5K_mag_in_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\mag_in_tail_Interior",
				1
			}
		};
	};
	class MP5K_mag_load_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\mag_load_tail_Interior",
				1
			}
		};
	};
	class MP5K_mag_out_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\mag_out_tail_Interior",
				1
			}
		};
	};
	class MP5K_mag_remove_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\mag_remove_tail_Interior",
				1
			}
		};
	};
	class MP5K_pullout_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\pullout_tail_Interior",
				1
			}
		};
	};
	class MP5K_dry_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\MP5K_dry_tail_Interior",
				1
			}
		};
	};
	class MP5_jamming1_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\jamming_01_tail_Interior",
				1
			}
		};
	};
	class MP5_jamming2_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\jamming_02_tail_Interior",
				1
			}
		};
	};
	class MP5_jamming3_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\jamming_03_tail_Interior",
				1
			}
		};
	};
	class MP5_jamming4_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\jamming_04_tail_Interior",
				1
			}
		};
	};
	class MP5_jamming5_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\jamming_05_tail_Interior",
				1
			}
		};
	};
	class MP5_jamming6_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\jamming_06_tail_Interior",
				1
			}
		};
	};
	class MP5_jamming7_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\jamming_07_tail_Interior",
				1
			}
		};
	};
	class MP5_jamming8_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\jamming_08_tail_Interior",
				1
			}
		};
	};
	class MP5_jamming9_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\jamming_09_tail_Interior",
				1
			}
		};
	};
	class MP5_jamming10_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\jamming_10_tail_Interior",
				1
			}
		};
	};
	class MP5_jamming11_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\jamming_11_tail_Interior",
				1
			}
		};
	};
	class MP5_jamming12_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\jamming_12_tail_Interior",
				1
			}
		};
	};
	class MP5_jamming13_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\jamming_13_tail_Interior",
				1
			}
		};
	};
	class MP5_jam_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\jam_tail_Interior",
				1
			}
		};
	};
	class MP5K_hand_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\mp5k\handling\tail\hand_1_tail_Interior",
				1
			}
		};
	};
};
