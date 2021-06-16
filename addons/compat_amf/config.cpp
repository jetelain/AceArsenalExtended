#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"aceax_gearinfo", "amf_uniforms", "AMF_Headgear_02"};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};

#include "XtdGearMasters.hpp"

#include "CfgWeapons.hpp"