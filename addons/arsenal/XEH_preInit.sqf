#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

#include "defines.hpp"

GVAR(meta) = [ 
  [IDC_buttonPrimaryWeapon,   0,  0, 0, "CfgWeapons",  "PrimaryWeapon"],
  [IDC_buttonSecondaryWeapon, 0,  1, 1, "CfgWeapons",  "SecondaryWeapon"],
  [IDC_buttonHandgun,         0,  2, 2, "CfgWeapons",  "Handgun"],
  [IDC_buttonHeadgear,        3, -1, 3, "CfgWeapons",  "Headgear"],
  [IDC_buttonUniform,         4, -1, 4, "CfgWeapons",  "Uniform"],
  [IDC_buttonVest,            5, -1, 5, "CfgWeapons",  "Vest"],
  [IDC_buttonBackpack,        6, -1, 6, "CfgVehicles", "Backpack"],
  [IDC_buttonGoggles,         7, -1, 7, "CfgGlasses",  "Goggles"],
  [IDC_buttonNVG,             8, -1, 8, "CfgWeapons",  "Nvg"],
  [IDC_buttonBinoculars,      9, -1, 9, "CfgWeapons",  "Binoculars"]
];