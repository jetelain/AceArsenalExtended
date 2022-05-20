#include "script_component.hpp"

params ["_classRoot", "_model", "_optionSet"];
_optionSet params ["_optionIndex", "_valueName"];

private _firstMatch = GVAR(weakMatchesCache) getOrDefault [[_classRoot, _model, _optionSet], configNull];

if (not isNull _firstMatch) exitWith {
    _firstMatch
};

private _variations = [_classRoot, _model] call FUNC(variations);

{
    private _selectedOption = _x select _optionIndex;
    private _varConfig = _y;

    if (not isNull _varConfig and _selectedOption == _valueName) exitWith {
        GVAR(weakMatchesCache) set [[_classRoot, _model, _optionSet], _varConfig];
        _firstMatch = _varConfig
    };
} forEach _variations;

_firstMatch
