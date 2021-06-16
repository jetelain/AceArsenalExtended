#include "script_component.hpp"
#include "..\defines.hpp"

switch (ace_arsenal_currentLeftPanel) do {
    case IDC_buttonPrimaryWeapon : {
		[0, "CfgWeapons"]
    };
    case IDC_buttonHandgun : {
		[2, "CfgWeapons"]
    };
    case IDC_buttonSecondaryWeapon : {
		[1, "CfgWeapons"]
    };
    case IDC_buttonHeadgear : {
		[3, "CfgWeapons"]
    };
    case IDC_buttonUniform : {
		[4, "CfgWeapons"]
    };
    case IDC_buttonVest: {
		[5, "CfgWeapons"]
    };
    case IDC_buttonBackpack : {
		[6, "CfgVehicles"]
    };
    case IDC_buttonGoggles : {
		[7, "CfgGlasses"]
    };
    case IDC_buttonNVG : {
		[8, "CfgWeapons"]
    };
    case IDC_buttonBinoculars : {
		[9, "CfgWeapons"]
    };
	default {
		[-1, ""]
	};
}