#include "script_component.hpp"

params ["_display"];

private _model = GVAR(currentModel);
private _config = GVAR(currentConfig);

if ( _model == "" ) exitWith {};

private _modelDefition = configFile >> "XtdGearModels" >> _config >> _model;
private _options = [_config, _model, _modelDefinition, "options"] call EFUNC(gearinfo,getModelOptions);
{
    private _optionIndex = _foreachIndex;
    _x params  ["_optionName", "", "", "", "_values", "", "_alwaysSelectable"];
    private _currentValue = GVAR(currentModelOptions) select _optionIndex;

    {
        private _valueIndex = _foreachIndex;
        _x params ["_valueName"];

        private _valueIdcBase = 9900000 + (_optionIndex * 1000) + (_valueIndex * 4);

        private _previewOptions = +GVAR(currentModelOptions);
        _previewOptions set [_optionIndex, _valueName];

        private _ctrl = _display displayCtrl (_valueIdcBase + 1);
        private _button = _display displayCtrl (_valueIdcBase + 2);

        private _exactMatch = not isNull ([_config, _model, _previewOptions] call EFUNC(gearinfo,findConfig));

        // If always selectable is enabled, only grey out the button as long as there is a weak config match (i.e. a superset of perfect) available
        private _enabled = if (not _alwaysSelectable) then { _exactMatch } else {
            if (_exactMatch) then { true } else {
                not isNull ([_config, _model, _optionIndex, _valueName] call EFUNC(gearinfo,findConfigByValue))
            }
        };

        if (_alwaysSelectable) then {
            private _bgColor = [[WEAK_MATCH_BG_COLOR], [INVISIBLE_COLOR]] select _exactMatch;
            _button ctrlSetBackgroundColor _bgColor;
        };

        private _textColor = [[WEAK_MATCH_TEXT_COLOR], [EXACT_MATCH_TEXT_COLOR]] select _exactMatch;
        _button ctrlSetTextColor _textColor;
        _button ctrlEnable _enabled;
        _button ctrlCommit 0.1;

        _ctrl cbSetChecked (_valueName == _currentValue);
        _ctrl ctrlEnable _enabled;
        _ctrl ctrlCommit 0;

    } forEach _values;

} forEach _options;

private _textureoptions = [_config, _model, _modelDefinition, "textureoptions"] call EFUNC(gearinfo,getModelOptions);
{
    private _optionIndex = _foreachIndex;
    _x params  ["_optionName", "", "", "", "_values", "", "", "_requires", "_isTextTexture"];
    private _currentValue = [ace_arsenal_center, _model, _optionName] call EFUNC(gearinfo,getTextureOption);
    private _enabled = true;

    {
        _x params ["_reqIdx","_reqValue"];
        _enabled = _enabled && ((GVAR(currentModelOptions) select _reqIdx) == _reqValue);
    } forEach _requires;

    if ( _isTextTexture ) then {
        private _textIdc = 9940000 + (_optionIndex * 1000);
        private _ctrl = _display displayCtrl _textIdc;
        _ctrl ctrlSetText _currentValue;
    } else {
        {
            private _valueIndex = _foreachIndex;
            _x params ["_valueName"];
            private _valueIdcBase = 9940000 + (_optionIndex * 1000) + (_valueIndex * 4);
            private _ctrl = _display displayCtrl (_valueIdcBase + 1);
            _ctrl cbSetChecked (_valueName == _currentValue);
            _ctrl ctrlEnable _enabled;
            _ctrl ctrlCommit 0;
        } forEach _values;
    };

} forEach _textureoptions;
