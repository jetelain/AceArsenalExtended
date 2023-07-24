class cup_m4a1_sopmod
{
    options[] = { "camo", "grip" };
    label="M4A1 SOPMOD";
    class camo
    {
        values[] = { "BLK", "CTRG_ARID", "CTRG_TROP", "TAN", "CUP_URB_HEX", "WNTR", "WDL" };
        alwaysSelectable=1;

        class WNTR
        {
            label = "Winter";
            image = "z\aceax\compats\CUP\data\camo\cup_m4a1_sopmod_wntr.paa";
        };

        class WDL
        {
            label = "Woodland";
            image = "z\aceax\compats\CUP\data\camo\cup_l129a1_wdl.paa"; // Camo pattern is identical to L129A1s, so reusing here.
        };
    };

    class grip : cup_grip
    {
        values[] = { "angled", "vertical" };
        alwaysSelectable=1;
    };
};
