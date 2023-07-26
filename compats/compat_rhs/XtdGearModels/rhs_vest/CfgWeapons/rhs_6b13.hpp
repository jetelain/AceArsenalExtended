class rhs_6b13
{
    options[] = { "camo", "loadout" };
    label="6B13";
    class camo
    {
        values[] = { "EMR_SUM", "FLRA", "VSR" };
        alwaysSelectable=1;
    };
    class loadout
    {
        values[] = { "None", "6sh92", "6sh92_headset_map", "6sh92_radio", "6sh92_vog", "crew_off" };
        alwaysSelectable=1;
        class 6sh92
        {
            label = "6Sh92";
        };
        class 6sh92_headset_map
        {
            label = "6Sh92/Hdst./Map";
            description = "6Sh92/Headset/Mapcase";
        };
        class 6sh92_radio
        {
            label = "6Sh92/Radio";
        };
        class 6sh92_vog
        {
            label = "6Sh92/VOG";
        };
        class crew_off
        {
            label = "Crew Off.";
            description = "Crew Officer";
        };
    };
};
