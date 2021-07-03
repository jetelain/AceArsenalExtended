#include "script_component.hpp"

params ["_classRoot", "_model", ["_modelDefinition", configNull], ["_kind", "options"]];

// XXX: Add cache ?

if ( isNull _modelDefinition ) then {
	_modelDefinition = configFile >> "XtdGearModels" >> _classRoot >> _model;
};

private _st = diag_tickTime;

private _optionsNames = getArray ( _modelDefinition >> _kind );

private _options = [];

#define READ(s) \
private _read##s = { \
	params ["_def1", "_def2", "_name", "_default"]; \
	_def1 = _def1 >> _name; \
	if ( is##s _def1 ) exitWith { get##s _def1; }; \
	_def2 = _def2 >> _name; \
	if ( is##s _def2 ) exitWith { get##s _def2; }; \
	_default \
};

READ(Text)
READ(Number)

{
	private _optionName = _x;
	private _optionIndex = _foreachIndex;
	private _optionDef1 = _modelDefinition >> _optionName;
	private _optionDef2 = configFile >> "XtdGearModels" >> "Conventional" >> _optionName;

	private _optionLabel = [_optionDef1, _optionDef2, "label", _optionName] call _readText;
	private _optionIcon = [_optionDef1, _optionDef2, "icon", ""] call _readText;
	private _optionInGame = [_optionDef1, _optionDef2, "changeingame", 0] call _readNumber;
	private _values = [];
	private _optionCenterImage = getNumber (_optionDef1 >> "centerImage");
	private _optionValues = getArray (_optionDef1 >> "values");

	{
		private _valueName = _x;
		private _valueIndex = _foreachIndex;
		private _valueDef1 = _optionDef1 >> _valueName;
		private _valueDef2 = _optionDef2 >> _valueName;
		
		private _valueLabel  = [_valueDef1, _valueDef2, "label", _valueName] call _readText;
		private _valueImage  = [_valueDef1, _valueDef2, "image", ""] call _readText;
		private _valueIcon   = [_valueDef1, _valueDef2, "icon", ""] call _readText;
		private _valueDesc   = [_valueDef1, _valueDef2, "description", ""] call _readText;
		private _valueAction = [_valueDef1, _valueDef2, "actionLabel", format ["%1 %2", _optionLabel, _valueLabel]] call _readText;
		private _valueInGame = [_valueDef1, _valueDef2, "changeingame", _optionInGame] call _readNumber;
		private _itemInGame =  [_valueDef1, _valueDef2, "itemingame", ""] call _readText;
		
		_values pushBack [_valueName, _valueLabel, _valueImage, _valueIcon, _valueDesc, _valueAction, _valueInGame, _itemInGame];

	} forEach _optionValues;

	_options pushBack [_optionName, _optionLabel, _optionIcon, _optionInGame, _values, _optionCenterImage];
	
} forEach _optionsNames;

_options