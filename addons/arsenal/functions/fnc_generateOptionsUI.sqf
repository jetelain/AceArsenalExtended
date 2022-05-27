#include "script_component.hpp"
#include "..\defines.hpp"

params ["_display", "_classRoot", "_selectedModel"];

private _configControl = _display displayCtrl 9990000;
private _listControl = _display displayCtrl IDC_leftTabContent;

// Remove previous controls if any
{ ctrlDelete (_display displayCtrl _x); } forEach GVAR(valuesIdc);
GVAR(valuesIdc) = [];

if ( _selectedModel == "" ) exitWith {
    UPDATE_CONTROL(_configControl,_listControl,0,,);
};

private _modelDefinition = configFile >> "XtdGearModels" >> _classRoot >> _selectedModel;

private _label = getText (_modelDefinition >> "label");
private _author = getText (_modelDefinition >> "author");

(_display displayCtrl 9990001) ctrlSetText _label;
(_display displayCtrl 9990002) ctrlSetText _author;
private _posY = 12;

{
    private _kind = _x;
    private _idcShift = _foreachIndex * 40000;

    private _options = [_classRoot, _selectedModel, _modelDefinition, _kind] call EFUNC(gearinfo,getModelOptions);
    {
        private _optionIndex = _foreachIndex;
        _x params  ["_optionName", "_optionLabel", "", "", "_values", "", "_optionCenterImage"];

        private _configIdcBase = _idcShift + 9980000 + _optionIndex;

        GVAR(valuesIdc) pushBack _configIdcBase;

        private _ctrl = _display ctrlCreate [QGVAR(configTitle), _configIdcBase, _configControl];
        _ctrl ctrlSetPosition [ 0, _posY * GRID_H];
        _ctrl ctrlSetText _optionLabel;
        _ctrl ctrlCommit 0;

        private _posX = 1;
        _posY = _posY + 6;

        private _singleOption = count _values <= 1;

        {
            private _valueIndex = _foreachIndex;
            _x params ["_valueName", "_valueLabel", "_valueImage", "", "_valueDesc"];

            // up to 40 options, up to 250 values per option
            private _valueIdcBase = _idcShift + 9900000 + (_optionIndex * 1000) + (_valueIndex * 4);

            GVAR(valuesIdc) pushBack _valueIdcBase;
            GVAR(valuesIdc) pushBack _valueIdcBase+1;
            GVAR(valuesIdc) pushBack _valueIdcBase+2;

            GVAR(idcToConfig) set [_valueIdcBase, [_optionIndex, _optionName, _valueIndex, _valueName, _kind]];

            private _imagePos = [[_posX * GRID_W, _posY * GRID_H], [60 * GRID_W, (_posY - 5) * GRID_H]] select _singleOption;

            private _imageTileCtrlClass = [QGVAR(valueImage), QGVAR(valueImageCenterSquare)] select (_optionCenterImage > 0);
            private _imageTileCtrl = _display ctrlCreate [_imageTileCtrlClass, _valueIdcBase, _configControl];
            _imageTileCtrl ctrlSetPosition _imagePos;
            _imageTileCtrl ctrlSetText _valueImage;
            _imageTileCtrl ctrlCommit 0;

            private _checkBoxCtrlClass = [QGVAR(valueCheckbox), QGVAR(singleOptionCheckbox)] select _singleOption;
            private _checkBoxCtrl = _display ctrlCreate [_checkBoxCtrlClass, _valueIdcBase + 1, _configControl];
            _checkBoxCtrl ctrlSetPosition _imagePos;
            _checkBoxCtrl ctrlEnable (not _singleOption);
            _checkBoxCtrl ctrlCommit 0;

            private _textCtrlClass = [QGVAR(valueButton), QGVAR(singleOptionText)] select _singleOption;
            private _textCtrl = _display ctrlCreate [_textCtrlClass, _valueIdcBase + 2, _configControl];
            _textCtrl ctrlSetPosition [_posX * GRID_W, _posY * GRID_H];
            _textCtrl ctrlSetText _valueLabel;
            _textCtrl ctrlSetTooltip _valueDesc;
            if (not _singleOption) then {
                _textCtrl ctrlAddEventHandler ["ButtonClick", { [ctrlParent (_this select 0), _this select 0] call FUNC(onValueButton); }];
            };
            _textCtrl ctrlCommit 0;

            _posX = _posX + 19.5;
            if (_posX >= 78) then
            {
                _posX = 1;
                _posY = _posY + 10;
            };
        } forEach _values;

        if (_posX > 2) then {
            _posY = _posY + 10;
        };
        if (_singleOption) then {
            _posY = _posY - 4;
        };
        _posY = _posY + 2;
    } forEach _options;

} forEach ["options", "textureoptions"];

private _adjustedHeight = 140 min (_posY + 10);
_configControl ctrlShow true;
UPDATE_CONTROL(_configControl,_listControl,_adjustedHeight * GRID_H, + _adjustedHeight, + 4 + _adjustedHeight);
