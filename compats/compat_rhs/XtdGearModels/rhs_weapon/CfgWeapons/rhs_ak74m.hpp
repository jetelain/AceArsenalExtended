class rhs_ak74m
{
    options[] = { "camo", "attachsys" }; // Always computed, do not edit
    label="AK-74M";
    class camo
    {
        label = "Furniture";
        values[] = { "AK_BLK", "AK_CAMO", "AK_DES", "AK_PLUM" }; // Always computed, do not edit
        alwaysSelectable=1;
    };

    class attachsys : rhs_attachsys
    {
        values[] = { "warsaw", "picatinny", "zenit", "zenit_pica" };
        alwaysSelectable=1;
    };
};
