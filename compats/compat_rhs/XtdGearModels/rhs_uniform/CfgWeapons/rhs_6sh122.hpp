class rhs_6sh122
{
    options[] = { "camo", "gloves" }; // Always computed, do not edit
    label="6Sh122";
    class camo
    {
        values[] = { "Fall", "Spring" }; // Always computed, do not edit
        alwaysSelectable=1;

        class Fall
	    {
            label = "Fall";
            image = "z\aceax\compats\RHS\data\camo\6sh122_fall.paa";
        };

        class Spring
	    {
            label = "Spring";
            image = "z\aceax\compats\RHS\data\camo\6sh122_spring.paa";
        };
        
    };
    class gloves
    {
        values[] = { "No", "Yes" }; // Always computed, do not edit
        alwaysSelectable=1;
    };
};
