class rhs3cb_pasgt
{
    options[] = { "camo", "nvg" };
    label="PASGT";
    class camo
    {
        values[] = { "DCP", "LIZ_ATS", "ERDL", "FLCK", "OLI", "Press", "UN", "M81" };
        alwaysSelectable=1;
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
