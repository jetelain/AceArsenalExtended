class rhs_vkpo
{
    options[] = { "camo", "gloves" }; // Always computed, do not edit
    label="VKPO";
    class camo
    {
        values[] = { "STD", "ALT" }; // Always computed, do not edit
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
    class gloves
    {
        label = "Gloves";
        values[] = { "No", "Yes" }; // Always computed, do not edit
        alwaysSelectable=1;
    };
};
