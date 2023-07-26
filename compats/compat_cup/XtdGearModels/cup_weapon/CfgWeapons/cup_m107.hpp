class cup_m107
{
    options[] = { "camo" };
    label="M107";
    class camo
    {
        values[] = { "BLK", "GRY", "DES", "WNTR", "WDL" };
        alwaysSelectable=1;

        class DES
        {
            label = "Desert";
            image = QPATHTOF(data\camo\cup_m107_des.paa);
        };

        class WNTR
        {
            label = "Winter";
            image = QPATHTOF(data\camo\cup_m107_wntr.paa);
        };

        class WDL
        {
            label = "Woodland";
            image = QPATHTOF(data\camo\cup_m107_wdl.paa);
        };
    };

};
