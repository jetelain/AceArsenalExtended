#include "script_component.hpp"

params ["_target","","_params"];
_params params ["_player", "_layout", "_optionIndex", "_optionActions"];

INFO_3("Generate actions: %1, %2, %3", _layout, _optionIndex, _optionActions);

private _actions = [];

{
	_actions pushBack [[
			format ["gear_%1_%2", (_layout select 1), _optionIndex],
			_x select 0,
			"",
			FUNC(changeGear),
			{true},
			{},
			[_player, _layout, _x select 0, _x select 1]
		] call ace_interact_menu_fnc_createAction, [], _target];
	
} forEach _optionActions;

_actions