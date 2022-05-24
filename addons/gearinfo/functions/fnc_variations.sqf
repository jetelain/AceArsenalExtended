#include "script_component.hpp"

params ["_classRoot", "_model"];

private _variations = GVAR(cache) getOrDefault [_model, []];

if (count _variations == 0) then {

	_variations = createHashMap;
	{
		_x params ["_config","_configOptions"],
		_variations set [_configOptions, _config];
	} foreach ([_classRoot, _model] call FUNC(getModelConfigs));

	GVAR(cache) set [_model, _variations];
};

_variations
