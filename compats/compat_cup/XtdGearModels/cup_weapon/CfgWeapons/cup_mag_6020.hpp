class cup_mag_6020
{
    options[] = { "camo", "optic" };
    label="MAG 60.20";
    class camo
    {
        label = "Furniture";
        values[] = { "wood", "plastic" };

        class wood
        {
            label = "Wood";
        };

        class plastic
        {
            label = "Plastic";
        };
    };

    class optic : cup_attachsys
    {
        label = "Optic";
        values[] = { "none", "picatinny" };
    }
};
