class cup_mk48_mod_0
{
    options[] = { "camo", "heatguard" };
    label = "MK 48";
    class camo
    {
        values[] = { "BLK", "des", "OD", "TAN", "wood" };
        alwaysSelectable=1;

        class des
        {
            label = "Desert";
        };

        class wood
        {
            label = "Woodland";
        };
    };

    class heatguard
    {
        label = "Heatguard";
        values[] = { "yes", "no" };
        class yes
        {
            label = "Yes";
        };

        class no
        {
            label = "No";
        };
    };

};
