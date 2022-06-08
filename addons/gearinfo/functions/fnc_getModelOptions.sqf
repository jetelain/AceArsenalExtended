#include "script_component.hpp"

params ["_classRoot", "_model", ["_modelDefinition", configNull], ["_kind", "options"]];

if (isNull _modelDefinition) then {
	_modelDefinition = configFile >> "XtdGearModels" >> _classRoot >> _model;
};

private _cacheKey = [GVAR(currentId), _classRoot, _model, _kind];
private _cached = GVAR(optionCache) getOrDefault [_cacheKey, []];
if (count _cached != 0) exitWith { _cached };

private _currentFaction = if (not isNull player) then { faction player } else { "" };
private _skipFactions = is3DEN or { _currentFaction in ["", "CIV_F"] };
private _optionsNames = [_modelDefinition, _kind, []] call BIS_fnc_returnConfigEntry;
private _optionIndex = -1;

private _options = _optionsNames apply {
    INC(_optionIndex);
	private _optionName = _x;

	private _optionDef = _modelDefinition >> _optionName;
	private _configChain = [_optionDef, _optionName] call FUNC(chainedConfigs);

	private _optionLabel = [_configChain, "label", _optionName] call READ_TEXT;
	private _optionIcon = [_configChain, "icon", ""] call READ_TEXT;
	private _optionInGame = [_configChain, "changeingame", 0] call READ_NUMBER;
	private _optionDelay = [_configChain, "changedelay", 2] call READ_NUMBER;
	private _alwaysSelectable = 1 == ([_configChain, "alwaysSelectable", 0] call READ_NUMBER);
	private _optionCenterImage = getNumber (_optionDef >> "centerImage");
	private _optionValues = [_classRoot, _model, _optionName, _kind, _optionIndex] call FUNC(optionValues);

	private _requires = [];
	if ( isArray (_optionDef >> "requires") ) then {
		_requires = (getArray (_optionDef >> "requires")) apply { [ (getArray ( _modelDefinition >> "options" )) find (_x select 0), _x select 1 ] };
	};

	private _values = _optionValues apply {
		private _valueName = _x;
		private _valueCfgChain = _configChain apply { _x >> _valueName } select { not isNull _x };
		
		private _valueLabel  = [_valueCfgChain, "label", _valueName] call READ_TEXT;
		private _valueImage  = [_valueCfgChain, "image", ""] call READ_TEXT;
		private _valueIcon   = [_valueCfgChain, "icon", ""] call READ_TEXT;
		private _valueDesc   = [_valueCfgChain, "description", ""] call READ_TEXT;
		private _factionFilter =  [_valueCfgChain, "faction", []] call READ_ARRAY;
		private _valueAction = [_valueCfgChain, "actionLabel", format ["%1 %2", _optionLabel, _valueLabel]] call READ_TEXT;
		private _valueInGame = [_valueCfgChain, "changeingame", _optionInGame] call READ_NUMBER;
		private _valueDelay  = [_valueCfgChain, "changedelay", _optionDelay] call READ_NUMBER;
		private _itemInGame  = [_valueCfgChain, "itemingame", ""] call READ_TEXT;

		[_valueName, _valueLabel, _valueImage, _valueIcon, _valueDesc, _valueAction, _valueInGame, _itemInGame, _valueDelay]
	};

	private _filteredTextures = if (_kind != "textureoptions") then { _values } else {
	    _values select {
            _x params ["_valueName"];

            private _valueCfgChain = _configChain apply { _x >> _valueName } select { not isNull _x };

            private _texture = [_valueCfgChain, "texture", ""] call READ_TEXT;
            private _textures = [_valueCfgChain, "textures", []] call READ_ARRAY;
            private _material = [_valueCfgChain, "material", ""] call READ_TEXT;
            private _materials = [_valueCfgChain, "materials", []] call READ_ARRAY;
            private _all = [_texture, _material] + _textures + _materials;
            private _existing = _all select { fileExists _x or { _x in [DEFAULT_TEXTURES, NONE_TEXTURE] or { (_x find "#(") >= 0 } } };

            count _existing != 0
        }
    };

	private _filteredValues = if _skipFactions then { _filteredTextures } else {
	    _filteredTextures select {
            _x params ["_valueName"];

            private _valueCfgChain = _configChain apply { _x >> _valueName } select { not isNull _x };
            private _factionFilter =  [_valueCfgChain, "faction", []] call READ_ARRAY;

            count _factionFilter == 0 or { _currentFaction in _factionFilter }
        }
    };

	[_optionName, _optionLabel, _optionIcon, _optionInGame, _filteredValues, _alwaysSelectable, _optionCenterImage, _requires]
};

GVAR(optionCache) set [_cacheKey, _options];

_options
