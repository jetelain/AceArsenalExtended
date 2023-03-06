#include "script_component.hpp"

params ["_control"];

private _value = ctrlText _control;

(_control getVariable [QGVAR(config), []]) params ["_optionIndex","_optionName"];

[ace_arsenal_center, GVAR(currentModel), _optionName, ctrlText _control] call EFUNC(gearinfo,setTextureOption); 
