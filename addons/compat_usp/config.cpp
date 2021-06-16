#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"aceax_gearinfo", "USP_Gear_Body"};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};

#include "XtdGearMasters.hpp"

#include "CfgWeapons.hpp"