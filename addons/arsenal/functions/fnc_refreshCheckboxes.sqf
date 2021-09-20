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
			private _valueIdcBase = 9900000 + (_optionIndex * 1000) + (_valueIndex * 4);
			
			private _previewOptions = +GVAR(currentModelOptions);
			_previewOptions set [_optionIndex, _valueName];

			private _ctrl = _display displayCtrl (_valueIdcBase + 1);
			_ctrl cbSetChecked (_valueName == _currentValue);
			_ctrl ctrlEnable !isNull ([GVAR(currentConfig), GVAR(currentModel), _previewOptions] call EFUNC(gearinfo,findConfig));
			_ctrl ctrlCommit 0;
		} forEach _optionValues;

	} forEach _options;


	private _textureoptions = [_config, _model, _modelDefinition, "textureoptions"] call EFUNC(gearinfo,getModelOptions);
	{
		private _optionIndex = _foreachIndex;
		_x params  ["_optionName", "", "", "", "_values", "", "_requires"];
		private _currentValue = [ace_arsenal_center, GVAR(currentModel), _optionName] call EFUNC(gearinfo,getTextureOption);
		private _enabled = true;

		{
			_x params ["_reqIdx","_reqValue"];
			_enabled = _enabled && ((GVAR(currentModelOptions) select _reqIdx) == _reqValue);
		} forEach _requires;

		private _posX = 0;
		{
			private _valueIndex = _foreachIndex;
			_x params ["_valueName"];
			private _valueIdcBase = 9940000 + (_optionIndex * 1000) + (_valueIndex * 4);
			private _ctrl = _display displayCtrl (_valueIdcBase + 1);
			_ctrl cbSetChecked (_valueName == _currentValue);
			_ctrl ctrlEnable _enabled;
			_ctrl ctrlCommit 0;
		} forEach _values;
	} forEach _textureoptions;
	

};