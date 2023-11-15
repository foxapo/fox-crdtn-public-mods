class FireRegenConfig
{
    float HealRadius                            = 2;        // Radius in meters
    float HealTreshold                          = 100;
    float BloodTreshold                         = 5000;
    EStatLevels HungerThreshold                 = 1;        // GREAT - 0, HIGH - 1, MEDIUM - 2, LOW - 3, CRITICAL - 4
    EStatLevels ThirstThreshold                 = 1;        
    float HealthRatePerTick                     = 0.25;     // Amount of stat add/subtract per TickIntervalActive
    float BloodRatePerTick                      = 0.25;
    bool IndoorOnly                             = true;     // If false, works on every fireplace object
    float TickIntervalInactive                  = 10.0;
    float TickIntervalActive                    = 10.0;
    string NotificationHealEnded                = "Goodbye my lovely fireplace!";
    string NotificationHealStarted              = "Ho Ho Ho... I'm getting much better now.";
    string NotificationHungerAndThirst          = "Player is too hungry or thirsty to heal";
    string NotificationHealthIncrement          = "Player's health is increasing";
    string NotificationBloodIncrement           = "Player's blood is increasing";
    string NotificationHealthReached            = "Player's health is full";
    string NotificationBloodReached             = "Player's blood is full";

    static void Load(out FireRegenConfig instance)
    {
        JsonFileLoader<ref FireRegenConfig>.JsonLoadFile(CFG_FireRegensConfig, instance);
        // if the file does not exist, create it
        if (instance == null)
        {
            instance = new FireRegenConfig();
            Save(instance);
            Print(CFG_FireRegenPrefix + "Config file not found, creating new one!");
        }else{
            Print(CFG_FireRegenPrefix + "Config loaded from " + CFG_FireRegensConfig);
        }
        
        Print(CFG_FireRegenPrefix + "HealTreshold: " + instance.HealTreshold);
        Print(CFG_FireRegenPrefix + "BloodTreshold: " + instance.BloodTreshold);
        Print(CFG_FireRegenPrefix + "HungerThreshold: " + instance.HungerThreshold);
        Print(CFG_FireRegenPrefix + "ThirstThreshold: " + instance.ThirstThreshold);
        Print(CFG_FireRegenPrefix + "HealRadius: " + instance.HealRadius);
        Print(CFG_FireRegenPrefix + "HealthRatePerTick: " + instance.HealthRatePerTick);
        Print(CFG_FireRegenPrefix + "BloodRatePerTick: " + instance.BloodRatePerTick);
        Print(CFG_FireRegenPrefix + "IndoorOnly: " + instance.IndoorOnly);
        Print(CFG_FireRegenPrefix + "TickIntervalInactive: " + instance.TickIntervalInactive);
        Print(CFG_FireRegenPrefix + "TickIntervalActive: " + instance.TickIntervalActive);
        Print(CFG_FireRegenPrefix + "NotificationHealStarted: " + instance.NotificationHealStarted);
        Print(CFG_FireRegenPrefix + "NotificationHealEnded: " + instance.NotificationHealEnded);
        Print(CFG_FireRegenPrefix + "NotificationHungerAndThirst: " + instance.NotificationHungerAndThirst);
        Print(CFG_FireRegenPrefix + "NotificationHealthIncrement: " + instance.NotificationHealthIncrement);
        Print(CFG_FireRegenPrefix + "NotificationBloodIncrement: " + instance.NotificationBloodIncrement);
        Print(CFG_FireRegenPrefix + "NotificationHealthReached: " + instance.NotificationHealthReached);
        Print(CFG_FireRegenPrefix + "NotificationBloodReached: " + instance.NotificationBloodReached);
    }

    static void Save(ref FireRegenConfig instance)
    {
        JsonFileLoader<ref FireRegenConfig>.JsonSaveFile(CFG_FireRegensConfig, instance);
        Print(CFG_FireRegenPrefix + "Saving config to " + CFG_FireRegensConfig);
    }
}