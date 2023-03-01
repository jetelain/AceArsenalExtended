class rhs3cb_mich2000
{
    options[] = { "camo", "rail", "nvgmount", "headset", "belt" };
    label="MICH 2000";
    class camo
    {
        values[] = { "GRN", "Semi-Arid", "TAN", "MRPT-D", "MRPT-WD" };
        alwaysSelectable=1;
    };
    class rail
    {
        label = "Rail";
        values[] = { "None", "ARC" };
        alwaysSelectable=1;
    };
    class nvgmount
    {
        label = "NVG Mount";
        values[] = { "Rhino", "Norotos" };
        alwaysSelectable=1;
    };
    class headset
    {
        label = "Headset";
        values[] = { "No", "Stan.", "Ear Prot."};
        alwaysSelectable=0;
    };
    class belt
    {
        label = "Belt";
        values[] = { "No", "Yes"};
        alwaysSelectable=0;
    };
};
