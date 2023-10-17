#include "script_component.hpp"

GVAR(initialVirtualItems) = ace_arsenal_virtualItems;

GVAR(filteredVirtualItems) = createHashMap;
{
	GVAR(filteredVirtualItems) set [_x, GVAR(initialVirtualItems) get _x];
} forEach GVAR(unsupported);

GVAR(itemsPerModel) = +GVAR(itemsPerModelHidden);

{
	_x params ["", "_virt", "_virtSub", "_cur", "_classRoot", "_label"];
	
	private _source = GVAR(initialVirtualItems) get _virt;
	private _target = GVAR(filteredVirtualItems) getOrDefault [_virt, createHashMap, true];
	if ( _virtSub != -1 ) then {
		_source = _source get _virtSub;
		_target = _target getOrDefault [_virtSub, createHashMap, true];
	};
	private _currentConfig = ace_arsenal_currentItems select _cur;
	private _currentModel = [_classRoot, _currentConfig] call EFUNC(gearinfo,getConfigModel);

	private _itemsPerModel = GVAR(itemsPerModel) select (["CfgWeapons","CfgVehicles","CfgGlasses"] find _classRoot);
	private _done = createHashMap;

	{
		private _config = _x;

		private _model = [_classRoot, _config] call EFUNC(gearinfo,getConfigModel);
		if ( _model != "" ) then {
			if ( !(_model in _done) ) then {
				_done set [_model, true];
				if ( _currentModel == _model ) then {
					_target set [_currentConfig, nil];
				} else {
					_target set [_config, nil];
				};
			};
			(_itemsPerModel getOrDefault [_model, [], true]) pushBack _config;
		} else {
			_target set [_config, nil];
		};

	} forEach _source;

} forEach GVAR(meta);
