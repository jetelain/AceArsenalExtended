#include "script_component.hpp"

params [["_classRoot", ""]];

if ( _classRoot == "" ) exitWith {
	(["CfgVehicles"] call FUNC(diag_detectErrors)) +
	  (["CfgGlasses"] call FUNC(diag_detectErrors)) +
	  (["CfgWeapons"] call FUNC(diag_detectErrors))
};

INFO_1("Scanning %1 for XtdGearInfo errors", _classRoot);

private _errors = 0;

private _configs = QUOTE((isText (_x >> 'XtdGearInfo' >> 'model')) && CLASS_FILTER(_x)) configClasses (configFile >> _classRoot);
_configs = [_classRoot, _configs] call FUNC(filterConfigEntries);
{
	private _model = getText(_x  >> "XtdGearInfo" >> "model");
	if(!isClass (configFile >> "XtdGearModels" >> _classRoot >> _model)) then {
		private _configName = configName _x;
		ERROR_3("Config '%1/%2' references a non existent model '%3'", _classRoot, _configName, _model);
	};
} foreach _configs;

_configs = "true" configClasses (configFile >> "XtdGearInfos" >> _classRoot);
{
	private _model = getText(_x  >> "model");
	if(!isClass (configFile >> "XtdGearModels" >> _classRoot >> _model)) then {
		private _configName = configName _x;
		ERROR_3("Config '%1/%2' references a non existent model '%3'", _classRoot, _configName, _model);
	};
} foreach _configs;

private _models  = "isArray (_x >> 'options')" configClasses (configFile >> "XtdGearModels" >> _classRoot);
{
	private _model = configName _x;
	private _modelDef = _x;
	private _optionNames = getArray (_x >> "options");
	private _configMap = createHashMap;
	private _modelValidOptions = _optionNames apply { [_classRoot, _model, _x] call FUNC(getOptionValues) };

	{
		_x params ["_config","_optionsValues"],

		private _configName = configName _config;

		{
			private _str = _configOptions select _foreachIndex;
			if ( _str == "" ) then {
				ERROR_3("Config '%1/%2' has no value for option '%3'", _classRoot, _configName, _x);
				_errors = _errors + 1;
			} else {
				private _valid = _modelValidOptions select _foreachIndex;
				if ( !(_str in _valid)) then {
					ERROR_5("Config '%1/%2' has unknown value '%3' for option '%4' (%5 are allowed)", _classRoot, _configName, _str, _x, _valid);
					_errors = _errors + 1;
				};
			};
		} forEach _optionNames;

		if ( _optionsValues in _configMap ) then {
			private _dup = _configMap get _optionsValues;
			ERROR_4("Config '%1/%2' has same options that '%1/%3': %4", _classRoot, _configName, _dup, _optionsValues);
			_errors = _errors + 1;
		} else {
			_configMap set [_optionsValues, _configName];
		};

	} foreach ([_classRoot, _model] call FUNC(getModelConfigs));

} foreach _models;

if ( _errors > 0 ) then {
	WARNING_2("%1 has %2 error(s)", _classRoot, _errors);
} else {
	INFO_1("%1 is OK", _classRoot);
};

_errors