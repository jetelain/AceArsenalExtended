class cup_m2010
{
    options[] = { "camo" };
    label="M2010";
    class camo
    {
        values[] = { "BLK", "CTRG_ARID", "CTRG_TROP", "DES", "CUP_URB_HEX", "WNTR", "WDL" };
        alwaysSelectable=1;

        class DES : TAN
        {
            label = "Desert";
        };

        class WNTR : GRY
        {
            label = "Winter";
        };

        class WDL
        {
            label = "Woodland";
            image = "z\aceax\compats\CUP\data\camo\cup_l129a1_wdl.paa"; // Camo pattern is identical to L129A1s, so reusing here.
        };
    };
};
