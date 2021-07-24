#include "script_component.hpp"

params ["_classRoot", "_model", "_options"];

private _variations = GVAR(cache) getOrDefault [_model, []];

if ( count _variations == 0 ) then {
	private _optionsNames = getArray (configFile >> "XtdGearModels" >> _classRoot >> _model >> "options");
	private _configs = ("(getText (_x >> 'XtdGearInfo' >> 'model') == '"+_model+"') && ((getNumber (_x >> 'scope')) == 2) && (count (_x >> 'linkeditems') == 0 && ( ! isNumber (_x >> 'scopeArsenal') || getNumber (_x >> 'scopeArsenal') == 2 ))") configClasses (configFile >> _classRoot);

	_variations = createHashMap;
	{
		private _variation = _x;
		_variations set [(_optionsNames apply { getText (_variation >> "XtdGearInfo" >> _x) }), _variation];
	} foreach _configs;

	GVAR(cache) set [_model, _variations];
};

_variations getOrDefault [_options, configNull]