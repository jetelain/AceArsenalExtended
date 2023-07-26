class cup_r11_rsass
{
    options[] = { "camo" };
    label="R11 RSASS";

    class camo
    {
        values[] = { "BLK", "CTRG_ARID", "JGL", "SND", "WNTR", "WDL", "WDLNET" };
        alwaysSelectable=1;

        class JGL
        {
            label = "Jungle";
            image = "#(rgb,8,8,3)color(0.29,0.32,0.24,1)";
        };

        class SND
        {
            label = "Sand";
            image = "#(rgb,8,8,3)color(0.63,0.60,0.54,1)";
        };

        class WNTR
        {
            label = "Winter";
            image = QPATHTOF(data\camo\cup_rsass_wtr.paa);
        };

        class WDL
        {
            label = "Woodland";
            image = QPATHTOF(data\camo\cup_rsass_wdl.paa);
        };

        class WDLNET
        {
            label = "Wood Net";
            description = "Woodland Net";
            image = QPATHTOF(data\camo\cup_rsass_wdlnet.paa);
        };
    };
};
