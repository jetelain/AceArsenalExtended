#include "script_component.hpp"

params ["_target"];

private _actions = [];
private _player = ACE_player;
private _loadout = getUnitLoadout _player;

    INFO_1("%1", _loadout);

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

    INFO_3("%1 %2 => '%3'", _loadoutIndex, _loadoutSecondary,  _config);

    if ( _config != "" ) then {
        private _model = [_classRoot, _config] call EFUNC(gearinfo,getConfigModel);
        if ( _model != "" ) then {

            private _modelDefinition = configFile >> "XtdGearModels" >> _classRoot >> _model;
	        private _optionsNames = getArray ( _modelDefinition >> "options" );
            private _optionsValues = [_classRoot, _config, _model, _optionsNames] call EFUNC(gearinfo,getConfigOptions);

            INFO_3("%1 %2 => %3", _model, _optionsNames,  _optionsValues);

            {
                private _optionName = _x;
		        private _optionIndex = _foreachIndex;
		        private _optionDefition = _modelDefinition >> _optionName;

                INFO_1("%1", _optionName);


                if ( getNumber (_optionDefition >> "changeingame") > 0 ) then { // TODO : conventional naming

		            private _optionValues = getArray (_optionDefition >> "values");
                    private _optionLabel = getText (_optionDefition >> "label"); // TODO : conventional naming
                    private _optionValue = _optionsValues select _optionIndex;
                    private _optionActions = [];
                    
                    {
                        private _valueName = _x;
                        private _valueIndex = _foreachIndex;
                        private _valueConfig = _optionDefition >> _valueName;
                        
                        if ( ([_valueConfig, "changeingame", 1] call BIS_fnc_returnConfigEntry) > 0 ) then { // TODO: Add conventional naming support

                            if ( _valueName != _optionValue ) then {
                                private _previewOptions = +_optionsValues;
                                _previewOptions set [_optionIndex, _valueName];
                                private _previewConfig = [_classRoot, _model, _previewOptions] call EFUNC(gearinfo,findConfigName);

                                if ( _previewConfig != "") then {
                                    // TODO: Add conventional naming support
                                    private _actionLabel =  [_valueConfig, "actionlabel", 
                                       format ["%1 %2", _optionLabel, [_valueConfig, "label", _valueName] call BIS_fnc_returnConfigEntry]
                                    ] call BIS_fnc_returnConfigEntry;

                                    _optionActions pushBack [_actionLabel , _previewConfig];
                                };
                            };

                        };
                    } forEach _optionValues;

                    private _actionParams = [_player, _layout, _optionIndex, _optionActions];

                INFO_1("%1", _optionActions);


                    switch (count _optionActions) do {
                        case 0 :   { /* Nothing */ };
                        case 1 :   { 
                            private _data = _optionActions select 0;
                            _actions pushBack (( [_target, "", _actionParams] call FUNC(generateActions) ) select 0);
                        };
                        default { 
                            _actions pushBack [[
                                    format ["gear_%1", (_layout select 1)],
                                    getText (_optionDefition >> "label"),
                                    getText (_optionDefition >> "icon"),
                                    {},
                                    {true},
                                    FUNC(generateActions),
                                    _actionParams
                                ] call ace_interact_menu_fnc_createAction, [], _target];
                            
                        };
                    };
                };

            } forEach _optionsNames;
        };
    };
} foreach GVAR(layout);



_actions