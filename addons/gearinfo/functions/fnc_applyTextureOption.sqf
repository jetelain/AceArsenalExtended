#include "script_component.hpp"

params ["_unit", "_model", "_textureOption", "_value"];

if ( _value == "" ) exitWith {}; // value is mandatory

[_unit, "CfgWeapons", _unit,                uniform _unit, _model, _textureOption, _value] call FUNC(applyTextureOptionOnItem);
[_unit, "CfgVehicles", unitBackpack _unit, backpack _unit, _model, _textureOption, _value] call FUNC(applyTextureOptionOnItem);
