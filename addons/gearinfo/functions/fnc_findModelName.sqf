#include "script_component.hpp"

params ["_classRoot", "_master", "_masterConfig"];

private _result = [_config, _master, _masterConfig] call FUNC(findModel);

if ( !isNull _result ) then {
	configName _result
} else {
	""
}