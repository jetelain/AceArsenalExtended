#include "script_component.hpp"
#include "..\defines.hpp"

params ["_control"];

[_control] call ace_arsenal_fnc_sortPanel; // will erase lbSetTextRight of items (will left them to "")

if ((ctrlIDC _control) in [IDC_sortRightTab, IDC_sortRightTabDirection]) exitWith {};

(call FUNC(leftPanelConfig)) params ["", "", "", "_index", "_classRoot"];

if ( _index == -1 ) exitWith {};

private _display = ctrlParent _control;
private _ctrlPanel = _display displayCtrl IDC_leftTabContent;
private _size = lbSize _ctrlPanel;

for "_i" from 0 to (_size -1) do { 
    private _config = _ctrlPanel lbData _i;
	private _model = [_classRoot, _config] call EFUNC(gearinfo,getConfigModel);
	if ( _model != "" ) then {
        // Set our own lbSetTextRight
		_ctrlPanel lbSetTextRight [_i, getText(configFile >> "XtdGearModels" >> _classRoot >> _model >> "label")];
	};
 };
