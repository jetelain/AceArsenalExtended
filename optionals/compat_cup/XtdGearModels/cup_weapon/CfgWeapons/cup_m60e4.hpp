class cup_m60e4
{
    options[] = { "camo", "attachsys" };
    label="M60E4";
    class camo
    {
        values[] = { "BLK", "des", "jun", "wood" };
        alwaysSelectable=1;

        class des
        {
            label = "Desert";
        };

        class jun
        {
            label = "Jungle";
        };

        class wood
        {
            label = "Woodland";
        };
    };

    class attachsys : cup_attachsys
    {
        values[] = { "none", "ris" };
    };
};
