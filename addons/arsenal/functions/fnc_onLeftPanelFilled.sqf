#include "script_component.hpp"
#include "..\defines.hpp"

params ["_display"];

(call FUNC(leftPanelConfig)) params ["_index", "_config"];

if ( _index == -1 ) exitWith { };

private _ctrlPanel = _display displayCtrl IDC_leftTabContent;
private _value = ace_arsenal_currentItems select _index;
private _valueMaster = [configFile >> _config >> _value >> "XtdGearInfo", "master", ""] call BIS_fnc_returnConfigEntry;

private _size = lbSize _ctrlPanel;
private _i = 0;
private _done = createHashMap;

_done set [_valueMaster, true];

while{_i < _size} do 
{ 
    private _data = _ctrlPanel lbData _i;
	private _master = [configFile >> _config >> _data >> "XtdGearInfo", "master", ""] call BIS_fnc_returnConfigEntry;
	if ( _master != "" ) then {
		if ( !(_master in _done) || _data == _value ) then {
			_done set [_master, true];
			_ctrlPanel lbSetTextRight [_i, getText(configFile >> "XtdGearMasters" >> _config >> _master >> "label")];
			_i = _i + 1;
		} else {
			_ctrlPanel lbDelete _i;
			_size = _size - 1;
		};
	} else {
		_i = _i + 1;
	};
};
