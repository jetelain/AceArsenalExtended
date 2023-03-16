class rhs_svdm
{
    options[] = { "camo", "attachsys" };
    label="SVDM";
    class camo
    {
        values[] = { "AK_BLK", "SVD_FLRA" };
        alwaysSelectable=1;
    };

    class attachsys : rhs_attachsys
    {
        values[] = { "warsaw", "picatinny" };
        alwaysSelectable=1;
    };
};
