class cup_akmn
{
    options[] = { "camo", "attachsys", "grip" };
    label="AKMN";

    class camo
    {
        values[] = { "AK_WOOD", "des" };
        alwaysSelectable=1;

        class des
        {
            label = "Desert";
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
