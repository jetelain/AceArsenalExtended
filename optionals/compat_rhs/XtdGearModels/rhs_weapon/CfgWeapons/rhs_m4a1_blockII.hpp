class rhs_m4a1_blockII
{
    options[] = { "camo", "stock" };
    label="M4A1 Block II";
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
