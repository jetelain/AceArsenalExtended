#include "script_component.hpp"

params ["_classRoot", "_pattern"];
private _all = "true" configClasses (configFile >> _classRoot);
private _result = [];
{
	private _name = configName _x;
	if  ([_pattern, _name] call BIS_fnc_inString) then {
		private _parent = configName (inheritsFrom _x);
		private _displayName = getText (_x >> "displayName");
		_result pushBack ([_name, _parent, _displayName] joinString ";");
	};
} forEach _all;
copyToClipboard (_result joinString endl);