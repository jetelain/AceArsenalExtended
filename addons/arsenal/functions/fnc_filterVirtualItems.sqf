#include "script_component.hpp"

GVAR(initialVirtualItems) = ace_arsenal_virtualItems;

GVAR(filteredVirtualItems) = 
[
	[[],[],[]], // WEAPONS [PrimaryWeapon, SecondaryWeapon, Handgun]
	(GVAR(initialVirtualItems) select 1),  // ATTACHEMENTS
	(GVAR(initialVirtualItems) select 2),  // ITEMS_ALL
	[], // HEADGEAR 
	[], // UNIFORM
	[], // VEST
	[], // BACKPACK
	[], // GOGGLES
	[], // NVG
	[] // BINOCULARS
];

GVAR(filteredVirtualItems) append (GVAR(initialVirtualItems) select [10, count GVAR(initialVirtualItems) - 10]);

EGVAR(gearinfo,currentId) = hashValue GVAR(initialVirtualItems);

{
	_x params ["", "_virt", "_virtSub", "_cur", "_classRoot", "_label"];
	
	private _source = GVAR(initialVirtualItems) select _virt;
	private _target = GVAR(filteredVirtualItems) select _virt;
	if ( _virtSub != -1 ) then {
		_source = _source select _virtSub;
		_target = _target select _virtSub;
	};
	private _currentConfig = ace_arsenal_currentItems select _cur;
	private _currentModel = [_classRoot, _currentConfig] call EFUNC(gearinfo,getConfigModel);

	private _done = createHashMap;

	{
		private _config = _x;

		private _model = [_classRoot, _config] call EFUNC(gearinfo,getConfigModel);
		[_classRoot, _model, _config] call EFUNC(gearinfo,cacheVirtualItems);
		if ( _model != "" ) then {
			if ( !(_model in _done) ) then {
				_done set [_model, true];
				if ( _currentModel == _model ) then {
					_target pushBack _currentConfig;
				} else {
					_target pushBack _config;
				};
			};
		} else {
			_target pushBack _config;
		};

	} forEach _source;

	INFO_3("%1: %2 => %3", _label, count _source, count _target);

} forEach GVAR(meta);
