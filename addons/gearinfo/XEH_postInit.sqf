#include "script_component.hpp"

["CBA_loadoutSet", {
    params ["_unit", "_loadout", "_extendedInfo"];
    private _textureOptions = _extendedInfo getOrDefault [QGVARMAIN(textureOptions), []];
    if (_textureOptions isNotEqualTo []) then {
        [_unit, _textureOptions, false] spawn {
            sleep 1; // Let setUnitLoadout to propagate over network
            [FUNC(setTextureOptions), _this] call CBA_fnc_directCall;
        };
    };
}] call CBA_fnc_addEventHandler;

["CBA_loadoutGet", {
    params ["_unit", "_loadout", "_extendedInfo"];
    _extendedInfo set [QGVARMAIN(textureOptions), [_unit, false] call FUNC(getTextureOptions)];
}] call CBA_fnc_addEventHandler;
