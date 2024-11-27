#include "script_component.hpp"

params ["_classRoot", "_model"];

private _optionsNames = getArray (configFile >> "XtdGearModels" >> _classRoot >> _model >> "options");

private _allConfigs = [];

private _configs = ("(getText (_x >> 'XtdGearInfo' >> 'model') == '"+_model+"') && " + QUOTE(CLASS_FILTER(_x))) configClasses (configFile >> _classRoot);
_configs = [_classRoot, _configs] call FUNC(filterConfigEntries);
{
	private _variation = _x;
	_allConfigs pushBack [_variation, (_optionsNames apply { getText (_variation >> "XtdGearInfo" >> _x) })];
} forEach _configs;

_configs = ("getText (_x >> 'model') == '"+_model+"'") configClasses (configFile >> "XtdGearInfos" >> _classRoot);
{
	private _infos = _x;
	_allConfigs pushBack [ configFile >> _classRoot >> (configName _infos) , (_optionsNames apply { getText (_infos >> _x) })];
} forEach _configs;

_allConfigs
