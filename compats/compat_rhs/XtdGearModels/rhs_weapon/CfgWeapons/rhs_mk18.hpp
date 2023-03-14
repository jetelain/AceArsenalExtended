class rhs_mk18
{
    options[] = { "camo", "stock" };
    label="Mk 18 Mod 1";
    class camo
    {
        values[] = { "standard", "BLK", "desert", "woodland" }; // Always computed, do not edit
        alwaysSelectable=1;
        class standard
        {
            label = "Standard";
        };

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
