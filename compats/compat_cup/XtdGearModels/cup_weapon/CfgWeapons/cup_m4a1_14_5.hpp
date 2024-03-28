class cup_m4a1_14_5
{
    options[] = { "camo", "furniture" };
    label = "M4A1 (14.5')";
    class camo
    {
        values[] = { "BLK", "DES", "WNTR", "WDL" };
        alwaysSelectable=1;

        class DES
        {
            label = "Desert";
            image = QPATHTOF(data\camo\weapons\cup_m4a1_alt_des.paa);
        };

        class WNTR
        {
            label = "Winter";
            image = QPATHTOF(data\camo\weapons\cup_m4a1_alt_wntr.paa);
        };

        class WDL
        {
            label = "Woodland";
            image = QPATHTOF(data\camo\weapons\cup_m4a1_alt_wdl.paa);
        };
    };

    class furniture
    {
        label = "Furniture";
        values[] = { "MOE", "NC" };
        alwaysSelectable=1;

        class MOE
        {
            label = "MOE";
        };

        class NC
        {
            label = "No Covers";
        };
    };
};
