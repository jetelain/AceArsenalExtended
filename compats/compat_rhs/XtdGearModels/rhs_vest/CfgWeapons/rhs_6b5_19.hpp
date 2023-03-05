class rhs_6b5_19
{
    options[] = { "camo", "loadout" };
    label="6B5-19";
    class camo
    {
        values[] = { "KHK", "BRZKA", "OLI", "TTsKO", "VSR" };
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
