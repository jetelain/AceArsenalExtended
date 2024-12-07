class rhs_m4a1_pip
{
    options[] = { "camo", "stock" };
    label="M4A1 PIP";
    class camo
    {
        values[] = { "BLK", "desert", "woodland" }; // Always computed, do not edit
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
        values[] = { "standard", "magpull" };
        alwaysSelectable=1;
        class standard
        {
            label = "Standard";
        };

        class magpull
        {
            label = "Magpull";
        };
    };
};
