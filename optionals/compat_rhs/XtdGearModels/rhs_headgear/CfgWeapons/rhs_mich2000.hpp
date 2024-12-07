class rhs_mich2000
{
    options[] = { "camo", "rail", "nvgmount", "headset", "belt" };
    label="MICH 2000";
    class camo
    {
        values[] = { "GRN", "SemiArid", "TAN", "MRPT_D", "MRPT_WD" };
        alwaysSelectable=1;

        class SemiArid
        {
            label = "Semi-Arid";
            image = "z\aceax\compats\RHS\data\camo\semi_arid.paa";
        };
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
