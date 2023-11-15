/// @brief Big thanks to the creator of CSO - Complete sound overhaul
/// @brief  I used his mod as a base for my mod
class CfgPatches
{
    class CRDTN_CreaturesSounds
    {
        units[] = {""};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
            {
                "DZ_Data",
                "DZ_Scripts",
                "DZ_Sounds_Effects"};
    };
};

class CfgSoundSets
{
    #include "Creatures\creatures_sound_sets.hpp"
};

class CfgSoundShaders
{
    #include "Creatures\creatures_sound_shaders.hpp"
};
