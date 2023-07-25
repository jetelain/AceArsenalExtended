class rhs_m93
{
    options[] = { "camo", "pantscamo" };
    label="M93";
    class camo
    {
        values[] = { "ALP", "LIZ_ATS", "DCP", "DPM", "ERDL_L", "FLCK", "M81", "OAK_SAF", "OAK_SAF_SUM", "OG107", "OLI", "TSW", "URB_RD" };
        alwaysSelectable=1;
        class URB_RD
	    {
            label = "Urban Reed";
            image = "z\aceax\compats\RHS\data\camo\urb_reed.paa";
	    };
    };
    class pantscamo
    {
        values[] = { "match", "ERDL_L", "OLI" };
        alwaysSelectable=1;
        class match
	    {
            label = "Matching";
	    };
    };
};
