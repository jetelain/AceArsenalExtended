#include "script_component.hpp"

(_this select 1) params ["", "_exitCode"];

private _textureOptions = [];

if (is3DEN) then {
	_textureOptions = [ace_arsenal_center, false] call EFUNC(gearinfo,getTextureOptions);
};

_this call ace_arsenal_fnc_onArsenalClose;

if(is3DEN && _exitCode == 1) then {
    INFO_1("Save to 3DEN, textureOptions=%1",_textureOptions);
    if (_textureOptions isNotEqualTo []) then {
      GVAR(edenEntity) set3DENAttribute [QGVARMAIN(textureOptions), format["%1",_textureOptions]];
    } else {
      GVAR(edenEntity) clear3DENAttribute QGVARMAIN(textureOptions);
    };
	[GVAR(edenEntity), _textureOptions, false] call EFUNC(gearinfo,setTextureOptions); 
};