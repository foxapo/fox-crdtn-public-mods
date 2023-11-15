class FireHeal : ModifierBase
{
    private  ref FireRegenConfig    m_FireRegenConfig                 = NULL;
    private  float                  m_HealTreshold                    = 100;
    private  float                  m_BloodTreshold                   = 5000;
    private  EStatLevels            m_HungerThreshold                 = EStatLevels.HIGH;
    private  EStatLevels            m_ThirstThreshold                 = EStatLevels.HIGH;
    private  float                  m_HealRadius                      = 3;
    private  float                  m_HealRatePerTick                 = 0.25;
    private  float                  m_BloodRatePerTick                = 0.25;
    private  bool                   m_IndoorOnly                      = true;
    // Notifications
    private  string                 m_NotificationHealEnded           =  "";
    private  string                 m_NotificationHealStarted         =  "";
    private  string                 m_NotificationHungerAndThirst     =  "";
    private  string                 m_NotificationHealthIncrement     =  "";
    private  string                 m_NotificationBloodIncrement      =  "";
    private  string                 m_NotificationHealthReached       =  "";
    private  string                 m_NotificationBloodReached        =  "";

    override void Init()
    {
        m_TrackActivatedTime = false;
        m_ID = eFireHealModifiers.MDF_CRDTN_FIRE_HEAL;
        SetConfigData();
    }

    override bool ActivateCondition(PlayerBase player)
    {
        if(!IsFireplaceNearby(player))
            return false;

        if(IsHungryOrThirsty(player))
        {
            this.NotifyPlayer(player, m_NotificationHungerAndThirst);
            return false;
        }

        return !IsFullOnHealthAndBlood(player);
    }

    override void OnActivate(PlayerBase player)
    {
        this.NotifyPlayer(player, m_NotificationHealStarted);
    }

    override void OnDeactivate(PlayerBase player)
    {
        this.NotifyPlayer(player, m_NotificationHealEnded);
    }

    override bool DeactivateCondition(PlayerBase player)
    {
        return !IsFireplaceNearby(player) || IsFullOnHealthAndBlood(player);
    }

    override void OnTick(PlayerBase player, float deltaT)
    {

        if(IsHungryOrThirsty(player))
        {
            this.NotifyPlayer(player, m_NotificationHungerAndThirst);
            return;
        }
        
        if(m_HealRatePerTick > 0)
        {
            float currenthealth = player.GetHealth("GlobalHealth", "Health");
            if(currenthealth < m_HealTreshold)
            {
                player.SetHealth("GlobalHealth", "Health", (currenthealth + m_HealRatePerTick));
                this.NotifyPlayer(player, m_NotificationHealthIncrement);
            }else {
                this.NotifyPlayer(player, m_NotificationHealthReached);
            }
        }

        if(m_HealRatePerTick > 0)
        {
            float currentblood = player.GetHealth("GlobalHealth", "Blood");
            if(currentblood < m_BloodTreshold)
            {
                player.SetHealth("GlobalHealth", "Blood", (currentblood + m_BloodRatePerTick));
                this.NotifyPlayer(player, m_NotificationBloodIncrement);
            }
            else {
                this.NotifyPlayer(player, m_NotificationBloodReached);
            }
        }
    }
    
    private bool IsFullOnHealthAndBlood(PlayerBase player)
    {
        return player.GetHealth("GlobalHealth", "Health") >= m_HealTreshold && player.GetHealth("GlobalHealth", "Blood") >= m_BloodTreshold;
    }

    private bool IsHungryOrThirsty(PlayerBase player)
    {
        int energy_level = player.GetStatLevelEnergy();
        int water_level = player.GetStatLevelWater();
        return energy_level > m_HungerThreshold || water_level > m_ThirstThreshold;
    }

    private bool IsFireplaceNearby(PlayerBase player)
    {
        array<Object> nearestObjects = new array<Object>;
        GetGame().GetObjectsAtPosition(player.GetPosition(), GameConstants.ENVIRO_TEMP_SOURCES_LOOKUP_RADIUS, nearestObjects, null);
        foreach (Object nearestObject : nearestObjects)
        {
            EntityAI ent = EntityAI.Cast(nearestObject);
            if (ent && ent.IsUniversalTemperatureSource() && ent != player)
            {
                if (!ent.IsFireplace())
                    continue;

                FireplaceBase fireplace = FireplaceBase.Cast(ent);
                if (m_IndoorOnly)
                {   // ONLY INDOOR CHECK
                    if (!fireplace.IsFireplaceIndoor() && !fireplace.IsIndoorOven())
                    {
                        continue;
                    }
                }

                if (!fireplace.IsBurning())
                {
                    continue;
                }

                if (vector.DistanceSq(player.GetPosition(), ent.GetPosition()) > m_HealRadius)
                {
                    continue;
                }

                return true;
            }
        }
        return false;
    }

    private void SetConfigData()
    {
        m_FireRegenConfig = GetFireRegenPlugin().GetConfig();
        m_HealTreshold = m_FireRegenConfig.HealTreshold;
        m_BloodTreshold = m_FireRegenConfig.BloodTreshold;
        m_HungerThreshold = m_FireRegenConfig.HungerThreshold;
        m_ThirstThreshold = m_FireRegenConfig.ThirstThreshold;
        m_HealRadius = m_FireRegenConfig.HealRadius;
        m_HealRatePerTick = m_FireRegenConfig.HealthRatePerTick;
        m_BloodRatePerTick = m_FireRegenConfig.BloodRatePerTick;
        m_IndoorOnly = m_FireRegenConfig.IndoorOnly;
        m_TickIntervalInactive = m_FireRegenConfig.TickIntervalInactive;
        m_TickIntervalActive = m_FireRegenConfig.TickIntervalActive;
        m_NotificationHealEnded = m_FireRegenConfig.NotificationHealEnded;
        m_NotificationHealStarted = m_FireRegenConfig.NotificationHealStarted;
        m_NotificationHungerAndThirst = m_FireRegenConfig.NotificationHungerAndThirst;
        m_NotificationHealthIncrement = m_FireRegenConfig.NotificationHealthIncrement;
        m_NotificationBloodIncrement = m_FireRegenConfig.NotificationBloodIncrement;
        m_NotificationHealthReached = m_FireRegenConfig.NotificationHealthReached;
        m_NotificationBloodReached = m_FireRegenConfig.NotificationBloodReached;
    }

    private void NotifyPlayer(PlayerBase player, string message)
    {
        if (message == "")
        {
            return;
        }
        player.MessageAction(message);
    }
};