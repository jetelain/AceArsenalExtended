#include "script_component.hpp"

private _metaIdx = GVAR(meta) findIf { _x select 0 == ace_arsenal_currentLeftPanel };

if ( _metaIdx != -1 ) then {
  GVAR(meta) select _metaIdx
}
else {
  [-1, -1, -1, -1, "", "Unknown"]
}
