#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

// Layout of gears in a loadout
GVAR(layout) = [
	["CfgWeapons", 0, 0], // primary
	["CfgWeapons", 1, 0], // secondary
	["CfgWeapons", 2, 0], // handgun
	["CfgWeapons", 3, 0], // uniform
	["CfgWeapons", 4, 0], // vest
	["CfgVehicles", 5, 0], // backpack
	["CfgWeapons", 6, -1], // headgear
	["CfgGlasses", 7, -1], // goggles
	["CfgWeapons", 8, 0], // binoculars
	["CfgWeapons", 9, 5] // NVG
];