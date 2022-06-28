#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = "GrueArbre";
        VERSION_CONFIG;
    };
};

#include "XtdGearModels.hpp"

#include "CfgWeapons.hpp"

#include "XtdGearInfos.hpp"