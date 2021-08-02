#include "script_component.hpp"

params ["_unit", "_data", ["_useInsignia", true]];

if (count _data == 10) then {
	_unit setUnitLoadout _data;

} else if (count _data == 11) then {
	_unit setUnitLoadout (_data select [0, 10]);
	[_unit, _data select 10, _useInsignia] call FUNC(setTextureOptions);
};