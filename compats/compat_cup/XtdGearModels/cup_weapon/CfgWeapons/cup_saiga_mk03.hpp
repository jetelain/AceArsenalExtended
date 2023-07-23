class cup_saiga_mk03
{
    options[] = { "camo", "optic" };
    label="Saiga MK03";

    class camo
    {
        label = "Furniture";
        values[] = { "AK_BLK", "wood" };
        class wood
        {
            label = "Wood";
        };
    };

    class optic : cup_attachsys
    {
        values[] = { "warsaw", "picatinny" };
        alwaysSelectable=1;
    };
};
