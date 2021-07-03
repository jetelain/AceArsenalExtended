#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"amf_uniforms", "AMF_Headgear_02","amf_vests","AMF_weapon_F"};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};

#include "XtdGearModels.hpp"

#include "CfgWeapons.hpp"