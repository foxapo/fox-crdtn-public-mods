class CfgPatches
{
	class CRDTN_Sounds_vss
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
			{
				"DZ_Data", "DZ_Sounds_Effects"};
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
class base_ProfessionalSilenced_Closure_SoundShader;
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
	class VSS_Vintorez_Closure_SoundShader : base_ProfessionalSilenced_Closure_SoundShader
	{
		samples[] = {{"CRDTN_Sounds\Data\sounds\weapons\vss\vss_close_1", 1}};
		volume = 1;
	};
	class VSS_Vintorez_closeShot_SoundShader : base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] =
			{
				{"DZ\sounds\weapons\firearms\VSS_Vintorez\VSS_Vintorez_close_shot_01", 1},
				{"DZ\sounds\weapons\firearms\VSS_Vintorez\VSS_Vintorez_close_shot_02", 1},
				{"DZ\sounds\weapons\firearms\VSS_Vintorez\VSS_Vintorez_close_shot_03", 1}
			};
		volume = 1.1220185;
	};
	class VSS_Vintorez_midShot_SoundShader : base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] =
				{
					{"DZ\sounds\weapons\firearms\VSS_Vintorez\VSS_Vintorez_mid_shot_01", 1},
					{"DZ\sounds\weapons\firearms\VSS_Vintorez\VSS_Vintorez_mid_shot_02", 1},
					{"DZ\sounds\weapons\firearms\VSS_Vintorez\VSS_Vintorez_mid_shot_03", 1}
				};
		volume = 1.1220185;
	};
	class VSS_Vintorez_distShot_SoundShader : base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {
					{"DZ\sounds\weapons\firearms\VSS_Vintorez\VSS_Vintorez_dist_shot_01", 1},
					{"DZ\sounds\weapons\firearms\VSS_Vintorez\VSS_Vintorez_dist_shot_02", 1},
					{"DZ\sounds\weapons\firearms\VSS_Vintorez\VSS_Vintorez_dist_shot_03", 1}
				};
		volume = 1.1220185;
	};
	class VSS_Vintorez_tailForest_SoundShader : base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"CRDTN_Sounds\Data\sounds\weapons\vss\vss_tail", 1}};
	};
	class VSS_Vintorez_tailHouses_SoundShader : base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"CRDTN_Sounds\Data\sounds\weapons\vss\vss_tail", 1}};
	};
	class VSS_Vintorez_tailInterior_SoundShader : base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"CRDTN_Sounds\Data\sounds\weapons\vss\vss_indoor_tail", 1}};
	};
	class VSS_Vintorez_tailMeadows_SoundShader : base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"CRDTN_Sounds\Data\sounds\weapons\vss\vss_tail", 1}};
	};
	class VSS_Vintorez_tailTrees_SoundShader : base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"CRDTN_Sounds\Data\sounds\weapons\vss\vss_tail", 1}};
	};
	class VSS_charge_open_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"CRDTN_Sounds\Data\sounds\weapons\vss\val_boltin", 1}};
		volume = 0.79432821;
	};
	class VSS_charge_open_release_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"", 1}};
		volume = 0.79432821;
	};
	class VSS_charge_close_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"CRDTN_Sounds\Data\sounds\weapons\vss\val_boltout", 1}};
		volume = 0.79432821;
	};
	class VSS_charge_close_release_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"", 1}};
		volume = 0.79432821;
	};
	class VSS_chamber_load_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\chamber_load", 1}};
		volume = 0.79432821;
	};
	class VSS_chamber_load2_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\chamber_load2", 1}};
		volume = 0.79432821;
	};
	class VSS_mag_in_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"", 1}};
		volume = 0.79432821;
	};
	class VSS_mag_load_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"CRDTN_Sounds\Data\sounds\weapons\vss\val_magin", 1}};
		volume = 0.79432821;
	};
	class VSS_mag_out_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"", 1}};
		volume = 0.79432821;
	};
	class VSS_mag_remove_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"CRDTN_Sounds\Data\sounds\weapons\vss\val_magout", 1}};
		volume = 0.79432821;
	};
	class VSS_dry_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\VSS_Vintorez_dry", 1}};
		volume = 0.79432821;
	};
	class VSS_dry_uncock_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\VSS_Vintorez_dry_uncock", 1}};
		volume = 0.79432821;
	};
	class VSS_hand_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\hand_1", 1}};
		volume = 0.79432821;
	};
	class VSS_hand2_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\hand_2", 1}};
		volume = 0.79432821;
	};
	class VSS_hand3_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\hand_3", 1}};
		volume = 0.79432821;
	};
	class VSS_hand4_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\hand_4", 1}};
		volume = 0.79432821;
	};
	class VSS_hand5_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\hand_5", 1}};
		volume = 0.79432821;
	};
	class VSS_hand6_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\hand_6", 1}};
		volume = 0.79432821;
	};
	class VSS_hand7_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\hand_7", 1}};
		volume = 0.79432821;
	};
	class VSS_hand8_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\hand_8", 1}};
		volume = 0.79432821;
	};
	class VSS_jamming1_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\jamming_01", 1}};
		volume = 0.79432821;
	};
	class VSS_jamming2_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\jamming_02", 1}};
		volume = 0.79432821;
	};
	class VSS_jamming3_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\jamming_03", 1}};
		volume = 0.79432821;
	};
	class VSS_jamming4_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\jamming_04", 1}};
		volume = 1;
	};
	class VSS_jamming5_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\jamming_05", 1}};
		volume = 0.79432821;
	};
	class VSS_jamming6_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\jamming_06", 1}};
		volume = 0.79432821;
	};
	class VSS_jamming7_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\jamming_07", 1}};
		volume = 0.79432821;
	};
	class VSS_jamming8_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\jamming_08", 1}};
		volume = 0.79432821;
	};
	class VSS_jamming9_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\jamming_09", 1}};
		volume = 0.79432821;
	};
	class VSS_jam_SoundShader : reloadWeapon_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\jam", 1}};
		volume = 0.79432821;
	};
	class VSS_charge_open_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\charge_open_tail_Interior", 1}};
	};
	class VSS_charge_open_release_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\charge_open_release_tail_Interior", 1}};
	};
	class VSS_charge_close_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\charge_close_tail_Interior", 1}};
	};
	class VSS_charge_close_release_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\charge_close_release_tail_Interior", 1}};
	};
	class VSS_chamber_load_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\chamber_load_tail_Interior", 1}};
	};
	class VSS_chamber_load2_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{ 
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\chamber_load2_tail_Interior", 1}};
	};
	class VSS_mag_in_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\mag_load_tail_Interior", 1}};
	};
	class VSS_mag_load_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\mag_load_slow_tail_Interior", 1}};
	};
	class VSS_mag_out_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] = {{"", 1}};
	};
	class VSS_mag_remove_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\mag_remove_tail_Interior", 1}};
	};
	class VSS_pullout_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\pullout_tail_Interior", 1}};
	};
	class VSS_dry_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\VSS_Vintorez_dry_tail_Interior", 1}};
	};
	class VSS_dry_uncock_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] = {{"", 1}};
	};
	class VSS_hand_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\hand_1_tail_Interior", 1}};
	};
	class VSS_hand2_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\hand_2_tail_Interior", 1}};
	};
	class VSS_hand3_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\hand_3_tail_Interior", 1}};
	};
	class VSS_hand4_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\hand_4_tail_Interior", 1}};
	};
	class VSS_hand5_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] =
			{
				{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\hand_5_tail_Interior", 1}};
	};
	class VSS_hand6_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] =
			{
				{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\hand_6_tail_Interior", 1}};
	};
	class VSS_hand7_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] =
			{
				{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\hand_7_tail_Interior", 1}};
	};
	class VSS_hand8_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] =
			{
				{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\hand_8_tail_Interior", 1}};
	};
	class VSS_jamming1_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] =
			{
				{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\jamming_01_tail_Interior", 1}};
	};
	class VSS_jamming2_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] =
			{
				{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\jamming_02_tail_Interior", 1}};
	};
	class VSS_jamming3_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] =
			{
				{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\jamming_03_tail_Interior", 1}};
	};
	class VSS_jamming4_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] =
			{
				{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\jamming_04_tail_Interior", 1}};
	};
	class VSS_jamming5_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] =
			{
				{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\jamming_05_tail_Interior", 1}};
	};
	class VSS_jamming6_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] =
			{
				{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\jamming_06_tail_Interior", 1}};
	};
	class VSS_jamming7_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] =
			{
				{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\jamming_07_tail_Interior", 1}};
	};
	class VSS_jamming8_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] =
			{
				{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\jamming_08_tail_Interior", 1}};
	};
	class VSS_jamming9_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] =
			{
				{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\jamming_09_tail_Interior", 1}};
	};
	class VSS_jam_TailInterior_SoundShader : reloadWeaponINT_SoundShader
	{
		samples[] =
			{
				{"DZ\sounds\weapons\firearms\VSS_Vintorez\handling\tail\jam_tail_Interior", 1}};
	};
};
