#include "script_component.hpp"

params ["_config"];

private _result = true;

if ( isClass (_config >> "WeaponSlotsInfo") && { count (_config >> "LinkedItems") != 0 } ) then {
	if ( isText (_config >> "baseWeapon") ) then {
		// baseWeapon is known, use it
		if (getText (_config >> "baseWeapon") != configName  _config) then {
			_result = false;
		};
	} else {
		// look for a parent class (inheritsFrom / BIS_fnc_returnParents) that match macro but have no LinkedItems
		while {isClass _config} do {
			_config = inheritsFrom _config;
			if ( !CLASS_FILTER(_config) ) exitWith {};
			if ( count (_config >> "LinkedItems") == 0 ) exitWith {
				_result = false;
			};
		};
	};
};

_result