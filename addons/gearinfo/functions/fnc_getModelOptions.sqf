#include "script_component.hpp"
params ["_classRoot", "_model", ["_modelDefinition", configNull], ["_kind", "options"], ["_allowedItems", [], [[]], []]];

if ( isNull _modelDefinition ) then {
	_modelDefinition = configFile >> "XtdGearModels" >> _classRoot >> _model;
};

private _st = diag_tickTime;

private _optionsNames = getArray ( _modelDefinition >> _kind );

private _options = [];

private _allowedItemsValues = [];
if ( _kind == "options" ) then {
	_allowedItemsValues = _allowedItems apply { [_classRoot, _x, _model, _optionsNames] call EFUNC(gearinfo,getConfigOptions) };
};

{
	private _optionName = _x;
	private _optionIndex = _foreachIndex;
	private _optionDef1 = _modelDefinition >> _optionName;
	private _optionDef2 = configFile >> "XtdGearModels" >> "Conventional" >> _optionName;

	private _optionLabel = [_optionDef1, _optionDef2, "label", _optionName] call READ_TEXT;
	private _optionIcon = [_optionDef1, _optionDef2, "icon", ""] call READ_TEXT;
	private _optionInGame = [_optionDef1, _optionDef2, "changeingame", 0] call READ_NUMBER;
	private _optionDelay = [_optionDef1, _optionDef2, "changedelay", 2] call READ_NUMBER;
	private _alwaysSelectable = 1 == ([_optionDef1, _optionDef2, "alwaysSelectable", 0] call READ_NUMBER);
	private _values = [];
	private _optionCenterImage = getNumber (_optionDef1 >> "centerImage");
	private _isTextTexture = false;
	private _requires = [];
	if ( isArray (_optionDef1 >> "requires") ) then {
		_requires = (getArray (_optionDef1 >> "requires")) apply { [ (getArray ( _modelDefinition >> "options" )) find (_x select 0), _x select 1 ] };
	};

	if ( _kind == "textureoptions" && { isText (_optionDef1 >> "texttexture") } ) then {
		_isTextTexture = true;
	} else {
		private _optionValues = getArray (_optionDef1 >> "values");

		if ( count _allowedItems != 0 && _optionInGame <= 0 && _kind == "options" ) then {
			// Restrict to allowedItems
			_optionValues = _optionValues arrayIntersect (_allowedItemsValues apply { _x select _optionIndex });
		};

		{
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

			_values pushBack [_valueName, _valueLabel, _valueImage, _valueIcon, _valueDesc, _factionFilter, _valueAction, _valueInGame, _itemInGame, _valueDelay];

		} forEach _optionValues;
	};

	_options pushBack [_optionName, _optionLabel, _optionIcon, _optionInGame, _values, _optionCenterImage, _alwaysSelectable, _requires, _isTextTexture];
	
} forEach _optionsNames;

_options