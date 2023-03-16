class rhs_ak74m_gp25
{
    options[] = { "camo", "attachsys" }; // Always computed, do not edit
    label="AK-74M (GP-25)";
    class camo
    {
        label = "Furniture";
        values[] = { "AK_BLK", "AK_PLUM" }; // Always computed, do not edit
        alwaysSelectable=1;
    };

    class attachsys : rhs_attachsys
    {
        values[] = { "warsaw", "picatinny" };
        alwaysSelectable=1;
    };
};
