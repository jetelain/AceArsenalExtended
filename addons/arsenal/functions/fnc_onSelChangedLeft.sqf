#include "script_component.hpp"
#include "..\defines.hpp"

params ["_control", "_curSel"];

[_control, _curSel] call ace_arsenal_fnc_onSelChangedLeft;

(call FUNC(leftPanelConfig)) params ["_index", "_classRoot"];

if ( _index == -1 ) exitWith {};

private _display = ctrlParent _control;
private _selectedConfig = ace_arsenal_currentItems select _index;
private _selectedModel = "";
private _currentConfig = configNull;
if ( _selectedConfig != "" ) then {
	_currentConfig = configFile >> _classRoot >> _selectedConfig >> "XtdGearInfo";
	_selectedModel = [_currentConfig, "model", ""] call BIS_fnc_returnConfigEntry;
};

if ( _selectedModel != GVAR(currentModel) ) then {
	private _configControl = _display displayCtrl 9990000;
	private _listControl = _display displayCtrl IDC_leftTabContent;

	// Remove previous controls if any
	{ ctrlDelete (_display displayCtrl _x); } foreach GVAR(valuesIdc);
	GVAR(valuesIdc) = [];

	GVAR(currentModelOptions) = [];

	if ( _selectedModel != "" ) then {

		_listControl ctrlSetPositionH (safezoneH - 128.5 * GRID_H);
		_configControl ctrlSetPositionY ((safezoneY + 14 * GRID_H) + (safezoneH - 124.5 * GRID_H));
		_configControl ctrlSetPositionH (100 * GRID_H);

		private _modelDefinition = configFile >> "XtdGearModels" >> _classRoot >> _selectedModel;

		private _optionsNames = getArray ( _modelDefinition >> "options" );
		private _label   = getText  ( _modelDefinition >> "label" );
		private _author  = getText  ( _modelDefinition >> "author" );

		(_display displayCtrl 9990001) ctrlSetText _label;
		(_display displayCtrl 9990002) ctrlSetText _author;

		private _posY = 12;

		{
			private _optionName = _x;
			private _optionIndex = _foreachIndex;
			private _optionDefition = _modelDefinition >> _optionName;
			private _optionLabel  = getText (_optionDefition >> "label");
			private _optionValues = getArray (_optionDefition >> "values");
			private _currentValue = getText (_currentConfig >> _optionName);
			
			private _configIdcBase = 9980000 + _optionIndex;

			GVAR(currentModelOptions) pushBack _currentValue;

			GVAR(valuesIdc) pushBack _configIdcBase;

			private _ctrl = _display ctrlCreate [QGVAR(configTitle), _configIdcBase, _configControl];
			_ctrl ctrlSetPosition [ 0, _posY * GRID_H];
			_ctrl ctrlSetText _optionLabel;
			_ctrl ctrlCommit 0;

			private _posX = 0;
			_posY = _posY + 6;

			{
				private _valueName = _x;
				private _valueIndex = _foreachIndex;
				private _valueConfig = _optionDefition >> _valueName;
				private _valueLabel  = [_valueConfig, "label", _valueName] call BIS_fnc_returnConfigEntry;
				private _valueImage  = [_valueConfig, "image", ""] call BIS_fnc_returnConfigEntry;

				// up to 499 options, up to 49 values per config
				private _valueIdcBase = 9970000 + (_optionIndex * 200) + (_valueIndex * 4);

				GVAR(valuesIdc) pushBack _valueIdcBase;
				GVAR(valuesIdc) pushBack _valueIdcBase+1;
				GVAR(valuesIdc) pushBack _valueIdcBase+2;

				GVAR(idcToConfig) set [_valueIdcBase, [_optionIndex, _optionName, _valueIndex, _valueName]];

				private _ctrl = _display ctrlCreate [QGVAR(valueImage), _valueIdcBase, _configControl];
				_ctrl ctrlSetPosition [_posX * GRID_W, _posY * GRID_H];
				_ctrl ctrlSetText _valueImage;
				_ctrl ctrlCommit 0;

				_ctrl = _display ctrlCreate [QGVAR(valueCheckbox), _valueIdcBase + 1, _configControl];
				_ctrl ctrlSetPosition [_posX * GRID_W, _posY * GRID_H];
				_ctrl cbSetChecked (_valueName == _currentValue);
				_ctrl ctrlCommit 0;

				_ctrl = _display ctrlCreate [QGVAR(valueButton), _valueIdcBase + 2, _configControl];
				_ctrl ctrlSetPosition [_posX * GRID_W, _posY * GRID_H];
				_ctrl ctrlSetText _valueLabel;
				_ctrl ctrlCommit 0;

				_posX = _posX + 20;
				if (_posX == 80) then
				{
					_posX = 0;
					_posY = _posY + 10;
				};
			} forEach _optionValues;

			if (_posX != 0) then
			{
				_posY = _posY + 10;
			};
			_posY = _posY + 2;
		} forEach _optionsNames;


	} else {
		_listControl ctrlSetPositionH (safezoneH - 24.5 * GRID_H);
		_configControl ctrlSetPositionY ((safezoneY + 14 * GRID_H) + (safezoneH - 24.5 * GRID_H));
		_configControl ctrlSetPositionH (0);
	};
	_listControl ctrlCommit 0.1;
	_configControl ctrlCommit 0.1;
	GVAR(currentModel) = _selectedModel;
	GVAR(currentConfig) = _classRoot;

	if ( _selectedModel != "" ) then {
		[_display] call FUNC(refreshCheckboxes);
	};
	
} else {
	if ( _selectedModel != "" ) then {
		private _modelDefinition = configFile >> "XtdGearModels" >> _classRoot >> _selectedModel;
		private _optionsNames = getArray ( _modelDefinition >> "options" );
		
		GVAR(currentModelOptions) = [];
		{
			GVAR(currentModelOptions) pushBack getText (_currentConfig >> _x);
		} forEach _optionsNames;

		[_display] call FUNC(refreshCheckboxes);
	};
};
