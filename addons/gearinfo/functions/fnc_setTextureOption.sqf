#include "script_component.hpp"

params ["_unit", "_model", "_textureOption", "_value"];

_unit setVariable [_model + "_" + _textureOption, _value, true];

[_unit, _model, _textureOption, _value] call FUNC(applyTextureOption);