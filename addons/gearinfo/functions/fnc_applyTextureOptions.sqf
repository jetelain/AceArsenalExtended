#include "script_component.hpp"

params ["_unit"];

{
	_x params ["_classRoot", "_target", "_config"];

	if ( _config == "" ) then { continue };

    private _model = [_classRoot, _config] call FUNC(getConfigModel);

    if ( _model == "" ) then { continue };

    private _textureOptions = [configFile >> "XtdGearModels" >> _classRoot >> _model, "textureoptions", []] call BIS_fnc_returnConfigEntry;

    {
        private _value = [_unit, _model, _x] call FUNC(getTextureOption);
        [_unit, _classRoot, _target, _config, _model, _x, _value] call FUNC(applyTextureOptionOnItem);
    } forEach _textureOptions;

} forEach [
    ["CfgWeapons", _unit, uniform _unit],
    ["CfgVehicles", unitBackpack _unit, backpack _unit]
];
