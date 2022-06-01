#define CLASS_FILTER(_x) ((getNumber (_x >> 'scope')) == 2)  && ( ! isNumber (_x >> 'scopeArsenal') || getNumber (_x >> 'scopeArsenal') == 2 )

#define NATO_FACTION "BLU_F", "BLU_T_F", "BLU_W_F"
#define CTRG_FACTION "BLU_CTRG_F"
#define NATO_CTRG_COMBINED NATO_FACTION, CTRG_FACTION
#define FIA_FACTION "BLU_G_F", "OPF_G_F", "IND_G_F"
#define CSAT_FACTION "OPF_F", "OPF_T_F", "OPF_R_F"
#define AAF_FACTION "IND_F"
#define LDF_FACTION "IND_E_F"

#define FACTION_OPTION(factionparam,factionfilter) class factionparam \
{ \
    label = CSTRING(factionparam##Faction); \
    description = CSTRING(factionparam##Faction_DESC); \
    image = QPATHTOF(data\faction\##factionparam##.paa); \
    faction[] = {factionfilter}; \
}

#define READ_NUMBER READ_TYPE(Number)
#define READ_TEXT READ_TYPE(Text)
#define READ_ARRAY READ_TYPE(Array)

#define READ_TYPE(ptype) { \
	params ["_paths", "_name", "_default"]; \
	private _result = _default; \
	{ \
	    private _attPath = _x >> _name; \
        if ( is##ptype _attPath ) exitWith { _result = get##ptype _attPath; }; \
	} forEach _paths; \
	_result \
}
