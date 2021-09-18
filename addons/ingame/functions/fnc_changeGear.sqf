
#include "script_component.hpp"

params ["", "", "_params"];
_params params ["_player", "_layout", "_actionLabel", "_config"];


private _callback = {
		params ["_args"];
		_args params ["_player", "_layout", "", "_config", "_giveBack", "_consume"];

		private _insignia = [_player] call BIS_fnc_getUnitInsignia;
		// setUnitLoadout will clear insignia, but BIS_fnc_setUnitInsignia does
		// not known about this and would ignore the next call
		[_player, ""] call BIS_fnc_setUnitInsignia;

		private _loadout = getUnitLoadout _player;

		_layout params ["", "_loadoutIndex", "_loadoutSecondary"];

		if ( _loadoutSecondary == -1 ) then {
			_loadout set [_loadoutIndex, _config];
		} else {
			(_loadout select _loadoutIndex) set [_loadoutSecondary, _config];
		};

		_player setUnitLoadout _loadout;

		[_player] call EFUNC(gearinfo,applyTextureOptions);

		[_player, _insignia] call BIS_fnc_setUnitInsignia;

		if ( currentWeapon _player != "" ) then {
			_player playMoveNow "amovpercmstpslowwrfldnon";
		};

		if ( _consume != "" ) then { 
			_player removeItem _consume;
		};
		if ( _giveBack != "" ) then { 
			_player addItem _giveBack;
		};
	};

	[2, _params, _callback, {}, _actionLabel + "..."] call ace_common_fnc_progressBar;