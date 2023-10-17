#include "script_component.hpp"
#include "..\defines.hpp"

params ["_display"];

(call FUNC(leftPanelConfig)) params ["", "_virt", "_virtSub", "_index", "_classRoot"];

if ( _index == -1 ) exitWith { };

private _selectedConfig = ace_arsenal_currentItems select _index;
private _selectedModel = [_classRoot, _selectedConfig] call EFUNC(gearinfo,getConfigModel);


private _ctrlPanel = _display displayCtrl IDC_leftTabContent;
private _size = lbSize _ctrlPanel;

for "_i" from 0 to (_size -1) do { 
    private _config = _ctrlPanel lbData _i;
	private _model = [_classRoot, _config] call EFUNC(gearinfo,getConfigModel);
	if ( _model != "" ) then {
		_ctrlPanel lbSetTextRight [_i, getText(configFile >> "XtdGearModels" >> _classRoot >> _model >> "label")];

		if ( _selectedModel == _model && _config != _selectedConfig) then {
			// Current value must match this list item, but it is out-of-sync
			// Update the list and the filtered virtual items
			private _virtItems = GVAR(filteredVirtualItems) get _virt;
			if ( _virtSub != -1 ) then {
				_virtItems = _virtItems get _virtSub;
			};
			_virtItems deleteAt _config;
			_virtItems set [_selectedConfig, nil];
			_ctrlPanel lbSetData [_i, _selectedConfig];
			_ctrlPanel lbSetText [_i, getText (configFile >> _classRoot >> _selectedConfig >> "displayName")];
		};

	};
 };
