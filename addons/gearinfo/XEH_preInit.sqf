#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

GVAR(variationCache) = createHashMap;
GVAR(weakMatchesCache) = createHashMap;

#ifdef DEBUG_MODE_FULL
[""] call FUNC(diag_detectErrors);
#endif

if (is3DEN) then {
    INFO("Restore texture options for 3DEN Editor");
    all3DENEntities params ["_objects"];
    {
        private _attr = _x get3DENAttribute QGVARMAIN(textureOptions);
        if ( count _attr == 1 && { _attr isNotEqualTo [""] } ) then {
            [_x, _attr select 0, false] call EFUNC(gearinfo,setTextureOptions); 
        };
    } forEach _objects;
};
