#include "script_component.hpp"

params ["_classRoot", "_model", "_options"];

private _result = [_classRoot, _model, _options] call FUNC(findConfig);

if ( !isNull _result ) then {
	configName _result
} else {
	""
}