class cup_pkm
{
    options[] = { "optic", "handguard" };
    label="PKM";
    class optic : cup_attachsys
    {
        values[] = { "none", "warsaw", "pica_cover", "pica_barrel" };
        alwaysSelectable=1;

        class pica_cover
        {
            label = "Picatinny Cover";
            description = "Picatinny Rail on Receiver Cover";
        };

        class pica_barrel
        {
            label = "Picatinny Barrel";
            description = "Picatinny Rail on Barrel";
        };
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
