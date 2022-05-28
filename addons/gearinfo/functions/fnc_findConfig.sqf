#include "script_component.hpp"

params ["_classRoot", "_model", "_options"];

private _variations = [_classRoot, _model] call FUNC(getVariations);

_variations getOrDefault [_options, configNull, true]
