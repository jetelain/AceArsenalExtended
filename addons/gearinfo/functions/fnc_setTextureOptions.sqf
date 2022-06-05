#include "script_component.hpp"

params ["_unit", "_unitTextureOptions", ["_useInsignia", true]];

if ( _unitTextureOptions isEqualType "" ) then {
	if ( _unitTextureOptions == "" ) then {
		_unitTextureOptions = [];
		WARNING_1("Unexpected call to setTextureOptions on %1", _unit);
	} else {
		_unitTextureOptions = parseSimpleArray _unitTextureOptions;
	};
};

private _map = createHashMapFromArray _unitTextureOptions;

if ( _useInsignia ) then {
	private _insignia = _map getOrDefault ["BIS_UnitInsignia", ""];
	[_unit, ""] call BIS_fnc_setUnitInsignia; // Invalidate cache
	if ( _insignia != "" ) then {
		[_unit, _insignia] call BIS_fnc_setUnitInsignia;
	};
};

{
	_x params ["_classRoot", "_target", "_config"];
	if ( _config != "" ) then {
		private _model = [_classRoot, _config] call FUNC(getConfigModel);
		if ( _model != "" ) then {
			private _textureOptions = getArray(configFile >> "XtdGearModels" >> _classRoot >> _model >> "textureoptions");
			{
				private _value = _map getOrDefault [_model + "_" + _x, ""];
				_unit setVariable [_model + "_" + _x, _value, true];
				[_unit, _classRoot, _target, _config, _model, _x, _value] call FUNC(applyTextureOptionOnItem);
			} foreach _textureOptions;
		};
	};
} foreach [
    ["CfgWeapons", _unit, uniform _unit],
    ["CfgVehicles", unitBackpack _unit, backpack _unit]
];
