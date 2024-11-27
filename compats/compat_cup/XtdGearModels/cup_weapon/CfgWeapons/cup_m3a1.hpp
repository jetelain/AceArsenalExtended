class cup_m3a1
{
    options[] = { "camo" };
    label="M3A1";
    class camo
    {
        values[] = { "BLK", "GRN", "GRY", "SND" };
        alwaysSelectable=1;

        class GRN
        {
            label = "Green";
            image = "#(rgb,8,8,3)color(0.13,0.18,0.13,1)";
        };

        class SND
        {
            label = "Sand";
            image = "#(rgb,8,8,3)color(0.40,0.30,0.15,1)";
        };
    };
};
