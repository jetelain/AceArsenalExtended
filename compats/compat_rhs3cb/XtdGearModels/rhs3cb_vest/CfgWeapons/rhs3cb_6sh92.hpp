class rhs3cb_6sh92
{
    options[] = { "camo", "loadout" };
    label="6Sh92";
    class camo
    {
        values[] = { "EMR-S", "FLRA", "VSR" };
        alwaysSelectable=1;
    };
    class loadout
    {
        values[] = { "None", "headset", "radio", "vog", "vog_headset" };
        alwaysSelectable=1;
        class headset
        {
            label = "Headset";
        };
        class radio
        {
            label = "Radio";
        };
        class vog
        {
            label = "VOG";
        };
        class vog_headset
        {
            label = "VOG/Hdst.";
            description = "VOG/Headset";
        };
    };
};
