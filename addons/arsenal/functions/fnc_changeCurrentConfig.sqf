#include "script_component.hpp"
#include "..\defines.hpp"

params ["_display", "_data"];
_data params ["_configIndex", "_configName", "_valueIndex", "_valueName"];

if ( (GVAR(currentMasterConfig) select _configIndex) != _valueName) then {

	private _newconfig = +GVAR(currentMasterConfig);
	_newconfig set [_configIndex, _valueName];

	private _result = [GVAR(currentConfig), GVAR(currentMaster), _newconfig] call EFUNC(gearinfo,findModel);

	if (!isNull _result) then{
		private _ctrlPanel = _display displayCtrl IDC_leftTabContent;
		private _index = lbCurSel _ctrlPanel;
		if ( _index != -1 ) then {
			_ctrlPanel lbSetData [_index, configName _result];
			_ctrlPanel lbSetText [_index, getText (_result >> "displayName")];
			[_ctrlPanel, _index] call FUNC(onSelChangedLeft);
		} else {
			ERROR("No selected value ?!?");
		};
	} else {
		ERROR_2("Nothing found for %1 %2", GVAR(currentMaster), _newconfig);
	};

};