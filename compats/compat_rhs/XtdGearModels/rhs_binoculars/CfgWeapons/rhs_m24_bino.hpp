class rhs_m24_bino
{
    options[] = { "ard" };
    label="M24 Binoculars";
    class ard
    {
        label = "Anti-Reflection Device";
        values[] = { "off", "on" };
        alwaysSelectable=1;
        changeingame = 1; // They hang off the binos if not on.
        class off
        {
            label = "Off";
        };

        class on
        {
            label = "On";
        };
    };
};
