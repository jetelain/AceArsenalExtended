#include "script_component.hpp"

params ["_classRoot", "_model", "_optionName", ["_optionIndex", -1]];

private _modelDefinition = configFile >> "XtdGearModels" >> _classRoot >> _model;
private _optionDef1 = _modelDefinition >> _optionName;
private _optionDef2 = configFile >> "XtdGearModels" >> "Conventional" >> _optionName;

private _definedOptionValues = [_optionDef1, _optionDef2, "values", []] call READ_ARRAY;

private _optionValues = if (count _definedOptionValues > 0) then { _definedOptionValues } else {
    private _classPaths = [_optionDef1, _optionDef2];
    {
        private _baseClassPath = inheritsFrom _x;
        if (not isNull _baseClassPath) then {
            _classPaths append [_baseClassPath];
        };
    } forEach _classPaths;
    private _subClassNames = _classPaths apply { _x call Bis_fnc_getCfgSubClasses };
    private _allValues = flatten _subClassNames;
    private _dedupedValues = _allValues arrayIntersect _allValues;

    if (_optionIndex < 0) then { _dedupedValues } else {
        _dedupedValues select {
            private _valueName = _x;
            private _unused = isNull ([_classRoot, _model, _optionIndex, _valueName] call FUNC(findConfigByValue));
            not _unused
        }
    }
};

_optionValues