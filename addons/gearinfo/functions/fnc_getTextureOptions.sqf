#include "script_component.hpp"

params ["_unit", ["_useInsignia", true]];

private _unitTextureOptions = [];

{
	_x params ["_classRoot", "_target", "_config"];

	if ( _config != "" ) then {
		private _model = [_classRoot, _config] call FUNC(getConfigModel);
		if ( _model != "" ) then {
			private _textureOptions = getArray(configFile >> "XtdGearModels" >> _classRoot >> _model >> "textureoptions");
			{
				_unitTextureOptions pushBack [ _model + "_" + _x, [_unit, _model, _x] call FUNC(getTextureOption)];
			} foreach _textureOptions;
		};
	};

} foreach [
		["CfgWeapons",  _unit,              uniform _unit],
		["CfgVehicles", unitBackpack _unit, backpack _unit]
	];

if ( _useInsignia ) then {
	_unitTextureOptions pushBack ["BIS_UnitInsignia", [_unit] call BIS_fnc_getUnitInsignia];
};

_unitTextureOptions