#include "script_component.hpp"

params ["_display"];

private _model = GVAR(currentModel);
private _config = GVAR(currentConfig);

if ( _model != "" ) then {
	private _modelDefition = configFile >> "XtdGearModels" >> _config >> _model;
	private _options = getArray ( _modelDefition >> "options" );
	{
		private _optionName = _x;
		private _optionIndex = _foreachIndex;
		private _currentValue = GVAR(currentModelOptions) select _optionIndex;
		private _optionValues = getArray (_modelDefition >> _optionName >> "values");

		{
			private _valueName = _x;
			private _valueIndex = _foreachIndex;
			private _valueIdcBase = 9970000 + (_optionIndex * 200) + (_valueIndex * 4);
			
			private _previewOptions = +GVAR(currentModelOptions);
			_previewOptions set [_optionIndex, _valueName];

			private _ctrl = _display displayCtrl (_valueIdcBase + 1);
			_ctrl cbSetChecked (_valueName == _currentValue);
			_ctrl ctrlEnable !isNull ([GVAR(currentConfig), GVAR(currentModel), _previewOptions] call EFUNC(gearinfo,findConfig));
			_ctrl ctrlCommit 0;

		} forEach _optionValues;

	} forEach _options;
};