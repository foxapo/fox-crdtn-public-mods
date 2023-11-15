class CfgPatches
{
    class CRDTN_Server_Creatures
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "DZ_Data",
            "DZ_Scripts",
            "DZ_Animals",
            "CRDTN_Client_Creatures"};
    };
};

class CfgMods
{

    class CRDTN_Server_Creatures
    {
        name = "FOX Coradiation ClientMod for the Creatures";
        credits = "Big Kudos to guys from the Renegade Stalker Server for providing valuable information";
        author = "FoxApoGames - Freeman";
        type = "mod";
        dependencies[] = {"Game", "World"};
        dir = "CRDTN_Server_Creatures";

        class defs
        {
            class gameScriptModule
            {
                value = "";
                files[] = {"CRDTN_Server_Creatures/Scripts/3_Game"};
            };
            class worldScriptModule
            {
                value = "";
                files[] = {"CRDTN_Server_Creatures/Scripts/4_World"};
            };
        };
    };
};

