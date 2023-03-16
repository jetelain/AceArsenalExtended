class rhs_vkpo_cap
{
    options[] = { "camo" };
    label="VKPO Field Cap";
    class camo
    {
        values[] = { "STD", "ALT" };
        alwaysSelectable=1;
        class STD
	    {
            label = "Standard";
            image = "z\aceax\compats\RHS\data\camo\vkpo.paa";
        };

        class ALT
	    {
            label = "Alternate";
            image = "z\aceax\compats\RHS\data\camo\vkpo_alt.paa";
        };
    };
};
