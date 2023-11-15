class CRDTN_Core_SoundShader_Sound_Base;

class CRDTN_SoundShader_PsiFxIdle : CRDTN_Core_SoundShader_Sound_Base
{
    samples[] = {{"\CRDTN_Client_Creatures\Data\Sounds\fx\k_psi", 1}};
    volume = 0.45;
    range = 50;
    rangeCurve = "defaultAnimalAttenuationCurve";
};

class CRDTN_SoundShader_PhantomSpawn : CRDTN_Core_SoundShader_Sound_Base
{
    range = 80;
    samples[] = {{"\CRDTN_Client_Creatures\Data\Sounds\fx\psy_dog_spawn", 1}};
};