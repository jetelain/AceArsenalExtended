class rhs_m97
{
    options[] = { "camo", "goggles", "veil" }; // Always computed, do not edit
    label="M97";
    class camo
    {
        values[] = { "BLK", "UN", "MDU02", "MDU10", "OAK_SAF", "OLI", "M81" }; // Always computed, do not edit
        alwaysSelectable=1;
    };
    class goggles
    {
        label = "Goggles";
        values[] = { "None", "Covered", "Uncovered" }; // Always computed, do not edit
        alwaysSelectable=1;
    };
    class veil
    {
        label = "Veil";
        values[] = { "No", "Yes"}; // Always computed, do not edit
        alwaysSelectable=1;
    };
};
