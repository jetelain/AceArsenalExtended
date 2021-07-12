#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"USP_Gear_Body", "USP_Gear_Vest", "USP_Gear_Head", "aceax_gearinfo"};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};

#include "XtdGearModels.hpp"

#include "CfgWeapons.hpp"