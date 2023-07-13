#include "script_component.hpp"

params ["_classRoot", "_model", "_options"];

_hiddenOption = (aceax_arsenal_hiddenOptions get _model) getOrDefault [_options,[]];
if(count _hiddenOption != 0) exitWith {_hiddenOption};

private _variations = [_classRoot, _model] call FUNC(getVariations);

_variations getOrDefault [_options, configNull, true]