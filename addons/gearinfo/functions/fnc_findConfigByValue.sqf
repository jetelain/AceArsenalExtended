#include "script_component.hpp"

params ["_classRoot", "_model", "_optionIndex", "_valueName"];

private _cacheKey = [_classRoot, _model, _optionIndex, _valueName];
private _getter = { GVAR(weakMatchesCache) get _cacheKey };
if (not isNil _getter) exitWith _getter;

private _variations = [_classRoot, _model] call FUNC(variations);

private _firstMatch = configNull;

{
    private _selectedOption = _x select _optionIndex;
    private _varConfig = _y;

    if (not isNull _varConfig and _selectedOption == _valueName) exitWith {
        _firstMatch = _varConfig;
    };
} forEach _variations;

GVAR(weakMatchesCache) set [_cacheKey, _firstMatch];

_firstMatch
