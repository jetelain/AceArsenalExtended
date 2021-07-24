#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"Tier1_Weapons_cfg"};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};

#include "XtdGearModels.hpp"

#include "CfgWeapons.hpp"
