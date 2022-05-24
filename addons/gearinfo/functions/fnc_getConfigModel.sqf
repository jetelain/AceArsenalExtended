#include "script_component.hpp"

params ["_classRoot", "_config"];

private _model = configFile >> "XtdGearInfos" >> _classRoot >> _config >> "model";
if ( isText _model ) exitWith { getText _model };

[configFile >> _classRoot >> _config >> "XtdGearInfo", "model", ""] call BIS_fnc_returnConfigEntry
