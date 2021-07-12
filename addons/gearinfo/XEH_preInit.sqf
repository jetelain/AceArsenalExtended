#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

GVAR(cache) = createHashMap;

#ifdef DEBUG_MODE_FULL
[""] call FUNC(diag_detectErrors);
#endif
/*
["loadout", {
    params ["_unit"];


}] call CBA_fnc_addPlayerEventHandler;

*/