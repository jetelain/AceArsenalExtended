#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    name = QUOTE(COMPONENT);
    units[] = {};
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {};
    author = "Pet Mudstone";
    VERSION_CONFIG;
  };
};

#include "XtdGearModels.hpp"

#include "XtdGearInfos.hpp"

#include "CfgWeapons.hpp"
