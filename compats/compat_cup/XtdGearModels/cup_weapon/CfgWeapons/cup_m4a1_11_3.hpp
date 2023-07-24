class cup_m4a1_11_3
{
    options[] = { "camo", "furniture" };
    label = "M4A1 (11.3')";
    class camo
    {
        values[] = { "BLK", "DES", "WNTR", "WDL" };
        alwaysSelectable=1;

        class DES
        {
            label = "Desert";
            image = "z\aceax\compats\CUP\data\camo\cup_m4a1_alt_des.paa";
        };

        class WNTR
        {
            label = "Winter";
            image = "z\aceax\compats\CUP\data\camo\cup_m4a1_alt_wntr.paa";
        };

        class WDL
        {
            label = "Woodland";
            image = "z\aceax\compats\CUP\data\camo\cup_m4a1_alt_wdl.paa";
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
