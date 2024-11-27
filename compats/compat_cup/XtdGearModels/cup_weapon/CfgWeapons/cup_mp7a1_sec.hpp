class cup_mp7a1_sec  // Secondary version of the Sa vz. 61
{
    options[] = { "camo" };
    label="MP7A1";
    class camo
    {
        values[] = { "BLK", "DES", "WDL" };
        alwaysSelectable=1;

        class DES
        {
            label = "Desert";
            image = QPATHTOF(data\camo\weapons\cup_mp7_des.paa);
        };

        class WDL
        {
            label = "Woodland";
            image = QPATHTOF(data\camo\weapons\cup_mp7_wdl.paa);
        };
    };
};
