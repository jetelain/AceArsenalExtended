#include "script_component.hpp"

GVAR(currentMaster) = "";
GVAR(valuesIdx) = [];
GVAR(idcToConfig) = createHashMap;

["ace_arsenal_leftPanelFilled", FUNC(onLeftPanelFilled)] call CBA_fnc_addEventHandler;
 