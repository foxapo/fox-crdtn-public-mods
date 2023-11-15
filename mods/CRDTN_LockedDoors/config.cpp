class CfgPatches
{
    class CRDTN_LockedDoors
    {
        units[] = {""};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"DZ_Data", "DZ_Scripts", "CRDTN_Core"};
        defines[] = {"CRDTN_LockedDoors"};
    };
};

class CfgMods
{
    class CRDTN_LockedDoors
    {
        name = "CRDTN Locked Doors";
        credits = "SajidAlfa models, Freeman code";
        author = "freeman@foxapo.com";
        type = "mod";
        dependencies[] = {"Game", "World", "Mission"};
        dir = "CRDTN_LockedDoors";
        class defs
        {
            class gameScriptModule
            {
                value = "";
                files[] = {"CRDTN_LockedDoors/Scripts/3_Game"};
            };
            class worldScriptModule
            {
                value = "";
                files[] = {"CRDTN_LockedDoors/Scripts/4_World"};
            };
            class missionScriptModule
            {
                value = "";
                files[] = {"CRDTN_LockedDoors/Scripts/5_Mission"};
            };
            class imageSets
            {
                files[] = {};
            };
        };
    };
};

class CfgVehicles
{

    class Inventory_Base;
    class Lockpick : Inventory_Base {};

    class CRDTN_LockedDoors_ItemBase : Inventory_Base
    {
        scope = 0;
    };

    class CRDTN_Card_LockedDoors : CRDTN_LockedDoors_ItemBase
    {
        scope = 0;
        hiddenSelections[] = {"zbytek"};
        model = "CRDTN_LockedDoors\Models\key\key.p3d";
        itemSize[] = {1, 2};
        weight = 100;
    };

    class CRDTN_Key_LockedDoors : CRDTN_LockedDoors_ItemBase
    {
        scope = 0;
        hiddenSelections[] = {"zbytek"};
        itemSize[] = {1, 1};
        weight = 100;
        model = "CRDTN_LockedDoors\Models\key\key.p3d";
    };

    /// @brief BASE CLASS FOR THE KEYS
    class CRDTN_Key_Base : CRDTN_Key_LockedDoors
    {
        scope = 2;
        displayName = "";
        descriptionShort = "";
        hiddenSelectionsTextures[] = {"CRDTN_LockedDoors\Models\key\data\Key_black.paa"};
        stackedUnit = "pc.";
        quantityBar = 1;
        canBeSplit=0;
        weight = 20;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 1;
        varQuantityDestroyOnMin = 1;
        destroyOnEmpty = 1;
        weightPerQuantityUnit = 0.0;
    };

    class CRDTN_Card_Base : CRDTN_Card_LockedDoors
    {
        scope = 2;
        displayName = "";
        descriptionShort = "";
        hiddenSelectionsTextures[] = {"CRDTN_LockedDoors\Models\key\data\Key_black.paa"};
    };

    // TYPES
   
    class CRDTN_AdminLockPick : Lockpick
    {
        scope = 2;
        displayName = "Admin Lockpick";
        keys[] = {"CRDTN_KeyMaster"};
    };

    class CRDTN_AdminLockPick_PoliceStation : CRDTN_AdminLockPick
    {
        displayName = "Police Station Admin Lockpick";
        keys[] = {"CRDTN_Key_Universal_PoliceStation"};
        descriptionShort = "This key locks the door and sets the config to use the universal police station key";
    };

    class CRDTN_AdminLockPick_Medical : CRDTN_AdminLockPick
    {
        displayName = "Medical Admin Lockpick";
        keys[] = {"CRDTN_Key_Universal_Medical"};
        descriptionShort = "This key locks the door and sets the config to use the universal medical key";
    };

    class CRDTN_AdminLockPick_Universal : CRDTN_AdminLockPick
    {
        displayName = "Universal Admin Lockpick";
        keys[] = {"CRDTN_Key_Universal"};
        descriptionShort = "This key locks the door and sets the config to use the universal key";
    };

    class CRDTN_KeyMaster : CRDTN_Key_Base
    {
        scope = 2;
        displayName = "Skeleton key";
        descriptionShort = "Can open any door in Chernarus.";
    };

    class CRDTN_Key_Universal : CRDTN_Key_Base
    {
        scope = 2;
        displayName = "Universal key";
        descriptionShort = "This key unlocks most of the common door locks across Chernarus.";
        hiddenSelectionsTextures[] = {"CRDTN_LockedDoors\Models\key\data\Key_blue.paa"};
    };
    class CRDTN_Key_Universal_PoliceStation : CRDTN_Key_Base
    {
        scope = 2;
        displayName = "Police Station Key";
        descriptionShort = "Special security key used by the police of Chernarus.";
    };
    class CRDTN_Key_Universal_Medical : CRDTN_Key_Base
    {
        scope = 2;
        displayName = "Medical Key";
        descriptionShort = "Special security key used by medical services from Chernarus";
    };
};
