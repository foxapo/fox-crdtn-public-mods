class CfgPatches
{
    class CRDTN_Client_Creatures
    {
        units[]          = { "CRDTN_PhantomWolfGrey", "CRDTN_PhantomWolfWhite" };
        weapons[]        = {};
        requiredVersion  = 0.1;
        requiredAddons[] = { "DZ_Data", "DZ_Scripts", "DZ_Animals", "CRDTN_Core" };
        defines[]        = {"CRDTN_Creatures"};
    };
};

class CfgMods
{

    class CRDTN_Client_Creatures
    {
        name           = "FOX Coradiation ClientMod for the Creatures";
        credits        = "Big Kudos to guys from the Renegade Stalker Server for providing valuable information";
        author         = "FoxApoGames - Freeman";
        type           = "mod";
        dependencies[] = {"Game", "World"};
        dir            = "CRDTN_Client_Creatures";

        class defs
        {
            class gameScriptModule
            {
                value   = "";
                files[] = {"CRDTN_Client_Creatures/Scripts/3_Game"};
            };
            class worldScriptModule
            {
                value   = "";
                files[] = {"CRDTN_Client_Creatures/Scripts/4_World"};
            };
        };
    };
};

class CfgVehicles
{
    class HouseNoDestruct;

    class CRDTN_FX_Phantom_Spawn: HouseNoDestruct
    {
        scope  = 2;
        weight = 99999999;
    };
    class CRDTN_FX_Phantom_Despawn: HouseNoDestruct
    {
        scope  = 2;
        weight = 99999999;
    };

