#include "script_component.hpp"

params ["_pattern"];

private _result = [];

{
	private _classRoot = _x;
	{
		private _name = configName _x;
		if  ([_pattern, _name] call BIS_fnc_inString) then {
			private _parent = configName (inheritsFrom _x);
			private _displayName = getText (_x >> "displayName");
			private _hasModel = isText (_x >> "XtdGearInfo" >> "model");
			_result pushBack ([_classRoot, _name, _parent, _displayName, _hasModel] joinString ";");
		};
	} forEach ("((getNumber (_x >> 'scope')) == 2) && (count (_x >> 'linkeditems') == 0)" configClasses (configFile >> _classRoot));
} forEach ["CfgWeapons","CfgGlasses"];

copyToClipboard (_result joinString endl);