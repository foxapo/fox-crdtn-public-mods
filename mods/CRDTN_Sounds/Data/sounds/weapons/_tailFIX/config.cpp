 class CfgPatches
{
	class Sounds_Curves
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Vehicles_Wheeled",
            "DZ_Sounds_Effects"
		};
	};
};

// The originam mod is -  https://steamcommunity.com/sharedfiles/filedetails/?id=2806277118

class CfgSoundShaders
{
	class base_HomeSilenced_tailTrees_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
		rangeCurve="tailShotSilenced_tailAttenuationCurve";
		range=1000;
	};
	class base_HomeSilenced_tailMeadows_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees)) * (1-interior/4)";
		rangeCurve="tailShotSilenced_tailAttenuationCurve";
		range=1000;
	};
	class base_HomeSilenced_tailHouses_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
		rangeCurve="tailShotSilenced_tailAttenuationCurve";
		range=1000;
	};
	class base_HomeSilenced_tailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
		rangeCurve="tailShotSilenced_tailAttenuationCurve";
		range=1000;
	};
	class base_ProfessionalSilenced_tailForest_SoundShader
	{
		volume="(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
		rangeCurve="tailShotSilenced_tailAttenuationCurve";
		range=1000;
	};
	class base_ProfessionalSilenced_tailHouses_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		volume="(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
		rangeCurve="tailShotSilenced_tailAttenuationCurve";
		range=1000;
	};
	class base_ProfessionalSilenced_tailMeadows_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		volume="(meadows + sea)/(forest + houses + meadows + sea + trees)) * (1-interior/4)";
		rangeCurve="tailShotSilenced_tailAttenuationCurve";
		range=1000;
	};
	class base_ProfessionalSilenced_tailTrees_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		volume="(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
		rangeCurve="tailShotSilenced_tailAttenuationCurve";
		range=1000;
	};
};
class CfgSoundCurves
{
	class tailShotSilenced_tailAttenuationCurve
	{
		points[]=
		{
			{0,1},
			{30,1},
			{40,0.89399999},
			{50,0.77600002},
			{60,0.63200003},
			{70,0.447},
			{80,0},
			{200,0}
		};
	};
};