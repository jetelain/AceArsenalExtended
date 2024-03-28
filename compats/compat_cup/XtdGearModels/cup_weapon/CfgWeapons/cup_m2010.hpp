class cup_m2010
{
    options[] = { "camo" };
    label="M2010";
    class camo
    {
        values[] = { "BLK", "CTRG_ARID", "CTRG_TROP", "DES", "CUP_URB_HEX", "WNTR", "WDL" };
        alwaysSelectable=1;

        class DES
        {
            label = "Desert";
            image = "#(rgb,8,8,3)color(0.60,0.55,0.45,1)";
        };

        class WNTR
        {
            label = "Winter";
            image = "#(rgb,8,8,3)color(0.69,0.68,0.69,1)";
        };

        class WDL
        {
            label = "Woodland";
            image = QPATHTOF(data\camo\weapons\cup_l129a1_wdl.paa); // Camo pattern is identical to L129A1s, so reusing here.
        };
    };
};
