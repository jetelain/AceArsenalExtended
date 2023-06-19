#include "script_component.hpp"

GVAR(itemsPerModelHidden) = [createHashMap,createHashMap,createHashMap];
GVAR(hiddenOptions) = createHashMap;

{
    private _classRoot = _x;
    {
        private _config = _x;

        private _itemsPerModel = GVAR(itemsPerModelHidden) select (["CfgWeapons","CfgVehicles","CfgGlasses"] find _classRoot);

        private _model = getText (_config >> "XtdGearInfo" >> "model");
        if ( _model != "" ) then {
            private _configName = (configName _config);
            (_itemsPerModel getOrDefault [_model, [], true]) pushBackUnique _configName;
            _modelOptions = getArray(configFile >> "XtdGearModels" >>_classRoot >> _model >> "options");
            _options = [];
            {
                _options pushBack getText(_config >> "XtdGearInfo" >> _x);
            } forEach _modelOptions;
            _hiddenOptions = GVAR(hiddenOptions) getOrDefault [_model,createHashMap,true];
            _hiddenOptions set [_options,_config];
        };
    } forEach ("getNumber (_x >> 'scopeHiddenArsenal') >= 1" configClasses (configFile >> _classRoot));
} forEach ["CfgWeapons","CfgVehicles","CfgGlasses"];