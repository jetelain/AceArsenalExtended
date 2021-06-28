#include "script_component.hpp"

params ["_unit", "_classRoot", "_target", "_config", "_targetModel", "_textureOption", "_value"];

if ( _config == "" ) exitWith {};

if ( _value == "" ) exitWith {}; // value is mandatory

private _model = [_classRoot, _config] call FUNC(getConfigModel);
if ( _model != _targetModel ) exitWith {};

private _optionDefintion = configFile >> "XtdGearModels" >> _classRoot >> _model >> _textureOption;
private _hiddenselection = _optionDefintion >> "hiddenselection";
private _hiddenSelectionIndex = -1;
if ( isNumber _hiddenselection ) then {
	_hiddenSelectionIndex = getNumber (_hiddenselection);	
};
if ( isText _hiddenselection ) then {
	private _hiddenSelections = [];
	if ( _classRoot == "CfgWeapons" ) then {
		private _uniformClass = getText (configFile >> _classRoot >> _config >> "ItemInfo" >> "uniformClass");
		_hiddenSelections = getArray(configFile >> "CfgVehicles" >> _uniformClass >> "hiddenSelections");
	} else {
		_hiddenSelections = getArray(configFile >> _classRoot >> _config >> "hiddenSelections");
	};
	_hiddenSelectionIndex = _hiddenSelections find (getText _hiddenselection);
};

if ( _hiddenSelectionIndex == -1 ) exitWith {};

private _texture = "";
if ( _value == "$INSIGNIA$" ) then {
	// TODO
} else {
	_texture = getText (_optionDefintion >> _value >> "texture");
};

_target setObjectTextureGlobal [_hiddenSelectionIndex, _texture];