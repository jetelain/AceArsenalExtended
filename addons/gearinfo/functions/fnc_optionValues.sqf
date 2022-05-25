#include "script_component.hpp"

params ["_classRoot", "_model", "_optionName"];

private _modelDefinition = configFile >> "XtdGearModels" >> _classRoot >> _model;

private _optionValues = GVAR(optionValueCache) getOrDefault [[_classRoot, _model, _optionName], []];

if (count _optionValues != 0) exitWith {
    _optionValues
};

private _optionDef1 = _modelDefinition >> _optionName;
private _optionDef2 = configFile >> "XtdGearModels" >> "Conventional" >> _optionName;

private _definedOptionValues = [_optionDef1, _optionDef2, "values", []] call READ_ARRAY;

_optionValues = if (count _definedOptionValues > 0) then { _definedOptionValues } else {
    private _classPaths = [_optionDef1, _optionDef2];
    {
        private _baseClassPath = inheritsFrom _x;
        if (not isNull _baseClassPath) then {
            _classPaths append [_baseClassPath];
        };
    } forEach _classPaths;
    private _subClassNames = _classPaths apply { _x call Bis_fnc_getCfgSubClasses };
    flatten _subClassNames
};

GVAR(optionValueCache) set [[_classRoot, _model, _optionName], _optionValues];

_optionValues