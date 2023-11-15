
class CfgPatches
{
	class CRDTN_SoundsWeapons
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Sounds_Effects"};
	};
};

class CfgWeapons
{
	class Rifle_Base;
	class Shotgun_Base;
	class BoltActionRifle_InnerMagazine_Base;
	class BoltActionRifle_Base;
	class Pistol_Base;
	class AKM_Base: Rifle_Base
	{
		aimSoundSet="AK";
	};
	class AK101_Base: Rifle_Base
	{
		aimSoundSet="AK";
	};
	class AK74_Base: Rifle_Base
	{
		aimSoundSet="AK";
	};
	class B95_Base: Rifle_Base
	{
		aimSoundSet="Winchester70";
	};
	class Colt1911_Base: Pistol_Base
	{
		aimSoundSet="FNX45";
	};
	class CZ61_Base: Rifle_Base
	{
		aimSoundSet="CZ61";
	};
	class CZ527_Base: BoltActionRifle_Base
	{
		aimSoundSet="CR527";
	};
	class CZ75_Base: Pistol_Base
	{
		aimSoundSet="FNX45";
	};
	class Deagle_Base: Pistol_Base
	{
		aimSoundSet="FNX45";
	};
	class FAL_Base: Rifle_Base
	{
		aimSoundSet="SVD";
	};
	class FNX45_Base: Pistol_Base
	{
		aimSoundSet="FNX45";
	};
	class Glock19_Base: Pistol_Base
	{
		aimSoundSet="FNX45";
	};
	class Izh18_Base: Rifle_Base
	{
		aimSoundSet="CR527";
	};
	class Izh43Shotgun_Base: Shotgun_Base
	{
		aimSoundSet="Saiga";
	};
	class M4A1_Base: Rifle_Base
	{
		aimSoundSet="VSS";
	};
	class Magnum_Base: Pistol_Base
	{
		aimSoundSet="FNX45";
	};
	class MakarovIJ70_Base: Pistol_Base
	{
		aimSoundSet="FNX45";
	};
	class Mosin9130_Base: BoltActionRifle_InnerMagazine_Base
	{
		aimSoundSet="Mosin";
	};
	class Mp133Shotgun_Base: Shotgun_Base
	{
		aimSoundSet="Saiga";
	};
	class MP5K_Base: Rifle_Base
	{
		aimSoundSet="VSS";
	};
	class Repeater_Base: Rifle_Base
	{
		aimSoundSet="CR527";
	};
	class Ruger1022_Base: Rifle_Base
	{
		aimSoundSet="CR527";
	};
	class Saiga_Base: Rifle_Base
	{
		aimSoundSet="Saiga";
	};
	class Scout_Base: BoltActionRifle_Base
	{
		aimSoundSet="CR527";
	};
	class SKS_Base: Rifle_Base
	{
		aimSoundSet="CR527";
	};
	class SVD_Base: Rifle_Base
	{
		aimSoundSet="SVD";
	};
	class UMP45_Base: Rifle_Base
	{
		aimSoundSet="VSS";
	};
	class VSS_Base: Rifle_Base
	{
		aimSoundSet="VSS";
	};
	class Winchester70_Base: BoltActionRifle_InnerMagazine_Base
	{
		aimSoundSet="Winchester70";
	};
};

class CfgSoundSets
{
	class baseCharacter_SoundSet;
	class SoundSet_CRDTN_AK_Base
	{
		volumeFactor = 0.2;
		frequencyFactor = 1;
		spatial = 0;
	};
	class aim_in_Base_SoundSet : baseCharacter_SoundSet
	{
		frequencyRandomizer = 1;
		volumeRandomizer = 1;
	};
	class aim_out_Base_SoundSet : baseCharacter_SoundSet
	{
		frequencyRandomizer = 1;
		volumeRandomizer = 1;
	};

	#include "aim_sound_sets.hpp"
};

class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class base_closeShot_SoundShader
	{
		volume = 1;
		range = 3500;
		rangeCurve = "closeShotAttenuationCurve";
	};
	class closeShotRifle_SoundShader : base_closeShot_SoundShader
	{
		rangeCurve = "closeShotRifleCurve";
		range = 3000;
	};

	class base_midShot_SoundShader
	{
		volume = 1;
		range = 3500;
		rangeCurve = "midShotAttenuationCurve";
	};

	class midShotRifle_SoundShader : base_midShot_SoundShader
	{
		rangeCurve = "midShotRifleCurve";
		range = 3000;
	};

	class base_distShot_SoundShader
	{
		volume = 1;
		range = 3500;
		rangeCurve = "distShotAttenuationCurve";
	};

	class distShotRifle_SoundShader : base_distShot_SoundShader
	{
		rangeCurve = "distShotRifleCurve";
		range = 3000;
	};

	class base_ProfessionalSilenced_closeShot_SoundShader
	{
		volume = 1;
		range = 150;
		rangeCurve = "closeShotProfessionalSilencedAttenuationCurve";
	};

	// GLOCK

	class closeShotPistol_SoundShader: base_closeShot_SoundShader
	{
		rangeCurve = "closeShotPistolCurve";
		range = 1000;
	};

	class Glock19_closeShot_SoundShader : closeShotPistol_SoundShader
	{
		samples[] = {
			{"CRDTN_Sounds\Data\sounds\weapons\GLOCK\glock_shoot", 1},
			{"CRDTN_Sounds\Data\sounds\weapons\GLOCK\glock_shoot1", 1},
			{"CRDTN_Sounds\Data\sounds\weapons\GLOCK\glock_shoot2", 1}
			};
	};
	class Glock19_silencerCloseShot_SoundShader : base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {
			{"CRDTN_Sounds\Data\sounds\weapons\GLOCK\glock_shot_sil", 1}};
	};

	// AK

	class AK_closeShot_SoundShader : closeShotRifle_SoundShader
	{
		samples[] = {
			{"CRDTN_Sounds\Data\sounds\weapons\ak\ak_shoot", 1},
			{"CRDTN_Sounds\Data\sounds\weapons\ak\ak_shoot1", 1}
			// {"CRDTN_Sounds\Data\sounds\weapons\ak\ak_shoot2", 1},
			// {"CRDTN_Sounds\Data\sounds\weapons\ak\ak_shoot3", 1},
			// {"CRDTN_Sounds\Data\sounds\weapons\ak\ak_shoot4", 1},
			// {"CRDTN_Sounds\Data\sounds\weapons\ak\ak_shoot5", 1},
		};
		volume = 0.70794576;
	};

	class AK_silencerCloseShot_SoundShader : base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"CRDTN_Sounds\Data\sounds\weapons\ak\ak_shot_sil", 1}};
		volume = 1.0;
	};

	class AK_midShot_SoundShader : midShotRifle_SoundShader
	{
		samples[] = {{"CRDTN_Sounds\Data\sounds\weapons\_distance_shooting_mid\ak_distant", 1}};
		volume = 0.3548134;
	};

	class AK_distShot_SoundShader : distShotRifle_SoundShader
	{
		samples[] = {{"CRDTN_Sounds\Data\sounds\weapons\_distance_shooting_far\ak_distant", 1}};
		volume = 0.3548134;
	};

	// M4

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

	#include "M4A1\m4a1.hpp"

	// AIM SOUNDS

	#include "aim_sound_shaders.hpp"
};
