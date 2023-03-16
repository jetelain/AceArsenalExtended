class rhs_lwh
{
    options[] = { "camo", "goggles", "headset" };
    label="LWH";
    class camo
    {
        values[] = { "M1942", "MRPT_D", "MRPT_WD"};
        alwaysSelectable=1;
        class M1942
        {
            description = "M1942 Frog Skin";
            //image = "";
        };
    };
    class goggles
    {
        label = "Goggles";
        values[] = { "None", "ESSB", "ESST" };
        alwaysSelectable=1;
        class ESSB
        {
            label = "Black ESS";
        };
        class ESST
        {
            label = "Tan ESS";
        };
    };
    class headset
    {
        labe = "Headset";
        values[] = { "No", "Yes"};
        alwaysSelectable=1;
    };
};
