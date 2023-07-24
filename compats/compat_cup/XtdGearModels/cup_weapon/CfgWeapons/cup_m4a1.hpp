class cup_m4a1
{
    options[] = { "camo", "grip", "carryhandle" };
    label="M4A1";
    class camo
    {
        values[] = { "BLK", "DES", "WDL" };
        alwaysSelectable=1;

        class DES
        {
            label = "Desert";
            image = "z\aceax\compats\CUP\data\camo\cup_m4a1_des.paa";
        };

        class WDL
        {
            label = "Woodland";
            image = "z\aceax\compats\CUP\data\camo\cup_m4a1_wdl.paa";
        };
    };

    class grip : cup_grip
    {
        values[] = { "none", "vertical" };
        alwaysSelectable=1;
    };

    class carryhandle
    {
        label = "Carryhandle";
        values[] = { "no", "yes" };
        alwaysSelectable=1;
        class no
        {
            label = "No";
        };

        class yes
        {
            label = "Yes";
        };
    };
};
