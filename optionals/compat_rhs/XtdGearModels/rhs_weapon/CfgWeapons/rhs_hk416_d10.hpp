class rhs_hk416_d10
{
    options[] = { "camo", "stock" };
    label="HK416 D10";
    class camo
    {
        values[] = { "BLK", "desert", "woodland" };
        alwaysSelectable=1;

        class desert
        {
            label = "Desert";
        };

        class woodland
        {
            label = "Woodland";
        };
    };

    class stock
    {
        label = "Stock";
        values[] = { "standard", "sopmod" };
        alwaysSelectable=1;

        class standard
        {
            label = "Standard";
        };

        class sopmod
        {
            label = "SOPMOD";
        };
    };
};
