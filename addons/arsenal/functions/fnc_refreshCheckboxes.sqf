#include "script_component.hpp"

params ["_display"];

private _master = GVAR(currentMaster);
private _config = GVAR(currentConfig);

if ( _master != "" ) then {
	private _masterConfig = configFile >> "XtdGearMasters" >> _config >> _master;
	private _configs = getArray ( _masterConfig >> "configs" );
	{
		private _configName = _x;
		private _configIndex = _foreachIndex;
		private _currentValue = GVAR(currentMasterConfig) select _configIndex;
		private _configValues = getArray (_masterConfig >> _configName >> "values");

		{
			private _valueName = _x;
			private _valueIndex = _foreachIndex;
			private _valueIdcBase = 9970000 + (_configIndex * 200) + (_valueIndex * 4);
			
			private _ctrl = _display displayCtrl (_valueIdcBase + 1);
			_ctrl cbSetChecked (_valueName == _currentValue);
			_ctrl ctrlCommit 0;

		} forEach _configValues;

	} forEach _configs;
};