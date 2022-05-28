#include "script_component.hpp"

params ["_classRoot", "_model"];

private _cacheKey = [GVAR(currentId), _classRoot, _model];
private _cached = GVAR(variationCache) getOrDefault [_cacheKey, []];
if (count _cached > 0) exitWith { _cached };

private _variations = createHashMap;
private _modelDefinition = (configFile >> "XtdGearModels" >> _classRoot >> _model);
private _enforceBlacklist = 1 == [_modelDefinition, "enforceBlacklist", 0] call BIS_fnc_returnConfigEntry;
private _modelConfigs = [_classRoot, _model] call FUNC(getModelConfigs);

{
    _x params ["_config", "_configOptions"];

    if (_enforceBlacklist) then {
        private _viConfigs = GVAR(virtualItemConfigs) getOrDefault [_cacheKey, []];
        private _configName = configName _config;
        if (not (_configName in _viConfigs)) then {
            continue
        };
    };

    _variations set [_configOptions, _config];

} forEach _modelConfigs;

GVAR(variationCache) set [_cacheKey, _variations];

_variations
