#include "script_component.hpp"
#include "..\defines.hpp"

params ["_display", "_classRoot", "_selectedModel"];

private _configControl = _display displayCtrl 9990000;
private _listControl = _display displayCtrl IDC_leftTabContent;

// Remove previous controls if any
{ ctrlDelete (_display displayCtrl _x); } foreach GVAR(valuesIdc);
GVAR(valuesIdc) = [];

if ( _selectedModel != "" ) then {

	private _modelDefinition = configFile >> "XtdGearModels" >> _classRoot >> _selectedModel;


	private _label   = getText  ( _modelDefinition >> "label" );
	private _author  = getText  ( _modelDefinition >> "author" );

	(_display displayCtrl 9990001) ctrlSetText _label;
	(_display displayCtrl 9990002) ctrlSetText _author;
	private _posY = 12;

	{
		private _kind = _x;
		private _idcShift = _foreachIndex * 40000; 

		private _options = [_classRoot, _selectedModel, _modelDefinition, _kind] call EFUNC(gearinfo,getModelOptions);
		{

			private _optionIndex = _foreachIndex;

			_x params  ["_optionName", "_optionLabel", "", "", "_values", "_optionCenterImage"];

			private _configIdcBase = _idcShift + 9980000 + _optionIndex;

			GVAR(valuesIdc) pushBack _configIdcBase;

			private _ctrl = _display ctrlCreate [QGVAR(configTitle), _configIdcBase, _configControl];
			_ctrl ctrlSetPosition [ 0, _posY * GRID_H];
			_ctrl ctrlSetText _optionLabel;
			_ctrl ctrlCommit 0;

			private _posX = 0;
			_posY = _posY + 6;

			{

				private _valueIndex = _foreachIndex;
				_x params ["_valueName", "_valueLabel", "_valueImage", "", "_valueDesc"];

				// up to 40 options, up to 250 values per option
				private _valueIdcBase = _idcShift + 9900000 + (_optionIndex * 1000) + (_valueIndex * 4);

				GVAR(valuesIdc) pushBack _valueIdcBase;
				GVAR(valuesIdc) pushBack _valueIdcBase+1;
				GVAR(valuesIdc) pushBack _valueIdcBase+2;

				GVAR(idcToConfig) set [_valueIdcBase, [_optionIndex, _optionName, _valueIndex, _valueName, _kind]];

				private _ctrl = _display ctrlCreate [ if (_optionCenterImage > 0) then { QGVAR(valueImageCenterSquare) } else { QGVAR(valueImage) }, _valueIdcBase, _configControl];
				_ctrl ctrlSetPosition [_posX * GRID_W, _posY * GRID_H];
				_ctrl ctrlSetText _valueImage;
				_ctrl ctrlCommit 0;

				_ctrl = _display ctrlCreate [QGVAR(valueCheckbox), _valueIdcBase + 1, _configControl];
				_ctrl ctrlSetPosition [_posX * GRID_W, _posY * GRID_H];
				_ctrl ctrlCommit 0;

				_ctrl = _display ctrlCreate [QGVAR(valueButton), _valueIdcBase + 2, _configControl];
				_ctrl ctrlSetPosition [_posX * GRID_W, _posY * GRID_H];
				_ctrl ctrlSetText _valueLabel;
				_ctrl ctrlSetTooltip _valueDesc;
				_ctrl ctrlAddEventHandler ["ButtonClick", { [ctrlParent (_this select 0), _this select 0] call FUNC(onValueButton); }];
				_ctrl ctrlCommit 0;

				_posX = _posX + 20;
				if (_posX == 80) then
				{
					_posX = 0;
					_posY = _posY + 10;
				};
			} forEach _values;

			if (_posX != 0) then
			{
				_posY = _posY + 10;
			};
			_posY = _posY + 2;
		} forEach _options;

	} forEach ["options","textureoptions"];

	private _adjustedHeight = 120 min (_posY + 10);

	_listControl ctrlSetPositionH (safezoneH - (_adjustedHeight + 28.5) * GRID_H);
    _configControl ctrlSetPositionY ((safezoneY + 14 * GRID_H) + (safezoneH - (_adjustedHeight + 24.5) * GRID_H));
    _configControl ctrlSetPositionH (_adjustedHeight * GRID_H);
    _configControl ctrlShow true; // ensures visibility
    _listControl ctrlCommit 0.2;
    _configControl ctrlCommit 0.2;

} else {
	_listControl ctrlSetPositionH (safezoneH - 24.5 * GRID_H);
	_configControl ctrlSetPositionY ((safezoneY + 14 * GRID_H) + (safezoneH - 24.5 * GRID_H));
	_configControl ctrlSetPositionH (0);
	_listControl ctrlCommit 0.2;
	_configControl ctrlCommit 0.2;
};
