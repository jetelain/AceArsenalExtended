#include "script_component.hpp"

params ["_classRoot", "_model", "_optionName", ["_kind", "options"], ["_optionIndex", -1]];

private _cacheKey = [GVAR(currentId), _classRoot, _model, _optionIndex, _optionName];
private _cached = GVAR(optionValueCache) getOrDefault [_cacheKey, []];
if (count _cached != 0) exitWith { _cached };

private _modelDefinition = configFile >> "XtdGearModels" >> _classRoot >> _model;
private _classPaths = [_modelDefinition >> _optionName, _optionName] call FUNC(chainedConfigs);

private _definedOptionValues = [_classPaths, "values", []] call READ_ARRAY;

private _optionValues = if (count _definedOptionValues > 0) then { _definedOptionValues } else {
    private _subClassNames = _classPaths apply { _x call Bis_fnc_getCfgSubClasses };
    private _allValues = flatten _subClassNames;
    private _dedupedValues = _allValues arrayIntersect _allValues;

    if (_kind != "options" or { _optionIndex < 0 }) then { _dedupedValues } else {
        _dedupedValues select {
            private _valueName = _x;
            private _unused = isNull ([_classRoot, _model, _optionIndex, _valueName] call FUNC(findConfigByValue));
            not _unused
        }
    }
};

GVAR(optionValueCache) set [_cacheKey, _optionValues];

_optionValues
