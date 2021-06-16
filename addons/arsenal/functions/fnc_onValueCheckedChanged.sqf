#include "script_component.hpp"

params ["_display", "_control", "_checked"];

private _idc = ctrlIDC _control;
private _data = GVAR(idcToConfig) get (_idc - 1);

[_display, _data] call FUNC(changeCurrentConfig);