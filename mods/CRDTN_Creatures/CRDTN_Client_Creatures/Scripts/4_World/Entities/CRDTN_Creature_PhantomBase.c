class CRDTN_CreaturePhantomWolfBase : CRDTN_Creature_PhantomBase {};
class CRDTN_PhantomWolfGrey : CRDTN_CreaturePhantomWolfBase {};
class CRDTN_PhantomWolfWhite : CRDTN_CreaturePhantomWolfBase {};

class CRDTN_Creature_PhantomBase : AnimalBase
{
    private EffectSound m_IdleEffectSound;
    private const int SPAWN_HIT_DISTANCE = 100;
    private PlayerBase m_PlayerReference;

    override void EEInit()
    {
        super.EEInit();
        if (GetGame().IsClient())
        {
            PlayIdleSound();
        }
    }

    protected void PlayIdleSound()
    {
        PlaySoundSetLoop(m_IdleEffectSound, "CRDTN_SoundSet_Psi_Idle", 0.2, 0.2);
    }

    override bool CanBeSkinned()
    {
        return true;
    }

    override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
    {
        super.OnRPC(sender, rpc_type, ctx);

        if (rpc_type == CRDTN_RPC_CREATURES.PHANTOM_ALPHA_KILLED)
        {
            if (GetGame().IsClient())
            {
                if (m_IdleEffectSound)
                {
                    m_IdleEffectSound.SoundStop();
                }

                if (m_PlayerReference)
                {
                    m_PlayerReference.ResetPPE();
                }
            }
        }

        if (rpc_type == CRDTN_RPC_CREATURES.PHANTOM_MINION_SPAWNED)
        {
            if (GetGame().IsClient())
            {
                PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
                if (player && vector.Distance(player.GetPosition(), this.GetPosition()) < SPAWN_HIT_DISTANCE)
                {
                    CRDTN_PluginBase.CRDTN_PlaySound("CRDTN_SoundSet_PhantomSpawn", this);
                    CRDTN_PluginBase.CRDTN_PlaySound("CRDTN_SoundSet_StalkerSounds_Ambient_17", this);
                    Param1<int> data;
                    if (!ctx.Read(data))
                        return;
                    
                    int minionsCount = data.param1;
                    m_PlayerReference = player;
                    m_PlayerReference.RequestPPEChange(CRDTN_PPEffect.ChromAbr, minionsCount);
                }
            }
        }
    }
};

