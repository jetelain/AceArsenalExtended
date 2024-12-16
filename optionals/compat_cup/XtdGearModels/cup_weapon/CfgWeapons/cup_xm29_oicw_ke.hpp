class cup_xm29_oicw_ke
{
	options[] = { "camo", "optic" };
	label = "XM29 OICW KE";
	class camo
	{
		values[] = { "CUP_OICW_BLK", "CUP_OICW_TAN", "CUP_OICW_OLI", "CTRG_ARID", "CTRG_TROP", "CTRG_URB", "CUP_OICW_ARID", "CUP_OICW_LUSH", "CUP_OICW_SNWTIG", "CUP_OICW_TIG", "CUP_OICW_SPLNT", "HEX", "GHEX", "UHEX", "CUP_OICW_WNTR", "CUP_OICW_WDL" };
		alwaysSelectable=1;
	};
	class optic : cup_attachsys
    {
        values[] = { "carryhandle", "picatinny" };
		label = CSTRING(Optic);
        alwaysSelectable=1;
    };
};
