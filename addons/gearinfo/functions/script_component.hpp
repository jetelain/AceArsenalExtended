#include "\z\aceax\addons\gearinfo\script_component.hpp"

#define CLASS_FILTER(_x) ((getNumber (_x >> 'scope')) == 2) && (count (_x >> 'linkeditems') == 0)  && ( ! isNumber (_x >> 'scopeArsenal') || getNumber (_x >> 'scopeArsenal') == 2 )
