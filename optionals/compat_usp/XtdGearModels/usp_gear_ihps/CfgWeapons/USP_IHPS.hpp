class USP_IHPS
{
    options[] = { "camo", "comms", "cover", "flag", "mandible", "visor", "armor" }; // Always computed, do not edit
    label = "[USP] IHPS";
    class armor
    {
        label = "Armor";
        alwaysSelectable = 1;
        values[] = { "none", "yes" }; // Always computed, do not edit
    };
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "BLK", "GRN", "GRY", "TAN" }; // Always computed, do not edit
    };
    class comms
    {
        label = "Communication";
        alwaysSelectable = 1;
        values[] = { "none", "CT3" }; // Always computed, do not edit
    };
    class cover
    {
        label = "Cover";
        alwaysSelectable = 1;
        values[] = { "none", "BLK", "GRN", "GRY", "MC", "MCA", "OCP", "TAN" }; // Always computed, do not edit
    };
    class flag
    {
        label = "Flag";
        alwaysSelectable = 1;
        values[] = { "none", "USA" }; // Always computed, do not edit
    };
    class mandible
    {
        label = "Mandible";
        alwaysSelectable = 1;
        values[] = { "none", "yes" }; // Always computed, do not edit
    };
    class visor
    {
        label = "Visor";
        alwaysSelectable = 1;
        values[] = { "none", "yes" }; // Always computed, do not edit
    };
};
