#include "script_component.hpp"

params ["_unit", "_classRoot", "_target", "_config", "_targetModel", "_textureOption", "_value"];

if ( _config == "" or { _value == "" } ) exitWith {};

private _model = [_classRoot, _config] call FUNC(getConfigModel);

if (_model != _targetModel) exitWith {};

private _optionDef = configFile >> "XtdGearModels" >> _classRoot >> _model >> _textureOption;

private _configChain = [_optionDef, _textureOption] call FUNC(chainedConfigs);
private _valueCfgChain = _configChain apply { _x >> _value } select { not isNull _x };

private _classSelectionsConfig = if (_classRoot == "CfgWeapons") then {
	private _uniformClass = getText (configFile >> _classRoot >> _config >> "ItemInfo" >> "uniformClass");
	configFile >> "CfgVehicles" >> _uniformClass
} else {
	configFile >> _classRoot >> _config
};

private _classSelections = [_classSelectionsConfig, "hiddenSelections", []] call BIS_fnc_returnConfigEntry;

private _hiddenSelection =  [_configChain, "hiddenselection", ""] call READ_TEXT;
private _hiddenSelections =  [_configChain, "hiddenselections", [_hiddenSelection]] call READ_ARRAY;
private _hiddenSelectionsIndexes = _hiddenSelections apply { _classSelections find _x };

if ( -1 in _hiddenSelectionsIndexes ) exitWith {
	WARNING_3("Some option hiddenSelections of option was not found in model: Option=%1 Model=%2 Resolved=%3", _hiddenSelections, _classSelections, _hiddenSelectionsIndexes);
};

private _texture = [_valueCfgChain, "texture", ""] call READ_TEXT;
private _textures = [_valueCfgChain, "textures", [_texture]] call READ_ARRAY;
private _material = [_valueCfgChain, "material", ""] call READ_TEXT;
private _materials = [_valueCfgChain, "materials", [_material]] call READ_ARRAY;

if ( count _textures == 0 and { count _materials == 0 } ) exitWith {
	WARNING_3("No textures or materials defined. Textures=%1 Materials=%2 HiddenSelections=%3", _textures, _materials, _hiddenSelections);
};

private _classSelectionsTextures = [];
private _classSelectionsMaterials = [];

if (DEFAULT_TEXTURES in _textures) then {
	if ( _classRoot == "CfgWeapons" ) then {
		private _uniformClass = getText (configFile >> _classRoot >> _config >> "ItemInfo" >> "uniformClass");
		_classSelectionsTextures = getArray(configFile >> "CfgVehicles" >> _uniformClass >> "hiddenSelectionsTextures");
		_classSelectionsMaterials = getArray(configFile >> "CfgVehicles" >> _uniformClass >> "hiddenSelectionsMaterials");
	} else {
		_classSelectionsTextures = getArray(configFile >> _classRoot >> _config >> "hiddenSelectionsTextures");
		_classSelectionsMaterials = getArray(configFile >> _classRoot >> _config >> "hiddenSelectionsMaterials");
	};
};

private _texturesSize = count _textures;
private _materialsSize = count _materials;
private _classSelectionsMaterialsSize = count _classSelectionsMaterials;

{
    private _index = _forEachIndex;
    private _selectionIndex = _x;
	private _texture = if (_texturesSize <= _index) then { "" } else {
	    _textures select _index
	};
	private _material = if (_materialsSize <= _index) then { "" } else {
	    _materials select _index
	};
	if (_texture == DEFAULT_TEXTURES) then {
		_texture = _classSelectionsTextures select _selectionIndex;
		if (_classSelectionsMaterialsSize > _selectionIndex) then {
			_material = _classSelectionsMaterials select _selectionIndex;
		};
	};
	if (_material != "") then {
		_target setObjectMaterialGlobal  [_selectionIndex, _material];
	};
	if (_texture != "") then {
	    _target setObjectTextureGlobal  [_selectionIndex, _texture];
	};
} forEach _hiddenSelectionsIndexes;
