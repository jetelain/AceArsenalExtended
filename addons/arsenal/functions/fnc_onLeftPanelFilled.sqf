#include "script_component.hpp"
#include "..\defines.hpp"

params ["_display"];

(call FUNC(leftPanelConfig)) params ["_index", "_classRoot"];

if ( _index == -1 ) exitWith { };

private _ctrlPanel = _display displayCtrl IDC_leftTabContent;
private _selectedConfig = ace_arsenal_currentItems select _index;
private _selectedModel = [configFile >> _classRoot >> _selectedConfig >> "XtdGearInfo", "model", ""] call BIS_fnc_returnConfigEntry;

private _size = lbSize _ctrlPanel;
private _i = 0;
private _done = createHashMap;

_done set [_selectedModel, true];

while{_i < _size} do 
{ 
    private _data = _ctrlPanel lbData _i;
	private _model = [configFile >> _classRoot >> _data >> "XtdGearInfo", "model", ""] call BIS_fnc_returnConfigEntry;
	if ( _model != "" ) then {
		if ( !(_model in _done) || _data == _selectedConfig ) then {
			_done set [_model, true];
			_ctrlPanel lbSetTextRight [_i, getText(configFile >> "XtdGearModels" >> _classRoot >> _model >> "label")];
			_i = _i + 1;
		} else {
			_ctrlPanel lbDelete _i;
			_size = _size - 1;
		};
	} else {
		_i = _i + 1;
	};
};
