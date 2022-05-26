#include "script_component.hpp"

params ["_classRoot", "_model", "_configName"];

private _cacheKey = [GVAR(currentId), _classRoot, _model];
private _modelConfigs = GVAR(virtualItemConfigs) getOrDefault [_cacheKey, [], true];

if (not (_configName in _modelConfigs)) then {
    _modelConfigs append [_configName];
};
