#include "script_component.hpp"

params ["_classRoot", "_config"];

[configFile >> _classRoot >> _config >> "XtdGearInfo", "model", ""] call BIS_fnc_returnConfigEntry;