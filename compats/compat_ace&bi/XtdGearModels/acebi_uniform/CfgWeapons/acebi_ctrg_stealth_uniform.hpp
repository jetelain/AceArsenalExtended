class acebi_ctrg_stealth_uniform
{
    options[] = { "camo", "top", "sleeves" };
    label="CTRG Stlh. Unif.";
    class camo
    {
        values[] = { "CTRG_ARID", "CTRG_TROP" };
        alwaysSelectable=1;
    };
    class top
    {
        label = "Top";
        values[] = { "Standard", "Tee" };
        alwaysSelectable=1;
    };
    class sleeves
    {
        values[] = { "Full", "Half" };
        alwaysSelectable=0;
    };
};
