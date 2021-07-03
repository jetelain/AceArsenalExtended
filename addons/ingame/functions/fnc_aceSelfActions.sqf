#include "script_component.hpp"

params ["_target"];

private _actions = [];
private _player = ACE_player;
private _loadout = getUnitLoadout _player;

{
    private _layout = _x;

    _x params ["_classRoot", "_loadoutIndex", "_loadoutSecondary"];
    private _config = _loadout select _loadoutIndex;
    if ( _loadoutSecondary != -1 ) then {
        if ( _loadoutSecondary < count _config ) then {
            _config = _config select _loadoutSecondary;
        } else {
            _config = "";
        };
    };

    if ( _config != "" ) then {
        private _model = [_classRoot, _config] call EFUNC(gearinfo,getConfigModel);
        if ( _model != "" ) then {

            private _options = [_classRoot, _model] call EFUNC(gearinfo,getModelOptions);
            private _optionsValues = [_classRoot, _config, _model] call EFUNC(gearinfo,getConfigOptions);

            {
                _x params ["_optionName", "_optionLabel", "_optionIcon", "_optionInGame", "_values"];

                private _optionIndex = _foreachIndex;

                if ( _optionInGame > 0 ) then {

                    private _optionValue = _optionsValues select _optionIndex;
                    private _optionActions = [];
                    private _itemBack = "";
                    {
                        private _valueIndex = _foreachIndex;
                        _x params ["_valueName", "", "", "_valueIcon", "", "_valueAction", "_valueInGame", "_itemInGame"];
                    
                        if ( _valueInGame > 0 ) then {

                            if ( _valueName != _optionValue ) then {
                                private _previewOptions = +_optionsValues;
                                _previewOptions set [_optionIndex, _valueName];
                                private _previewConfig = [_classRoot, _model, _previewOptions] call EFUNC(gearinfo,findConfigName);
                                if ( _previewConfig != "") then {
                                    _optionActions pushBack [_valueAction, _valueIcon, _previewConfig, _itemInGame];
                                };
                            } else {
                                _itemBack = _itemInGame;
                            };

                        };
                    } forEach _values;

                    private _actionParams = [_player, _layout, _optionIndex, _optionActions, _itemBack];

                    switch (count _optionActions) do {
                        case 0 :   { /* Nothing */ };
                        case 1 :   { 
                            _actions pushBack (( [_target, "", _actionParams] call FUNC(generateActions) ) select 0);
                        };
                        default { 
                            _actions pushBack [[
                                    format ["gear_%1_%2", (_layout select 1), _optionIndex],
                                    _optionLabel,
                                    _optionIcon,
                                    {},
                                    {true},
                                    FUNC(generateActions),
                                    _actionParams
                                ] call ace_interact_menu_fnc_createAction, [], _target];
                            
                        };
                    };
                };

            } forEach _options;
        };
    };
} foreach GVAR(layout);



_actions