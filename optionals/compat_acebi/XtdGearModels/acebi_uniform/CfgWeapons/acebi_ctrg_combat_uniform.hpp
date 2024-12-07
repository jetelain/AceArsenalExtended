class acebi_ctrg_combat_uniform
{
    options[] = { "camo", "top", "sleeves" };
    label="CTRG Cmb. Unif.";
    class camo
    {
        values[] = { "CTRG_ARID", "CTRG_URB" };
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
