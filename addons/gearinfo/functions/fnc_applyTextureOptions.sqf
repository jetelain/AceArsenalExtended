#include "script_component.hpp"

params ["_unit"];

{
	_x params ["_classRoot", "_target", "_config"];

	if ( _config != "" ) then {
		private _model = [_classRoot, _config] call FUNC(getConfigModel);
		if ( _model != "" ) then {
			private _textureOptions = getArray(configFile >> "XtdGearModels" >> _classRoot >> _model >> "textureoptions");
			{
				[_unit, _classRoot, _target, _config, _model, _x, [_unit, _model, _x] call FUNC(getTextureOption)] call FUNC(applyTextureOptionOnItem);
			} foreach _textureOptions;
		};
	};

} foreach [
		["CfgWeapons",  _unit,              uniform _unit],
		["CfgVehicles", unitBackpack _unit, backpack _unit]
	];