    class AnimalBase;
    class Animal_CanisLupus: AnimalBase
    {
    };
    class CRDTN_CreaturePhantomWolfBase: Animal_CanisLupus
    {
        simulation          = "dayzanimal";
        scope               = 0;
        model               = "\DZ\animals\canis_lupus\canis_lupus.p3d";
        displayName         = "Phantom Dog";
        descriptionShort    = "$STR_CfgVehicles_Animal_CanisLupus1";
        hiddenSelections[]  = {"Camo", "CamoHair"};
        DamageSphereAmmos[] = {"MeleeWolf"};
        aiAgentTemplate     = "Predators_Wolf";
        injuryLevels[]      = {1.0, 0.5, 0.2, 0.0};
                                                            // Phantom Variables
        phantomType           = "Animal_CanisLupus_White";  // Set on the subclasses
        phantomCount          = 5;                          // Max phantom count
        phantomSpawnTimer     = 3;                          // Interval of spawning in seconds
        phantomCheckTimer     = 1;                          // Interval of checking in seconds
        phantomRadius         = 10;                         // Spawn Radius
        phantomEffectDistance = 30;                         // Meters
        phantomSize = 0.2;

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                        // 600 HP - can be increased
                    hitpoints      = 1200;
                    healthLevels[] = {{1.0, {}}, {0.7, {}}, {0.5, {}}, {0.3, {}}, {0.0, {}}};
                };
                class Blood
                {
                    hitpoints = 5000;
                };
                class Shock
                {
                    hitpoints = 100;
                };
            };
            class DamageZones
            {
                class Zone_Head
                {
                    componentNames[]       = {"Zone_Head"};
                    transferToZonesNames[] = {};
                    transferToZonesCoefs[] = {};
                    fatalInjuryCoef        = 0.15;
                    canBleed               = 0;
                    class Health
                    {
                        hitpoints            = 120;
                        transferToGlobalCoef = 1;
                    };
                    class Blood: Health
                    {
                        hitpoints = 0;
                    };
                    class Shock: Health
                    {
                        hitpoints = 0;
                    };
                };
                class Zone_Neck: Zone_Head
                {
                    componentNames[]       = {"Zone_Neck"};
                    transferToZonesNames[] = {};
                    transferToZonesCoefs[] = {};
                    fatalInjuryCoef        = 0.05;
                    class Health: Health
                    {
                        hitpoints = 100;
                    };
                };
                class Zone_Chest: Zone_Head
                {
                    componentNames[]       = {"Zone_Chest"};
                    transferToZonesNames[] = {};
                    transferToZonesCoefs[] = {};
                    fatalInjuryCoef        = 0.05;
                    class Health: Health
                    {
                        hitpoints = 150;
                    };
                };
                class Zone_Belly: Zone_Head
                {
                    componentNames[]       = {"Zone_Belly"};
                    transferToZonesNames[] = {};
                    transferToZonesCoefs[] = {};
                    fatalInjuryCoef        = 0.05;
                    class Health: Health
                    {
                        hitpoints = 150;
                    };
                };
                class Zone_Spine: Zone_Head
                {
                    componentNames[]       = {"Zone_Spine_Front", "Zone_Spine_Back"};
                    transferToZonesNames[] = {};
                    transferToZonesCoefs[] = {};
                    fatalInjuryCoef        = 0.05;
                    class Health: Health
                    {
                        hitpoints = 150;
                    };
                };
                class Zone_Pelvis: Zone_Head
                {
                    componentNames[]       = {"Zone_Pelvis"};
                    transferToZonesNames[] = {"Zone_Spine"};
                    transferToZonesCoefs[] = {0.5};
                    fatalInjuryCoef        = 0.05;
                    class Health: Health
                    {
                        hitpoints = 180;
                    };
                };
                class Zone_Legs: Zone_Head
                {
                    componentNames[]       = {"Zone_Legs_Front", "Zone_Legs_Back"};
                    transferToZonesNames[] = {};
                    transferToZonesCoefs[] = {};
                    fatalInjuryCoef        = 0.0;
                    class Health: Health
                    {
                        hitpoints = 100;
                    };
                };
            };
        };
        class Skinning
        {
            class ObtainedSteaks
            {
                item                 = "WolfSteakMeat";
                count                = 10;
                itemZones[]          = {"Zone_Chest", "Zone_Belly", "Zone_Pelvis"};
                countByZone[]        = {3.0, 3.0, 3.0};
                quantityMinMaxCoef[] = {0.5, 1};
            };
            class ObtainedPelt
            {
                item                   = "WolfPelt";
                count                  = 1;
                itemZones[]            = {"Zone_Chest", "Zone_Belly"};
                quantityCoef           = 1;
                transferToolDamageCoef = 1;
            };
            class ObtainedGuts
            {
                item                 = "Guts";
                count                = 2;
                quantityMinMaxCoef[] = {0.5, 0.8};
            };
            class ObtainedLard
            {
                item                 = "Lard";
                count                = 1;
                quantityMinMaxCoef[] = {0.5, 1};
            };
            class ObtainedBones
            {
                item                   = "Bone";
                count                  = 1;
                quantityMinMaxCoef[]   = {0.7, 1};
                transferToolDamageCoef = 1;
            };
        };
        class enfanimsys
        {
            meshObject      = "dz\animals\canis_lupus\Data\canis_lupus_skeleton.xob";
            graphname       = "dz\animals\animations\!graph_files\Wolf\Wolf_Graph.agr";
            defaultinstance = "dz\animals\animations\!graph_files\Wolf\Wolf_AnimInstance.asi";
            startnode       = "AlignToTerrain_Rot";
            skeletonName    = "canis_lupus_skeleton.xob";
        };
        class AnimEvents
        {
            class Steps
            {
                class Walk1
                {
                    soundLookupTable = "PawMediumWalk_LookupTable";
                    noise            = "WolfStepNoise";
                    effectSet[]      = {"WolfStepEffect1", "WolfStepEffect2"};
                    id               = 1;
                };
                class Walk2
                {
                    soundLookupTable = "PawMediumWalk_LookupTable";
                    noise            = "WolfStepNoise";
                    effectSet[]      = {"WolfStepEffect1", "WolfStepEffect2"};
                    id               = 2;
                };
                class Walk3
                {
                    soundLookupTable = "PawMediumWalk_LookupTable";
                    noise            = "WolfStepNoise";
                    effectSet[]      = {"WolfStepEffect1", "WolfStepEffect2"};
                    id               = 3;
                };
                class Walk4
                {
                    soundLookupTable = "PawMediumWalk_LookupTable";
                    noise            = "WolfStepNoise";
                    effectSet[]      = {"WolfStepEffect1", "WolfStepEffect2"};
                    id               = 4;
                };
                class Run1
                {
                    soundLookupTable = "PawMediumRun_LookupTable";
                    noise            = "WolfStepNoise";
                    effectSet[]      = {"WolfStepEffect1", "WolfStepEffect2"};
                    id               = 5;
                };
                class Run2
                {
                    soundLookupTable = "PawMediumRun_LookupTable";
                    noise            = "WolfStepNoise";
                    effectSet[]      = {"WolfStepEffect1", "WolfStepEffect2"};
                    id               = 6;
                };
                class Run3
                {
                    soundLookupTable = "PawMediumRun_LookupTable";
                    noise            = "WolfStepNoise";
                    effectSet[]      = {"WolfStepEffect1", "WolfStepEffect2"};
                    id               = 7;
                };
                class Run4
                {
                    soundLookupTable = "PawMediumRun_LookupTable";
                    noise            = "WolfStepNoise";
                    effectSet[]      = {"WolfStepEffect1", "WolfStepEffect2"};
                    id               = 8;
                };
                class Bodyfall
                {
                    soundLookupTable = "PawMediumBodyfall_LookupTable";
                    noise            = "WolfStepNoise";
                    effectSet[]      = {"WolfStepEffect1", "WolfStepEffect2"};
                    id               = 11;
                };
                class Settle
                {
                    soundLookupTable = "PawMediumSettle_LookupTable";
                    noise            = "WolfStepNoise";
                    effectSet[]      = {"WolfStepEffect1", "WolfStepEffect2"};
                    id               = 12;
                };
                class Rest2standA
                {
                    soundLookupTable = "PawMediumRest2standA_LookupTable";
                    noise            = "WolfStepNoise";
                    effectSet[]      = {"WolfStepEffect1", "WolfStepEffect2"};
                    id               = 13;
                };
                class Rest2standB
                {
                    soundLookupTable = "PawMediumRest2standB_LookupTable";
                    noise            = "WolfStepNoise";
                    effectSet[]      = {"WolfStepEffect1", "WolfStepEffect2"};
                    id               = 14;
                };
                class Stand2restA
                {
                    soundLookupTable = "PawMediumStand2restA_LookupTable";
                    noise            = "WolfStepNoise";
                    effectSet[]      = {"WolfStepEffect1", "WolfStepEffect2"};
                    id               = 15;
                };
                class Stand2restB
                {
                    soundLookupTable = "PawMediumStand2restB_LookupTable";
                    noise            = "WolfStepNoise";
                    effectSet[]      = {"WolfStepEffect1", "WolfStepEffect2"};
                    id               = 16;
                };
                class Stand2restC
                {
                    soundLookupTable = "PawMediumStand2restC_LookupTable";
                    noise            = "WolfStepNoise";
                    effectSet[]      = {"WolfStepEffect1", "WolfStepEffect2"};
                    id               = 17;
                };
                class Jump
                {
                    soundLookupTable = "PawMediumJump_LookupTable";
                    noise            = "WolfStepNoise";
                    effectSet[]      = {"WolfStepEffect1", "WolfStepEffect2"};
                    id               = 18;
                };
                class Impact
                {
                    soundLookupTable = "PawMediumImpact_LookupTable";
                    noise            = "WolfStepNoise";
                    effectSet[]      = {"WolfStepEffect1", "WolfStepEffect2"};
                    id               = 19;
                };
            };
            class Sounds
            {
                class WolfBark
                {
                    soundSet = "WolfBark_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 1;
                };
                class WolfBark_1
                {
                    soundSet = "WolfBark_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 61;
                };
                class WolfBark_2
                {
                    soundSet = "WolfBark_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 71;
                };
                class WolfBark2
                {
                    soundSet = "WolfBark2_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 2;
                };
                class WolfBark3
                {
                    soundSet = "WolfBark3_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 3;
                };
                class WolfBreath
                {
                    soundSet = "WolfBreath_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 4;
                };
                class WolfGroans
                {
                    soundSet = "WolfGroans_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 5;
                };
                class WolfGrowl_A
                {
                    soundSet = "WolfGrowl_A_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 6;
                };
                class WolfGrowl_B
                {
                    soundSet = "WolfGrowl_B_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 7;
                };
                class WolfGrowl
                {
                    soundSet = "WolfGrowl_A_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 8;
                };
                class WolfPant
                {
                    soundSet = "WolfPant_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 9;
                };
                class WolfPantShort
                {
                    soundSet = "WolfPantShort_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 10;
                };
                class WolfPantLong
                {
                    soundSet = "WolfPantShort_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 18;
                };
                class WolfSnarl
                {
                    soundSet = "WolfSnarl_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 11;
                };
                class WolfSnarlShort
                {
                    soundSet = "WolfSnarlShort_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 12;
                };
                class WolfWhimper
                {
                    soundSet = "WolfWhimper_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 13;
                };
                class WolfYelp
                {
                    soundSet = "WolfYelp_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 14;
                };
                class WolfYawn
                {
                    soundSet = "WolfYelp_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 15;
                };
                class WolfDeath
                {
                    soundSet = "WolfDeath_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 20;
                };
                class WolfHowl
                {
                    soundSet = "WolfHowl_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 16;
                };
                class WolfHowls
                {
                    soundSet = "WolfHowls_SoundSet";
                    noise    = "WolfRoarNoise";
                    id       = 17;
                };
            };
            class Damages
            {
                class Bite
                {
                    damage = "WolfBiteDamage";
                    id     = 1;
                };
                class BiteLow
                {
                    damage = "WolfLowBiteDamage";
                    id     = 2;
                };
            };
        };
        class CommandMoveSettings
        {
            useSpeedMapping        = 1;
            movementSpeedMapping[] = {0.0, 0.25, 0.5, 1.2, 4.5, 12.2};
        };
        class CommandLookAtSettings
        {
            lookAtFilterTimeout = 0.5;
            lookAtFilterSpeed   = 1.57;
        };
    };

    class CRDTN_PhantomWolfGrey: CRDTN_CreaturePhantomWolfBase
    {
        scope                      = 2;
        phantomType                = "CRDTN_Creature_Minion_Grey";
        hiddenSelectionsTextures[] = {
            "dz\animals\canis_lupus\data\wolf_grey_CO.paa",
            "dz\animals\canis_lupus\data\fur_alpha.paa"};
    };
    class CRDTN_PhantomWolfWhite: CRDTN_CreaturePhantomWolfBase
    {
        scope                      = 2;
        phantomType                = "CRDTN_Creature_Minion_White";
        phantomCount               = 10;
        phantomSpawnTimer          = 2;
        phantomSize                = 0.2;
        hiddenSelectionsTextures[] = {
            "dz\animals\canis_lupus\data\wolf_grey_CO.paa",
            "dz\animals\canis_lupus\data\fur_alpha.paa"};
    };

    class CRDTN_Creature_Minion: Animal_CanisLupus
    {
        scope            = 0;
        displayName      = "Psuedo Dog (Minion)";
        descriptionShort = "A dog that is not a dog.";
    };

    class CRDTN_Creature_Minion_Grey: CRDTN_Creature_Minion
    {
        scope                      = 2;
        hiddenSelectionsTextures[] = {
            "dz\animals\canis_lupus\data\wolf_grey_CO.paa",
            "dz\animals\canis_lupus\data\fur_alpha.paa"};
    };

    class CRDTN_Creature_Minion_White: CRDTN_Creature_Minion
    {
        scope                      = 2;
        hiddenSelectionsTextures[] = {
            "dz\animals\canis_lupus\data\wolf_white_CO.paa",
            "dz\animals\canis_lupus\data\fur_alpha.paa"};
    };
};