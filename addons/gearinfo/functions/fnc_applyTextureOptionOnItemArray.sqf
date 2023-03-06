#include "script_component.hpp"

params ["_classRoot", "_target", "_config", "_value", "_optionDefintion"];

if ( _value == "" ) exitWith {}; // value is mandatory

private _classHiddenSelections = [];
if ( _classRoot == "CfgWeapons" ) then {
	private _uniformClass = getText (configFile >> _classRoot >> _config >> "ItemInfo" >> "uniformClass");
	_classHiddenSelections = getArray(configFile >> "CfgVehicles" >> _uniformClass >> "hiddenSelections");
} else {
	_classHiddenSelections = getArray(configFile >> _classRoot >> _config >> "hiddenSelections");
};

private _hiddenSelections = getArray (_optionDefintion >> "hiddenselections");
private _hiddenSelectionsIndexes = _hiddenSelections apply { _classHiddenSelections find _x };

if ( -1 in _hiddenSelectionsIndexes ) exitWith {
	WARNING_3("Some option hiddenSelections of option was not found in model: Option=%1 Model=%2 Resolved=%3", _hiddenSelections, _classHiddenSelections, _hiddenSelectionsIndexes);
};

private _textures = getArray (_optionDefintion >> _value >> "textures");
private _materials = _textures apply { "" };

if ( isArray (_optionDefintion >> _value >> "materials") ) then {
	_materials = getArray (_optionDefintion >> _value >> "materials");
};

if ( count _textures != count _hiddenSelectionsIndexes ) exitWith {
	WARNING_2("Textures count mismatch hidden selections. Textures=%1 HiddenSelections=%2", _textures, _hiddenSelections);
};
if ( count _material != count _hiddenSelectionsIndexes ) exitWith {
	WARNING_2("Materials count mismatch hidden selections. Materials=%1 HiddenSelections=%2", _materials, _hiddenSelections);
};

private _classHiddenSelectionsTextures = [];
private _classHiddenSelectionsMaterials = [];

if ( "!DEFAULT!" in _textures ) then {
	if ( _classRoot == "CfgWeapons" ) then {
		private _uniformClass = getText (configFile >> _classRoot >> _config >> "ItemInfo" >> "uniformClass");
		_classHiddenSelectionsTextures = getArray(configFile >> "CfgVehicles" >> _uniformClass >> "hiddenSelectionsTextures");
		_classHiddenSelectionsMaterials = getArray(configFile >> "CfgVehicles" >> _uniformClass >> "hiddenSelectionsMaterials");
	} else {
		_classHiddenSelectionsTextures = getArray(configFile >> _classRoot >> _config >> "hiddenSelectionsTextures");
		_classHiddenSelectionsMaterials = getArray(configFile >> _classRoot >> _config >> "hiddenSelectionsMaterials");
	};
};

{
	private _material = _materials select _forEachIndex;
	private _texture = _textures select _forEachIndex;
	if (_texture == "!DEFAULT!") then {
		_texture = _classHiddenSelectionsTextures select _x;
		if ( count _classHiddenSelectionsMaterials > _x ) then {
			_material = _classHiddenSelectionsMaterials select _x;
		};
	};
	if ( _material != "" ) then {
		_target setObjectMaterialGlobal  [_x, _material];
	};
	_target setObjectTextureGlobal  [_x, _texture];
} forEach _hiddenSelectionsIndexes;

