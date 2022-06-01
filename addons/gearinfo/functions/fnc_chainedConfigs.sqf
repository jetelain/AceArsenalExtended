#include "script_component.hpp"

params ["_initConfig", ["_configName", ""]];

private _configPaths = [];

if (not isNull _initConfig) then {
    _configPaths append [_initConfig];
};

private _baseConfig = inheritsFrom _initConfig;
if (not isNull _baseConfig) then {
    private _baseName = [configName _baseConfig, ""] select (_configName == "");
    _configPaths append ([_baseConfig, _baseName] call FUNC(chainedConfigs));
};

if (_configName != "") then {
    private _convClass = configFile >> "XtdGearModels" >> "Conventional" >> _configName;

    if (not isNull _convClass) then {
        _configPaths append ([_convClass] call FUNC(chainedConfigs));
    };
};

_configPaths
