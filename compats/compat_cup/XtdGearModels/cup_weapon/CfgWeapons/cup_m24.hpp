class cup_m24
{
    options[] = { "camo" };
    label="M24";
    class camo
    {
        values[] = { "BLK", "DES", "TEMP" };
        alwaysSelectable=1;

        class DES
        {
            label = "Desert";
            image = QPATHTOF(data\camo\weapons\cup_m24_des.paa);
        };

        class TEMP
        {
            label = "Temperate";
            image = QPATHTOF(data\camo\weapons\cup_m24_temp.paa);
        };
    };
};
