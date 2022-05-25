#include "script_component.hpp"

params ["_classRoot", "_model", ["_modelDefinition", configNull], ["_kind", "options"]];

if (isNull _modelDefinition) then {
	_modelDefinition = configFile >> "XtdGearModels" >> _classRoot >> _model;
};

private _cacheKey = [_classRoot, _model, _kind];
private _cached = GVAR(optionCache) getOrDefault [_cacheKey, []];
if (count _cached != 0) exitWith { _cached };

private _optionsNames = [_modelDefinition, _kind, []] call BIS_fnc_returnConfigEntry;
private _optionIndex = -1;

{
private _options = _optionsNames apply {
    INC(_optionIndex);
	private _optionName = _x;
	private _optionDef1 = _modelDefinition >> _optionName;
	private _optionDef2 = configFile >> "XtdGearModels" >> "Conventional" >> _optionName;

	private _optionLabel = [_optionDef1, _optionDef2, "label", _optionName] call READ_TEXT;
	private _optionIcon = [_optionDef1, _optionDef2, "icon", ""] call READ_TEXT;
	private _optionInGame = [_optionDef1, _optionDef2, "changeingame", 0] call READ_NUMBER;
	private _optionDelay = [_optionDef1, _optionDef2, "changedelay", 2] call READ_NUMBER;
	private _alwaysSelectable = 1 == ([_optionDef1, _optionDef2, "alwaysSelectable", 0] call READ_NUMBER);
	private _optionCenterImage = getNumber (_optionDef1 >> "centerImage");
	private _optionValues = [_classRoot, _model, _optionName, _optionIndex] call FUNC(getOptionValues);

	private _requires = [];
	if ( isArray (_optionDef1 >> "requires") ) then {
		_requires = (getArray (_optionDef1 >> "requires")) apply { [ (getArray ( _modelDefinition >> "options" )) find (_x select 0), _x select 1 ] };
	};

	private _values = _optionValues apply {
		private _valueName = _x;
		private _valueIndex = _foreachIndex;
		private _valueDef1 = _optionDef1 >> _valueName;
		private _valueDef2 = _optionDef2 >> _valueName;
		
		private _valueLabel  = [_valueDef1, _valueDef2, "label", _valueName] call READ_TEXT;
		private _valueImage  = [_valueDef1, _valueDef2, "image", ""] call READ_TEXT;
		private _valueIcon   = [_valueDef1, _valueDef2, "icon", ""] call READ_TEXT;
		private _valueDesc   = [_valueDef1, _valueDef2, "description", ""] call READ_TEXT;
		private _factionFilter =  [_valueDef1, _valueDef2, "faction", []] call READ_ARRAY;
		private _valueAction = [_valueDef1, _valueDef2, "actionLabel", format ["%1 %2", _optionLabel, _valueLabel]] call READ_TEXT;
		private _valueInGame = [_valueDef1, _valueDef2, "changeingame", _optionInGame] call READ_NUMBER;
		private _valueDelay  = [_valueDef1, _valueDef2, "changedelay", _optionDelay] call READ_NUMBER;
		private _itemInGame  = [_valueDef1, _valueDef2, "itemingame", ""] call READ_TEXT;

		[_valueName, _valueLabel, _valueImage, _valueIcon, _valueDesc, _factionFilter, _valueAction, _valueInGame, _itemInGame, _valueDelay]
	};

	_options pushBack [_optionName, _optionLabel, _optionIcon, _optionInGame, _values, _alwaysSelectable, _optionCenterImage, _requires];
	
};

GVAR(optionCache) set [_cacheKey, _options];

_options
