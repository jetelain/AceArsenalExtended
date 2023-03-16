class rhs_flora
{
    options[] = { "camo", "unit" }; // Always computed, do not edit
    label="Flora";
    class camo
    {
        values[] = { "FLRA", "FLRA_ALT", "FLRA_MTN" }; // Always computed, do not edit
        alwaysSelectable=1;
        
        class FLRA_ALT
        {
            label = "Flora Alt.";
            description = "Flora Alternate";
            image = "z\aceax\compats\RHS\data\camo\flora_alt.paa";
        };
    };
    class unit
    {
        values[] = { "Generic", "MSV", "RVA", "VDV", "VMF", "VMF 2" }; // Always computed, do not edit
        alwaysSelectable=1;
    };
};
