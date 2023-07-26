class acebi_ghillie_full
{
    options[] = { "faction", "camo" }; // Always computed, do not acebi
    label="Full Ghillie";
    class faction
    {
        values[] = { "AAF", "CSAT", "NATO" }; // Always computed, do not acebi
        alwaysSelectable=1;
    };
    class camo
    {
        values[] = { "Arid", "Jungle", "Lush", "Semi-Arid" }; // Always computed, do not acebi
        alwaysSelectable=0;
    };
};
