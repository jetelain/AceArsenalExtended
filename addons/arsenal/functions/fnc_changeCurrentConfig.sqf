#include "script_component.hpp"
#include "..\defines.hpp"

params ["_display", "_data"];
_data params ["_optionIndex", "_optionName", "_valueIndex", "_valueName", ["_type", ""]];

if ( _type == "textureoptions" ) exitWith {
	[ace_arsenal_center, GVAR(currentModel), _optionName, _valueName] call EFUNC(gearinfo,setTextureOption); 
	[_display] call FUNC(refreshCheckboxes);
};

if ( (GVAR(currentModelOptions) select _optionIndex) != _valueName) then {

	private _options = +GVAR(currentModelOptions);
	_options set [_optionIndex, _valueName];

	private _result = [GVAR(currentConfig), GVAR(currentModel), _options] call EFUNC(gearinfo,findConfig);

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
		ERROR_2("Nothing found for %1 %2", GVAR(currentModel), _options);
	};

};