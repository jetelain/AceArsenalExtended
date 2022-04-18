#include "script_component.hpp"

params ["_classRoot", "_entries"];

if ( _classRoot == "CfgWeapons" ) exitWith {  _entries select { [_x] call FUNC(isValidCfgWeapon) } };

_entries