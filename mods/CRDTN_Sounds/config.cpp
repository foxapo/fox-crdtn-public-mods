class CfgPatches
{
    class CRDTN_Sounds
    {
        units[] = {""};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "DZ_Data",
            "DZ_Scripts"
        };
        defines[] = {"CRDTN_Sounds"};
    };
};

class CfgMods
{
    /// @brief Combination of CSO and my custom modifications for inventory management + AimSounds
    class CRDTN_Sounds
    {
        name = "CRDTN Sounds Overhaul";
        credits = "Switzer [https://steamcommunity.com/sharedfiles/filedetails/?id=2810590959&searchtext=Complete+sound+overhaul]";
        author = "freeman@foxapo.com";
        type = "mod";
        dependencies[] = { "Game", "World", "Mission" };
        dir = "CRDTN_Sounds";
        class defs
        {
            class gameScriptModule
            {
                value = "";
                files[] = {"CRDTN_Sounds/Scripts/3_Game"};
            };
            class worldScriptModule
            {
                value = "";
                files[] = {"CRDTN_Sounds/Scripts/4_World"};
            };
            class missionScriptModule
            {
                value = "";
                files[] = {"CRDTN_Sounds/Scripts/5_Mission"};
            };
            class imageSets
            {
                files[] = {};
            };
        };
    };
};

class CfgVehicles { };
class CfgSlots { };
class CfgWeapons { };
