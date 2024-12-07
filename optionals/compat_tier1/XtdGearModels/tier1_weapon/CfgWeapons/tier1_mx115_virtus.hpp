class tier1_mx115_virtus
{
    options[] = { "camo", "caliber" };
    label="MX 11.5 Virtus";
    class camo
    {
        values[] = { "GRY", "BLK", "DES", "FDE" };
        alwaysSelectable=1;

        class DES
        {
            label = "Desert";
            image = "#(rgb,8,8,3)color(0.61,0.54,0.45,1)";
        };
    };

    class caliber
    {
        label = "Caliber";
        values[] = { "556MM", "300BLK" };
        alwaysSelectable=1;

        class 556MM
        {
            label = "5.56mm";
        };

        class 300BLK
        {
            label = ".300BLK";
        };
    };
};
