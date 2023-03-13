class rhs_6b5_19
{
    options[] = { "camo", "loadout" };
    label="6B5-19";
    class camo
    {
        values[] = { "KHK", "Spetsodezhda", "OLI", "TTsKO", "VSR" };
        class TTsKO // It's a unique colorway that doesn't match other AFRF TTsKOs. Weirdly it does match GREF's Mountain TTsKO.
        {
            image = "z\aceax\compats\RHS\data\camo\ttsko_6b519.paa";
        };
    };
    class loadout
    {
        values[] = { "None", "6sh46", "medic", "off", "sniper" };
        alwaysSelectable=1;
        class 6sh46
        {
            label = "6Sh46";
        };
        class medic
        {
            label = "Medic";
        };
        class off
        {
            label = "Officer";
        };
        class sniper
        {
            label = "Sniper";
        };
    };
};
