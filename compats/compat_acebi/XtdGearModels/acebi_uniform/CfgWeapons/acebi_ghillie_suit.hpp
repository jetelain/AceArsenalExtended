class acebi_ghillie_suit
{
    options[] = { "faction", "camo" }; // Always computed, do not acebi
    label="Ghillie Suit";
    class faction
    {
        values[] = { "AAF", "CSAT", "NATO" }; // Always computed, do not acebi
        alwaysSelectable=1;
    };
    class camo
    {
        values[] = { "AAF", "HEX", "GHEX", "MTP", "Tropic" }; // Always computed, do not acebi
        alwaysSelectable=0;
    };
};
