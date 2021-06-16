#include "script_component.hpp"

params ["_display", "_control"];

private _idc = ctrlIDC _control;
private _data = GVAR(idcToConfig) get (_idc - 2);

[_display, _data] call FUNC(changeCurrentConfig);