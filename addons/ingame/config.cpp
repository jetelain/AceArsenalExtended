#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"aceax_main", "aceax_gearinfo"};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class GVAR(gear) {
                displayName = CSTRING(Gear);
                condition = QUOTE(true);
                icon = QPATHTOF(data\gear.paa);
                exceptions[] = {"isNotInside", "isNotSitting"};
                statement = "";
                insertChildren = QUOTE(_this call FUNC(aceSelfActions));
                priority = 0.1;
            };
        };
    };
};