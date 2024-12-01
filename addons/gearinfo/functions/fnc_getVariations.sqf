#include "script_component.hpp"

params ["_classRoot", "_model"];

private _cacheKey = [_classRoot, _model];
private _cached = GVAR(variationCache) getOrDefault [_cacheKey, []];
if (count _cached > 0) exitWith { _cached };

private _variations = createHashMap;

{
    _x params ["_config", "_configOptions"];
    _variations set [_configOptions, _config];
} forEach ([_classRoot, _model] call FUNC(getModelConfigs));

GVAR(variationCache) set [_cacheKey, _variations];

_variations
