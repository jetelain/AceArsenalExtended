#define COMPONENT arsenal
#include "\z\aceax\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_ARSENAL
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_ARSENAL
    #define DEBUG_SETTINGS DEBUG_SETTINGS_ARSENAL
#endif

#include "\z\aceax\addons\main\script_macros.hpp"

#define INVISIBLE_COLOR 0, 0, 0, 0

#define WEAK_MATCH_BG_COLOR 0.4, 0.4, 0.4, 0.4
#define ACTIVE_BG_COLOR 0.5, 0.5, 0.5, 0.2

#define EXACT_MATCH_TEXT_COLOR 1, 1, 1, 1
#define WEAK_MATCH_TEXT_COLOR 0.9, 0.9, 0.9, 0.9
#define DISABLED_TEXT_COLOR 0.8, 0.8, 0.8, 0.8
