class rhs_pasgt
{
    options[] = { "camo", "nvg" };
    label="PASGT";
    class camo
    {
        values[] = { "DCP", "LIZ_ATS", "ERDL_L", "FLCK", "OLI", "Press", "UN", "M81" };
        alwaysSelectable=1;
        class Press
        {
            label = "Press";
            image="#(rgb,8,8,3)color(0.38,0.46,0.66,1)";
        };
    };

    class nvg
    {
        label = "NVG Mount";
        values[] = { "none", "rhino" };
        alwaysSelectable=1;
        class none
        {
            label = "None";
        };
        class rhino
        {
            label = "Rhino";
        };
    };
};
