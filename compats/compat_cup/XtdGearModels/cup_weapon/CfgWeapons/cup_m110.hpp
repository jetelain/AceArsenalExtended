class cup_m110
{
    options[] = { "camo", "stock" };
    label="M110";
    class camo
    {
        values[] = { "BLK", "TAN", "WDL" };
        alwaysSelectable=1;

        class WDL
        {
            label = "Woodland";
            image = QPATHTOF(data\camo\weapons\cup_m110_wdl.paa);
        };
    };

    class stock
    {
        label = "Stock";
        values[] = { "standard", "prs" };
        alwaysSelectable=1;

        class standard
        {
            label = "Standard";
        };

        class prs
        {
            label = "PRS";
        };
    };

};
