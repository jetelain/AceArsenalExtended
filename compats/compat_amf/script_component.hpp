#define COMPONENT compat_amf
#define SUBPREFIX compats
#include "\z\aceax\addons\main\script_mod.hpp"

// #define AMF_v8

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_COMPAT_AMF
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_ARSENAL
    #define DEBUG_SETTINGS DEBUG_SETTINGS_COMPAT_AMF
#endif

#include "\z\aceax\addons\main\script_macros.hpp"

#ifdef AMF_V8
#define AMFPATCHES(path) QUOTE(\amf_patches\##path)
#else
#define AMFPATCHES(path) QUOTE(\z\aceax\compats\amf_patches\##path)
#endif