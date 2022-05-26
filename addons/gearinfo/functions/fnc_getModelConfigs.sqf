#include "script_component.hpp"

params ["_classRoot", "_model"];

private _modelDefinition = configFile >> "XtdGearModels" >> _classRoot >> _model;
private _optionsNames = [_modelDefinition, "options", []] call BIS_fnc_returnConfigEntry;

private _allConfigs = [];

private _configSelector = format ["(getText (_x >> 'XtdGearInfo' >> 'model') == '%1') && %2", _model, QUOTE(CLASS_FILTER(_x))];
private _configs = _configSelector configClasses (configFile >> _classRoot);
_configs = [_classRoot, _configs] call FUNC(filterConfigEntries);
{
	private _variation = _x;
	_allConfigs pushBack [_variation, (_optionsNames apply { getText (_variation >> "XtdGearInfo" >> _x) })];
} forEach _configs;

private _modelConfigSelector = format ["getText (_x >> 'model') == '%1'", _model];
private _modelConfigs = _modelConfigSelector configClasses (configFile >> "XtdGearInfos" >> _classRoot);
{
	private _infos = _x;
	_allConfigs pushBack [ configFile >> _classRoot >> (configName _infos) , (_optionsNames apply { getText (_infos >> _x) })];
} forEach _modelConfigs;

_allConfigs