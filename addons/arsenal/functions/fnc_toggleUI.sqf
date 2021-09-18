#include "script_component.hpp"
params ["_show"];
private _display = findDisplay 1127001;
private _configControl = _display displayCtrl 9990000;
_configControl ctrlShow _show;
_configControl ctrlCommit 0;