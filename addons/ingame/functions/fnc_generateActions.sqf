#include "script_component.hpp"

params ["_target","","_params"];
_params params ["_player", "_layout", "_optionIndex", "_optionActions", "_itemBack"];

private _actions = [];

{
	private _itemInGame = _x select 3;

	if ( _itemInGame == "" || _itemInGame == _itemBack || { _itemInGame in (items _player) }) then {

		private _giveBack = if ( _itemBack == _itemInGame ) then { "" } else { _itemBack; };
		private _consume  = if ( _itemBack == _itemInGame ) then { "" } else { _itemInGame; };

		_actions pushBack [[
				format ["gear_%1_%2_%3", (_layout select 1), _optionIndex, _foreachIndex],
				_x select 0,
				_x select 1,
				FUNC(changeGear),
				{true},
				{},
				[_player, _layout, _x select 0, _x select 2, _giveBack, _consume, _x select 4]
			] call ace_interact_menu_fnc_createAction, [], _target];
	};
} forEach _optionActions;

_actions