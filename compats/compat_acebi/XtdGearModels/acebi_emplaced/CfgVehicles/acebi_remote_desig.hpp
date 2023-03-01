class acebi_remote_desig
{
    options[] = { "faction", "camo" }; // Always computed, do not acebi
    label="Remote Designator";
    class faction
    {
        values[] = { "CSAT", "NATO" }; // Always computed, do not acebi
        alwaysSelectable=1;
    };
    class camo
    {
        values[] = { "HEX", "MTP", "M81" }; // Always computed, do not acebi
        alwaysSelectable=0;
    };
};
