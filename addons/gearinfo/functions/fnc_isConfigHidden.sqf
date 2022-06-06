#include "script_component.hpp"

params ["_classRoot", "_config"];

private _hiddenVal = [configFile >> "XtdGearInfos" >> _classRoot >> _config, "hidden", 0] call BIS_fnc_returnConfigEntry;

_hiddenVal == 1