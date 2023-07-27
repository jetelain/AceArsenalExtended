class cup_pkp
{
    options[] = { "camo", "optic", "handguard" };
    label="PKP";
    class camo
    {
        values[] = { "BLK", "DES", "WDL" };
        alwaysSelectable = 0;

        class DES
        {
            label = "Desert";
            image = QPATHTOF(data\camo\weapons\cup_pkp_des.paa);
        };

        class WDL
        {
            label = "Woodland";
            image = QPATHTOF(data\camo\weapons\cup_pkp_wdl.paa);
        };
    };

    class optic : cup_attachsys
    {
        values[] = { "warsaw", "picatinny" };
        alwaysSelectable=1;
    };

    class handguard
    {
        label = "Handguard";
        values[] = { "stock", "b50" };
        alwaysSelectable=1;

        class stock
        {
            label = "Stock";
        };

        class b50
        {
            label = "B-50";
        };
    };

};
