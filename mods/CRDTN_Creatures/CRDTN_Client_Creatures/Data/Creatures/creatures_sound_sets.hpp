class CRDTN_Core_SoundSet_Sound_Base;
class CRDTN_SoundSet_Psi_Idle : CRDTN_Core_SoundSet_Sound_Base
{
    soundShaders[] = {"CRDTN_SoundShader_PsiFxIdle"};
};

class CRDTN_SoundSet_PhantomSpawn : CRDTN_Core_SoundSet_Sound_Base
{
    volumeFactor = 1.0;
    frequencyFactor = 1;
    frequencyRandomizer = 0.3;
    spatial = 1;
    doppler = 1;
    soundShaders[] = {"CRDTN_SoundShader_PhantomSpawn"};
};