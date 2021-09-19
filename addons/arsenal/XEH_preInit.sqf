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

GVAR(currentModel) = "";
GVAR(valuesIdx) = [];
GVAR(idcToConfig) = createHashMap;

["ace_arsenal_displayOpened", {
	call FUNC(filterVirtualItems);
	INFO("Use filteredVirtualItems");
	ace_arsenal_virtualItems = GVAR(filteredVirtualItems);
}] call CBA_fnc_addEventHandler;

if ( is3DEN ) then {
  GVAR(textureOptions) = "";
  GVAR(edenEntity) = objNull;

  ["ace_arsenal_displayOpened", {
    GVAR(edenEntity) = (uinamespace getvariable ["bis_fnc_3DENEntityMenu_data",[]]) param [1, objnull];
    private _optionsAttrValue = GVAR(edenEntity) get3DENAttribute QGVARMAIN(textureOptions);
    if ( _optionsAttrValue isNotEqualTo [] ) then {
      // ace_arsenal_center is going to be replaced just after this event, so we have to do this later (=> leftPanelFilled)
      GVAR(textureOptions) = _optionsAttrValue select 0;
    };
  }] call CBA_fnc_addEventHandler;

  ["ace_arsenal_leftPanelFilled", {
    if ( GVAR(textureOptions) != "" ) then {
      INFO_1("Restore from 3DEN, textureOptions=%1",GVAR(textureOptions));
      [ace_arsenal_center, GVAR(textureOptions), false] call EFUNC(gearinfo,setTextureOptions); 
      GVAR(textureOptions) = "";
    };
  }] call CBA_fnc_addEventHandler;

  ["ace_arsenal_displayClosed", {
    private _textureOptions = [ace_arsenal_center, false] call EFUNC(gearinfo,getTextureOptions);
    INFO_1("Save to 3DEN, textureOptions=%1",_textureOptions);
    if (_textureOptions isNotEqualTo []) then {
      GVAR(edenEntity) set3DENAttribute [QGVARMAIN(textureOptions), format["%1",_textureOptions]];
    } else {
      GVAR(edenEntity) clear3DENAttribute QGVARMAIN(textureOptions);
    };
    // FIXME: ACE reset GVAR(edenEntity) loadout just after, we have no event to bind to get this right in editor, but works fine when mission is played
  }] call CBA_fnc_addEventHandler;
};

["ace_arsenal_loadoutsDisplayOpened", {
	INFO("Use initialVirtualItems");
	ace_arsenal_virtualItems = GVAR(initialVirtualItems);
	[false] call FUNC(toggleUI);
}] call CBA_fnc_addEventHandler;

["ace_arsenal_loadoutsDisplayClosed", {
	INFO("Use filteredVirtualItems");
	ace_arsenal_virtualItems = GVAR(filteredVirtualItems);
	[true] call FUNC(toggleUI);
}] call CBA_fnc_addEventHandler;

["ace_arsenal_leftPanelFilled", FUNC(onLeftPanelFilled)] call CBA_fnc_addEventHandler;
 