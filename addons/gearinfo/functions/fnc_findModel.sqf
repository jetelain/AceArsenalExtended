#include "script_component.hpp"

params ["_classRoot", "_master", "_masterConfig"];

private _configs = getArray (configFile >> "XtdGearMasters" >> _classRoot >> _master >> "configs");
private _condition = "getText (_x >> 'XtdGearInfo' >> 'master') == '"+_master+"'";
private _variations = _condition configClasses (configFile >> _classRoot);

private _result = configNull;
{
	private _variation = _x;
	if ( (_configs apply { getText (_variation >> "XtdGearInfo" >> _x) }) isEqualTo _masterConfig ) exitWith {
		_result = _variation;
	};
} foreach _variations;

_result