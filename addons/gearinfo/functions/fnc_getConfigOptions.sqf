#include "script_component.hpp"

params ["_classRoot", "_config", ["_model", ""], ["_optionsNames",[]]];

private _gearinfo = configFile>> "XtdGearInfos" >> _classRoot >> _config;

if ( !isClass _gearinfo ) then {
	_gearinfo = configFile >> _classRoot >> _config >> "XtdGearInfo"
};

if ( _model == "" ) then {
	_model = [_gearinfo, "model", ""] call BIS_fnc_returnConfigEntry;
};

if ( count _optionsNames == 0 ) then {
	_optionsNames = getArray (configFile >> "XtdGearModels" >> _classRoot >> _model >> "options");
};

(_optionsNames apply { getText (_gearinfo >> _x) })