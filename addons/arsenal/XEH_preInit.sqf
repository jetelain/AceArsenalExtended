#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

#include "defines.hpp"

// _x params ["", "_virt", "_virtSub", "_cur", "_classRoot", "_label"];

GVAR(meta) = [ 
  [IDC_buttonPrimaryWeapon,   IDX_VIRT_WEAPONS,  IDX_VIRT_PRIMARY_WEAPONS,   0, "CfgWeapons",  "PrimaryWeapon"],
  [IDC_buttonSecondaryWeapon, IDX_VIRT_WEAPONS,  IDX_VIRT_SECONDARY_WEAPONS, 1, "CfgWeapons",  "SecondaryWeapon"],
  [IDC_buttonHandgun,         IDX_VIRT_WEAPONS,  IDX_VIRT_HANDGUN_WEAPONS,   2, "CfgWeapons",  "Handgun"],
  [IDC_buttonHeadgear,        IDX_VIRT_HEADGEAR, -1, 3, "CfgWeapons",  "Headgear"],
  [IDC_buttonUniform,         IDX_VIRT_UNIFORM,  -1, 4, "CfgWeapons",  "Uniform"],
  [IDC_buttonVest,            IDX_VIRT_VEST,     -1, 5, "CfgWeapons",  "Vest"],
  [IDC_buttonBackpack,        IDX_VIRT_BACKPACK, -1, 6, "CfgVehicles", "Backpack"],
  [IDC_buttonGoggles,         IDX_VIRT_GOGGLES,  -1, 7, "CfgGlasses",  "Goggles"],
  [IDC_buttonNVG,             IDX_VIRT_NVG,      -1, 8, "CfgWeapons",  "Nvg"],
  [IDC_buttonBinoculars,      IDX_VIRT_BINO,     -1, 9, "CfgWeapons",  "Binoculars"]
];

GVAR(unsupported) = [IDX_VIRT_ITEMS_ALL
,IDX_VIRT_ATTACHMENTS
,IDX_VIRT_MAP 
,IDX_VIRT_COMPASS
,IDX_VIRT_RADIO
,IDX_VIRT_WATCH
,IDX_VIRT_COMMS
,IDX_VIRT_GRENADES
,IDX_VIRT_EXPLOSIVES
,IDX_VIRT_MISC_ITEMS
,IDX_VIRT_UNIQUE_MISC_ITEMS
,IDX_VIRT_UNIQUE_VIRT_ITEMS_ALL
,IDX_VIRT_UNIQUE_GRENADES
,IDX_VIRT_UNIQUE_EXPLOSIVES
,IDX_VIRT_UNIQUE_ATTACHMENTS
,IDX_VIRT_UNIQUE_BACKPACKS
,IDX_VIRT_UNIQUE_GOGGLES
,IDX_VIRT_UNIQUE_UNKNOWN_ITEMS];


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
    GVAR(edenEntity) = (uiNamespace getVariable ["bis_fnc_3DENEntityMenu_data",[]]) param [1, objNull];
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
 
["ace_arsenal_rightPanelFilled", { [ace_arsenal_center] call EFUNC(gearinfo,applyTextureOptions); }] call CBA_fnc_addEventHandler;
