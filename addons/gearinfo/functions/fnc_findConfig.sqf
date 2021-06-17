#include "script_component.hpp"

params ["_classRoot", "_model", "_options"];

private _optionsNames = getArray (configFile >> "XtdGearModels" >> _classRoot >> _model >> "options");
private _variations = GVAR(cache) getOrDefault [_model, []];

if ( count _variations == 0 ) then {
	private _condition = "getText (_x >> 'XtdGearInfo' >> 'model') == '"+_model+"'";
	_variations = _condition configClasses (configFile >> _classRoot);
	GVAR(cache) set [_model, _variations];
};

private _result = configNull;
{
	private _variation = _x;
	if ( (_optionsNames apply { getText (_variation >> "XtdGearInfo" >> _x) }) isEqualTo _options ) exitWith {
		_result = _variation;
	};
} foreach _variations;

_result