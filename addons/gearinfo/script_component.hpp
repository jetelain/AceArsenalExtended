#define COMPONENT gearinfo
#include "\z\aceax\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_GEARINFO
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_ARSENAL
    #define DEBUG_SETTINGS DEBUG_SETTINGS_GEARINFO
#endif

#include "\z\aceax\addons\main\script_macros.hpp"

#define NATO_FACTION BLU_F; BLU_T_F; BLU_W_F
#define CTRG_FACTION BLU_CTRG_F
#define FIA_FACTION BLU_G_F; OPF_G_F; IND_G_F
#define CSAT_FACTION OPF_F; OPF_T_F; OPF_R_F
#define AAF_FACTION IND_F
#define LDF_FACTION IND_E_F

#define FACTION_OPTION(factionparam,factionfilter) class factionparam \
    { \
        label = CSTRING(factionparam##Faction); \
        description = CSTRING(factionparam##Faction_DESC); \
        image = QPATHTOF(data\faction\##factionparam##.paa); \
        faction = QUOTE(factionfilter); \
    }
