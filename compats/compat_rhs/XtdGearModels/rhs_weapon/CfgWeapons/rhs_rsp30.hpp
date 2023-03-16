class rhs_rsp30
{
    options[] = { "color" };
    label="RSP-30";
    class color
    {
        label = "Flare Color";
        values[] = { "WHT", "GRN", "RED" };
        alwaysSelectable=1;
        class WHT
        {
            label = "White";
            image="#(rgb,8,8,3)color(1,1,1,1)";
        };

        class GRN
        {
            label = "Green";
            image="#(rgb,8,8,3)color(0,1,0,1)";
        };

        class RED
        {
            label = "Red";
            image="#(rgb,8,8,3)color(1,0,0,1)";
        };
    };
};
