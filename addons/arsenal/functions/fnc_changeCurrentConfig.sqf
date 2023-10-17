#include "script_component.hpp"
#include "..\defines.hpp"

params ["_display", "_data"];
_data params ["_optionIndex", "_optionName", "_valueIndex", "_valueName", ["_type", ""]];

if ( _type == "textureoptions" ) exitWith {
	[ace_arsenal_center, GVAR(currentModel), _optionName, _valueName] call EFUNC(gearinfo,setTextureOption); 
	[_display] call FUNC(refreshCheckboxes);
};

if ((GVAR(currentModelOptions) select _optionIndex) == _valueName) exitWith {};

private _options = +GVAR(currentModelOptions);
_options set [_optionIndex, _valueName];

private _match = [GVAR(currentConfig), GVAR(currentModel), _options] call EFUNC(gearinfo,findConfig);

if (isNull _match) then {
    _match = [GVAR(currentConfig), GVAR(currentModel), _optionIndex, _valueName] call EFUNC(gearinfo,findConfigByValue);
};

if (isNull _match) exitWith {
    ERROR_2("Nothing found for %1 %2", GVAR(currentModel), _options);
};

private _ctrlPanel = _display displayCtrl IDC_leftTabContent;
private _i = lbCurSel _ctrlPanel;

if ( _i == -1 ) exitWith {
    ERROR("No selected value ?!?");
};

// Update filtered VirtualItems
private _previous = _ctrlPanel lbData _i;
private _newValue = configName _match;
(call FUNC(leftPanelConfig)) params ["", "_virt", "_virtSub"];
private _virtItems = GVAR(filteredVirtualItems) get _virt;
if ( _virtSub != -1 ) then {
    _virtItems = _virtItems get _virtSub;
};
_virtItems deleteAt _previous;
_virtItems set [_newValue, nil];

// Change and propagate selected value
_ctrlPanel lbSetData [_i, _newValue];
_ctrlPanel lbSetText [_i, getText (_match >> "displayName")];
[_ctrlPanel, _i] call FUNC(onSelChangedLeft);
