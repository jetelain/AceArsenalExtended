#include "script_component.hpp"
#include "..\defines.hpp"

params ["_control", "_curSel"];

[_control, _curSel] call ace_arsenal_fnc_onSelChangedLeft;

(call FUNC(leftPanelConfig)) params ["_index", "_classRoot"];

private _display = ctrlParent _control;

if ( _index == -1 ) exitWith {
	if ( GVAR(currentModel) != "" ) then {
		[_display, "", ""] call FUNC(generateOptionsUI);
		GVAR(currentModel) = "";
		GVAR(currentConfig) = "";
	};
};

private _selectedConfig = ace_arsenal_currentItems select _index;
private _selectedModel = "";
if ( _selectedConfig != "" ) then {
	_selectedModel = [_classRoot, _selectedConfig] call EFUNC(gearinfo,getConfigModel);
};

if ( _selectedModel != GVAR(currentModel) ) then {
	[_display, _classRoot, _selectedModel] call FUNC(generateOptionsUI);
	GVAR(currentModel) = _selectedModel;
	GVAR(currentConfig) = _classRoot;
};

if ( _selectedModel != "" ) then {
	GVAR(currentModelOptions) = [_classRoot, _selectedConfig, _selectedModel] call EFUNC(gearinfo,getConfigOptions);
	[_display] call FUNC(refreshCheckboxes);

	[ace_arsenal_center] call EFUNC(gearinfo,applyTextureOptions); 
};