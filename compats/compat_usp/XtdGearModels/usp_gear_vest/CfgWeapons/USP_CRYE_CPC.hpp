class USP_CRYE_CPC
{
    options[] = { "belt", "camo", "loadout" }; // Always computed, do not edit
    label="Crye CPC";
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
        values[] = { "AOR2", "CBR", "MC", "MCA", "MCB", "MCD", "MCT", "RGR" }; // Always computed, do not edit
    };
    class loadout
    {
        label = "loadout";
        alwaysSelectable = 1;
        values[] = { "base", "comms", "fast", "lead", "light", "medic", "weapon" }; // Always computed, do not edit
    };
};
