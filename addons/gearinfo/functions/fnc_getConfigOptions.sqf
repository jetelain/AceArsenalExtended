#include "script_component.hpp"

params ["_classRoot", "_config", ["_model", ""], ["_optionsNames",[]]];

private _configClass = configFile >> _classRoot >> _config;

if ( _model == "" ) then {
	_model = [_configClass >> "XtdGearInfo", "model", ""] call BIS_fnc_returnConfigEntry;
};

if ( count _optionsNames == 0 ) then {
	_optionsNames = getArray (configFile >> "XtdGearModels" >> _classRoot >> _model >> "options");
};

(_optionsNames apply { getText (_configClass >> "XtdGearInfo" >> _x) })