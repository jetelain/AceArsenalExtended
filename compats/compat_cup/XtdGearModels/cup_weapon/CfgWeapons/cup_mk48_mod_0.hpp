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
            image = QPATHTOF(data\camo\cup_mk48_des.paa);
        };

        class wood
        {
            label = "Woodland";
            image = QPATHTOF(data\camo\cup_mk48_wdl.paa);
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
