class USP_CRYE_JPC
{
    options[] = { "belt", "camo", "loadout" }; // Always computed, do not edit
    label="Crye JPC";
    author="UnderSiege Productions";
    class belt
    {
        label = "belt";
        alwaysSelectable = 1;
        values[] = { "no", "yes" }; // Always computed, do not edit
    };
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "CBR", "KHK", "MC", "RGR" }; // Always computed, do not edit
    };
    class loadout
    {
        label = "loadout";
        alwaysSelectable = 1;
        values[] = { "ASLT", "DM", "FS", "GR", "MG", "none", "TL" }; // Always computed, do not edit
    };
};
