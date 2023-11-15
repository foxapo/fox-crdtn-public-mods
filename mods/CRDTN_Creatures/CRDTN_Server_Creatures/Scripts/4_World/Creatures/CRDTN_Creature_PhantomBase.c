// This mod is inspired and based on the mod "Psycho Dog" by "Moony" or whoever made this mod.
// It allows to use custom classes to use the phantom spawning mechanic
// I've also done a bit of refactoring and add some more features like a camera shake effect and a post processing effect
modded class CRDTN_Creature_PhantomBase
{
    private int m_PhantomsCount     = 10;  // number of phantoms
    private int m_PhantomSpawnTimer = 5;   // phantoms spawn time in seconds
    private int m_PhantomCheckTimer = 1;   // phantoms alive check time in seconds (despawn treshold)
    private float m_SpawnRadius     = 7;   // phantom spawn radius
    private float m_PhantomHealth   = 1;   // phantom health;
    private float m_MaxDistance     = 25;  // max distance to player
    private float m_PhantomSize     = 1;   // phantom size

    
    protected ref Timer m_AnimalUpdater;
    protected ref Timer m_RangeUpdater;
    
    private string m_Classname = "Animal_CanisLupus"; // phantom classname

    private ref set<PlayerBase> m_Players = new set<PlayerBase>;
    private ref set<CRDTN_Creature_Minion> m_Minions = new set<CRDTN_Creature_Minion>;

    private int m_SpawnedMinions = 0;
    private bool m_DespawnAvailable = true;
    
    const int MAX_SPAWN_RADIUS = 30;

    void CRDTN_Creature_PhantomBase()
    {
        m_Classname = ConfigGetString("phantomType");
        m_PhantomsCount = ConfigGetInt("phantomCount");
        m_PhantomSpawnTimer = ConfigGetInt("phantomSpawnTimer");
        m_PhantomCheckTimer = ConfigGetInt("phantomCheckTimer");
        m_SpawnRadius = ConfigGetFloat("phantomRadius");
        m_MaxDistance = ConfigGetFloat("phantomEffectDistance");
        m_PhantomSize = ConfigGetFloat("phantomSize");

        m_Players = new set<PlayerBase>;
        m_Minions = new set<CRDTN_Creature_Minion>;

        m_SpawnedMinions = 0;
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InvokeUpdate, 1000, false);
    };

    void ~CRDTN_Creature_PhantomBase()
    {
        delete m_AnimalUpdater;
        delete m_RangeUpdater;
    };

    override void EEKilled(Object killer)
    {
        super.EEKilled(killer);
        KillAllPhantoms();
        GetGame().RPCSingleParam(this, CRDTN_RPC_CREATURES.PHANTOM_ALPHA_KILLED, null, true);
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).Remove(InvokeUpdate);
    }

    void InvokeUpdate()
    {
        CheckPlayerInRange();
        SpawnPhantom();
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InvokeUpdate, m_PhantomSpawnTimer * 1000, false);
    }

    void CheckPlayerInRange()
    {
        CRDTN_PlayerUtils.CheckPlayerInRange(this, m_MaxDistance, m_Players);
    }

    void SpawnPhantom()
    {
        if (m_Players.Count() == 0)
        {
            DespawnAllPhantomsWhenNoPlayers();
            return;
        }

        if(m_SpawnedMinions < m_PhantomsCount)
        {
            vector currentPosition = this.GetPosition();

            currentPosition[0] = currentPosition[0] + Math.RandomInt(-m_SpawnRadius, m_SpawnRadius);
            currentPosition[2] = currentPosition[2] + Math.RandomInt(-m_SpawnRadius, m_SpawnRadius);
            
            CRDTN_Creature_Minion phantomInstance = CRDTN_Creature_Minion.Cast(GetGame().CreateObject(m_Classname, currentPosition, false, true));
            phantomInstance.SetHealth(m_PhantomHealth);
            phantomInstance.SetAlfa(this);
            m_SpawnedMinions++;
            m_Minions.Insert(phantomInstance);
        }

        ShockAllPlayers(5);
        GetGame().RPCSingleParam(this, CRDTN_RPC_CREATURES.PHANTOM_MINION_SPAWNED, new Param1<int>(m_SpawnedMinions), true);
    };

    void OnMinionKilled(CRDTN_Creature_Minion minion)
    {
        m_SpawnedMinions--;
        m_Minions.RemoveItem(minion);
        GetGame().ObjectDelete(minion);
    }

    void KillAllPhantoms(bool doDmg = true) // despawns phantom
    {
        for(int i = 0; i < m_Minions.Count(); i++)
        {
            if(m_Minions.Get(i) == NULL)
            {
                continue;
            }

            m_Minions.Get(i).SetHealth("","",0); //dontobf
            GetGame().ObjectDelete(m_Minions.Get(i));
        }

        m_Minions.Clear();
        m_SpawnedMinions = 0;

        if(doDmg)
            ShockAllPlayers(100);
    };

    void DespawnAllPhantomsWhenNoPlayers()
    {
        if(m_DespawnAvailable && m_SpawnedMinions > 0)
        {
            m_DespawnAvailable = false;
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DespawnAllPhantoms, 20000, false);
        }
    }

    void DespawnAllPhantoms()
    {
        if(m_SpawnedMinions > 0)
        {
            KillAllPhantoms(false);
        }
        m_DespawnAvailable = true;
    }

    void ShockAllPlayers(float dmg)
    {
        foreach(PlayerBase player : m_Players)
        {
            if(vector.Distance(player.GetPosition(), GetPosition()) < m_MaxDistance)
            {
                float shockDamage = player.GetHealth("", "Shock");
                player.SetHealth("", "Shock", shockDamage - dmg);
                player.RequestSoundEvent(EPlayerSoundEventID.TAKING_DMG_LIGHT);
                if(dmg > 50)
                    GetCRDTN_CorePluginServer().PlaySoundOnClient(player, "CRDTN_SoundSet_StalkerSounds_Ambient_17");
            }
        }
    }

    
};

