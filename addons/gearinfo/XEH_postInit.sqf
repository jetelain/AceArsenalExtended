#include "script_component.hpp"

["CBA_loadoutSet", {
    params ["_unit", "_loadout", "_extendedInfo"];
    private _textureOptions = _extendedInfo getOrDefault [QGVARMAIN(textureOptions), []];
    if (_textureOptions isNotEqualTo []) then {
        [_unit, _textureOptions, false] call FUNC(setTextureOptions);
    };
}] call CBA_fnc_addEventHandler;

["CBA_loadoutGet", {
    params ["_unit", "_loadout", "_extendedInfo"];
    _extendedInfo set [QGVARMAIN(textureOptions), [_unit, false] call FUNC(getTextureOptions)];
}] call CBA_fnc_addEventHandler;
