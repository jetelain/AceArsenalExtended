#include "script_component.hpp"

GVAR(currentModel) = "";
GVAR(valuesIdx) = [];
GVAR(idcToConfig) = createHashMap;

["ace_arsenal_leftPanelFilled", FUNC(onLeftPanelFilled)] call CBA_fnc_addEventHandler;
 
["ace_arsenal_displayOpened", {
	call FUNC(filterVirtualItems);
	INFO("Use filteredVirtualItems");
	ace_arsenal_virtualItems = GVAR(filteredVirtualItems);
}] call CBA_fnc_addEventHandler;

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

