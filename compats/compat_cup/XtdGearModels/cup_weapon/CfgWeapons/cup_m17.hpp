class cup_m17
{
    options[] = { "camo" };
    label="M17";
    class camo
    {
        values[] = { "BLK", "TAN", "GRN" };
        alwaysSelectable=1;

        class GRN
        {
            label = "Green";
            image = "#(rgb,8,8,3)color(0.31,0.37,0.26,1)";
        };

        class TAN
        {
            label = "Coyote";
        };
    };
};
