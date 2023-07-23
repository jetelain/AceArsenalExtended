class cup_ak_74m_gp25
{
    options[] = { "camo", "attachsys" };
    label="AK-74M (GP-25)";

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

};
