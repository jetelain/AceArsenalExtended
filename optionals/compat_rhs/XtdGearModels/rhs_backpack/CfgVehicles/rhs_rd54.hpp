class rhs_rd54
{
    options[] = { "camo", "vestfit" };
    label="RD-54";
    class camo
    {
        values[] = { "AFGKA", "EMR_SUM", "FLRA", "FLRA_2" };
        alwaysSelectable=1;
        class FLRA_2
	    {
            label = "Flora 2";
            image = "z\aceax\compats\RHS\data\camo\flora_rd54.paa";
	    };
    };
    class vestfit
    {
        label = "Fitted for Vest";
        values[] = { "No", "Yes" };
        alwaysSelectable=1;
    };
};
