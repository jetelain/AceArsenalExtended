#include "script_component.hpp"

params ["_unit", "_classRoot", "_target", "_config", "_targetModel", "_textureOption", "_value"];

if ( _config == "" ) exitWith {};

private _model = [_classRoot, _config] call FUNC(getConfigModel);
if ( _model != _targetModel ) exitWith {};

private _optionDefintion = configFile >> "XtdGearModels" >> _classRoot >> _model >> _textureOption;

if (isArray(_optionDefintion >> "hiddenselections")) exitWith {
	[_classRoot, _target, _config, _value, _optionDefintion] call FUNC(applyTextureOptionOnItemArray);
};

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

private _texttexture = _optionDefintion >> "texttexture";
if ( isText _texttexture ) exitWith {
	private _texture = format [getText _texttexture, _value];
	_target setObjectTextureGlobal  [_hiddenSelectionIndex, _texture];
	if ( isText (_optionDefintion >> "textmaterial") ) then {
		_target setObjectMaterialGlobal [_hiddenSelectionIndex, getText (_optionDefintion >> "textmaterial")];
	};
};

if ( _value == "" ) exitWith {}; // value is mandatory

private _texture = getText (_optionDefintion >> _value >> "texture");
private _material = "";
if ( isText (_optionDefintion >> _value >> "material") ) then {
	_material = getText (_optionDefintion >> _value >> "material");
};

if ( _texture == "!DEFAULT!" ) then {
	private _hiddenSelectionsTextures = [];
	private _hiddenSelectionsMaterials = [];
	if ( _classRoot == "CfgWeapons" ) then {
		private _uniformClass = getText (configFile >> _classRoot >> _config >> "ItemInfo" >> "uniformClass");
		_hiddenSelectionsTextures = getArray(configFile >> "CfgVehicles" >> _uniformClass >> "hiddenSelectionsTextures");
		_hiddenSelectionsMaterials = getArray(configFile >> "CfgVehicles" >> _uniformClass >> "hiddenSelectionsMaterials");
	} else {
		_hiddenSelectionsTextures = getArray(configFile >> _classRoot >> _config >> "hiddenSelectionsTextures");
		_hiddenSelectionsMaterials = getArray(configFile >> _classRoot >> _config >> "hiddenSelectionsMaterials");
	};
	_texture = _hiddenSelectionsTextures select _hiddenSelectionIndex;
	if ( count _hiddenSelectionsMaterials >  _hiddenSelectionIndex ) then {
		_material = _hiddenSelectionsMaterials select _hiddenSelectionIndex;
	};
};

if ( _material != "" ) then {
	_target setObjectMaterialGlobal [_hiddenSelectionIndex, _material];
};
_target setObjectTextureGlobal  [_hiddenSelectionIndex, _texture];