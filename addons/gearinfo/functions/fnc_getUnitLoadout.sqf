#include "script_component.hpp"

params ["_unit", ["_useInsignia", true]];

private _data = getUnitLoadout _unit;

_data pushBack ([_unit, _useInsignia] call FUNC(getTextureOptions));

_data