class cup_m16a1_m203
{
    options[] = { "paintjob" };
    label="M16A1 M203";
    class paintjob : camo
    {
        label = "Heatshield Paintjob";
        values[] = { "clean", "FS", "USA" };
        alwaysSelectable=1;
        centerImage = 1;

        class clean
        {
            label = "Clean";
            image = QPATHTOF(data\camo\weapons\cup_m16a1_m203_clean.paa);
        };

        class FS
        {
            label = "Flame Shark";
            description = "Flaming Shark";
            image = QPATHTOF(data\camo\weapons\cup_m16a1_m203_fs.paa);
        };

        class USA
        {
            label = "USA";
            image = QPATHTOF(data\camo\weapons\cup_m16a1_m203_usa.paa);
        };

    };

};
