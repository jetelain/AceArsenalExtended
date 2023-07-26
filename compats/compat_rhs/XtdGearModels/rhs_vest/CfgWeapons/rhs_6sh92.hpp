class rhs_6sh92
{
    options[] = { "camo", "loadout" };
    label="6Sh92";
    class camo
    {
        values[] = { "EMR_SUM", "FLRA", "VSR" };
        alwaysSelectable=1;

        class VSR // Has a very distinct color from other VSR camos!
	    {
            image = "z\aceax\compats\RHS\data\camo\vsr_6sh92.paa";
	    };
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
