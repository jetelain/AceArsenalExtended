class cup_ak_74m
{
    options[] = { "camo", "attachsys", "grip" };
    label="AK-74M";

    class camo
    {
        values[] = { "AK_BLK", "des", "wood" };
        alwaysSelectable=1;

        class des
        {
            label = "Desert";
        };

        class wood
        {
            label = "Woodland";
        };
    };

    class attachsys : cup_attachsys
    {
        values[] = { "warsaw", "picatinny", "zenit_pica" };
        alwaysSelectable=1;
    };

    class grip : cup_grip
    {
        values[] = { "none", "angled" };
        alwaysSelectable=1;
    };
};
