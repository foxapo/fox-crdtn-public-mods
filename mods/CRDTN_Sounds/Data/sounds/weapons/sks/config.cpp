class CfgPatches
{
	class CRDTN_Sounds_sks
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
class closeShotRifle_SoundShader;
class midShotRifle_SoundShader;
class distShotRifle_SoundShader;
class tailDistantRifle_SoundShader;
class tailForestRifle_SoundShader;
class tailHousesRifle_SoundShader;
class tailInteriorRifle_SoundShader;
class tailMeadowsRifle_SoundShader;
class tailTreesRifle_SoundShader;
class base_ProfessionalSilenced_closeShot_SoundShader;
class base_ProfessionalSilenced_midShot_SoundShader;
class base_ProfessionalSilenced_distShot_SoundShader;
class base_ProfessionalSilenced_tailForest_SoundShader;
class base_ProfessionalSilenced_tailHouses_SoundShader;
class base_ProfessionalSilenced_tailInterior_SoundShader;
class base_ProfessionalSilenced_tailMeadows_SoundShader;
class base_ProfessionalSilenced_tailTrees_SoundShader;
class base_HomeSilenced_Closure_SoundShader;
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
	class SKS_Closure_SoundShader: base_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\SKS_closure_01",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\SKS\SKS_closure_02",
				1
			}
		};
		volume=1;
	};
	class SKS_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\sks\sks_fire_close",
				1
			}
		};
		volume=1;
	};
	class SKS_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\sks\sks_fire_distant",
				1
			}
		};
		volume=1.1220185;
	};
	class SKS_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\sks\sks_fire_far",
				1
			}
		};
		volume=1.1220185;
	};
	class SKS_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"",
				1
			}
		};
	};
	class SKS_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"",
				1
			}
		};
	};
	class SKS_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"",
				1
			}
		};
	};
	class SKS_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\sks\sks_fire_indoor_distant",
				1
			}
		};
	};
	class SKS_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"",
				1
			}
		};
	};
	class SKS_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"",
				1
			}
		};
	};
	class SKS_silencerHomeMadeClosure_SoundShader: base_HomeSilenced_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\SKS_closure_01",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\SKS\SKS_closure_02",
				1
			}
		};
	};
	class SKS_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\sks\sks_fire_silenced_close",
				1
			}
		};
	};
	class SKS_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\sks\sks_fire_silenced_close",
				1
			}
		};
	};
	class SKS_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\sks\sks_fire_silenced_close",
				1
			}
		};
	};
	class SKS_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"",
				1
			}
		};
	};
	class SKS_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"",
				1
			}
		};
	};
	class SKS_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"",
				1
			}
		};
	};
	class SKS_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"",
				1
			}
		};
	};
	class SKS_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\sks\sks_fire_indoor_silenced_distant",
				1
			}
		};
	};
	class SKS_charge_open_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\sks\sks_slider_up2",
				1
			}
		};
		volume=0.79432821;
	};
	class SKS_charge_open_release_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\sks\sks_slider_up",
				1
			}
		};
		volume=0.79432821;
	};
	class SKS_charge_close_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\sks\sks_slider_catch",
				1
			}
		};
		volume=0.79432821;
	};
	class SKS_charge_close_release_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\sks\sks_slider_down",
				1
			}
		};
		volume=0.79432821;
	};
	class SKS_chamber_load_SoundShader: reloadWeapon_SoundShader
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
	class SKS_dry_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\SKS_dry",
				1
			}
		};
		volume=0.79432821;
	};
	class SKS_jamming1_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\jamming_01",
				1
			}
		};
		volume=0.79432821;
	};
	class SKS_jamming2_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\jamming_02",
				1
			}
		};
		volume=0.79432821;
	};
	class SKS_jamming3_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\jamming_03",
				1
			}
		};
		volume=0.79432821;
	};
	class SKS_jamming4_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\jamming_04",
				1
			}
		};
		volume=1;
	};
	class SKS_jamming5_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\jamming_05",
				1
			}
		};
		volume=0.79432821;
	};
	class SKS_jamming6_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\jamming_06",
				1
			}
		};
		volume=0.79432821;
	};
	class SKS_jamming7_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\jamming_07",
				1
			}
		};
		volume=0.79432821;
	};
	class SKS_jam_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\jam",
				1
			}
		};
		volume=0.79432821;
	};
	class SKS_hand2_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\sks\sks_hand1",
				1
			}
		};
		volume=0.79432821;
	};
	class SKS_hand3_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\sks\sks_hand2",
				1
			}
		};
		volume=0.79432821;
	};
	class SKS_hand4_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"CRDTN_Sounds\Data\sounds\weapons\sks\sks_hand1",
				1
			}
		};
		volume=0.79432821;
	};
	class SKS_last_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\last",
				1
			}
		};
		volume=0.79432821;
	};
	class SKS_clip_in_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\clip_in",
				1
			}
		};
		volume=0.79432821;
	};
	class SKS_clip_out_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\clip_out",
				1
			}
		};
		volume=0.79432821;
	};
	class SKS_clip_shell_SoundShader: reloadWeapon_SoundShader
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
	class SKS_charge_open_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\charge_open_tail_Interior",
				1
			}
		};
	};
	class SKS_charge_open_release_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\charge_open_release_tail_Interior",
				1
			}
		};
	};
	class SKS_charge_close_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\charge_close_tail_Interior",
				1
			}
		};
	};
	class SKS_charge_close_release_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\charge_close_release_tail_Interior",
				1
			}
		};
	};
	class SKS_chamber_load_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\chamber_load_tail_Interior",
				1
			}
		};
	};
	class SKS_jamming_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"",
				1
			}
		};
	};
	class SKS_pullout_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\pullout_tail_Interior",
				1
			}
		};
	};
	class SKS_dry_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\SKS_dry_tail_Interior",
				1
			}
		};
	};
	class SKS_jamming1_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\jamming_01_tail_Interior",
				1
			}
		};
	};
	class SKS_jamming2_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\jamming_02_tail_Interior",
				1
			}
		};
	};
	class SKS_jamming3_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\jamming_03_tail_Interior",
				1
			}
		};
	};
	class SKS_jamming4_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\jamming_04_tail_Interior",
				1
			}
		};
	};
	class SKS_jamming5_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\jamming_05_tail_Interior",
				1
			}
		};
	};
	class SKS_jamming6_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\jamming_06_tail_Interior",
				1
			}
		};
	};
	class SKS_jamming7_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\jamming_07_tail_Interior",
				1
			}
		};
	};
	class SKS_jam_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\jam_tail_Interior",
				1
			}
		};
	};
	class SKS_hand2_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\hand2_0_tail_Interior",
				1
			}
		};
	};
	class SKS_hand3_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\hand3_0_tail_Interior",
				1
			}
		};
	};
	class SKS_hand4_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\hand4_0_tail_Interior",
				1
			}
		};
	};
	class SKS_last_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\last_tail_Interior",
				1
			}
		};
	};
	class SKS_clip_in_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\clip_in_tail_Interior",
				1
			}
		};
	};
	class SKS_clip_out_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\clip_out_tail_Interior",
				1
			}
		};
	};
	class SKS_clip_shell_TailInterior_SoundShader: reloadWeaponINT_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\clip_shell_1_tail_Interior",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\clip_shell_2_tail_Interior",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\clip_shell_3_tail_Interior",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\clip_shell_4_tail_Interior",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\clip_shell_5_tail_Interior",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\clip_shell_6_tail_Interior",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\clip_shell_7_tail_Interior",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\clip_shell_8_tail_Interior",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\clip_shell_9_tail_Interior",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\clip_shell_10_tail_Interior",
				1
			},
			
			{
				"DZ\sounds\weapons\firearms\SKS\handling\tail\clip_shell_11_tail_Interior",
				1
			}
		};
	};
};
