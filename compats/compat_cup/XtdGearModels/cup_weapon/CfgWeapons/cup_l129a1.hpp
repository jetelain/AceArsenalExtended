class cup_l129a1
{
    options[] = { "camo", "grip" };
    label = "L129A1";

    class camo
    {
        values[] = { "BLK", "CTRG_ARID", "CTRG_TROP", "TAN", "WDL" };
        alwaysSelectable=1;
        class WDL
        {
            label = "Woodland";
            image = QPATHTOF(data\camo\cup_l129a1_wdl.paa);
        };
    };

    class grip : cup_grip
    {
        values[] = { "none", "vertical" };
        alwaysSelectable=1;
        class WDL
        {
            label = "Woodland";
        };
    };

};
