class tier1_sr25
{
    options[] = { "camo", "furniture" };
    label="SR-25";
    class camo
    {
        values[] = { "BLK", "TAN" };
        alwaysSelectable=1;
    };

    class furniture
    {
        label = "Furniture";
        values[] = { "STD", "EC" };
        alwaysSelectable=1;

        class STD
        {
            label = "Standard";
        };

        class EC
        {
            label = "EC";
            description = "Enhanced Carbine";
        };
    };
};
