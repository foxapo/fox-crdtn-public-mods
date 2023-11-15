class M4_closeShot_SoundShader : closeShotRifle_SoundShader
{
    samples[] = {
        {"CRDTN_Sounds\Data\sounds\weapons\M4A1\famas_shoot", 1},
        {"CRDTN_Sounds\Data\sounds\weapons\M4A1\famas_shoot1", 1},
        {"CRDTN_Sounds\Data\sounds\weapons\M4A1\famas_shoot2", 1},
        {"CRDTN_Sounds\Data\sounds\weapons\M4A1\famas_shoot3", 1},
        {"CRDTN_Sounds\Data\sounds\weapons\M4A1\famas_shoot4", 1},
        {"CRDTN_Sounds\Data\sounds\weapons\M4A1\famas_shoot5", 1},
    };
    volume = 1.0;
};

class M4_silencerCloseShot_SoundShader : base_ProfessionalSilenced_closeShot_SoundShader
{
    samples[] = {{"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4a1_shot_sil", 1}};
    volume = 1.0;
};

class M4_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
{
    samples[]= {{ "CRDTN_Sounds\Data\sounds\weapons\M4A1\m4a1_shot_sil", 1 }};
    volume=0.56234133;
};
class M4_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
{
    samples[]= {{ "CRDTN_Sounds\Data\sounds\weapons\M4A1\m4a1_shot_sil", 1 }};
    volume=1;
};

class M4_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
{		
    samples[]={{"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_outdoor_tail",1}};
};
class M4_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
{		
    samples[]={{"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_outdoor_tail",1}};
};
class M4_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
{		
    samples[]={{"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_indoor_tail",1}};
};
class M4_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
{		
    samples[]={{"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_outdoor_tail",1}};
};
class M4_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
{		
    samples[]={{"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_outdoor_tail",1}};
};
class M4_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
{		
    samples[]={{"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_close_1",1}};
    volume=1;
};
class M4_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
{		
    samples[]={{"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_close_1",1}};
    volume=0.56234133;
};
class M4_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
{		
    samples[]={{"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_outdoor_tail",1}};
    volume=1;
};
class M4_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
{		
    samples[]={{"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_outdoor_tail",1}};
};
class M4_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
{		
    samples[]={{"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_outdoor_tail",1}};
};
class M4_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
{		
    samples[]={{"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_indoor_tail",1}};
};
class M4_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
{		
    samples[]={{"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_outdoor_tail",1}};
};
class M4_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
{		
    samples[]={{"CRDTN_Sounds\Data\sounds\weapons\M4A1\m4_silenced_outdoor_tail",1}};
};

class M4_midShot_SoundShader : midShotRifle_SoundShader
{
    samples[] = {{"CRDTN_Sounds\Data\sounds\weapons\_distance_shooting_mid\scar_distant", 1}};
    volume = 0.56234133;
};
class M4_distShot_SoundShader : distShotRifle_SoundShader
{
    samples[] = {{"CRDTN_Sounds\Data\sounds\weapons\_distance_shooting_far\scar_distant", 1}};
    volume = 1.0;
};