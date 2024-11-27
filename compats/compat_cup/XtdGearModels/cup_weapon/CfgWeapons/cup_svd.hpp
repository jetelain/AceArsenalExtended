class cup_svd
{
    options[] = { "camo", "optic" };
    label = "SVD";

    class camo
    {
        values[] = { "wood", "des", "woodland" };
        alwaysSelectable=1;

        class des
        {
            label = "Desert";
        };

        class woodland
        {
            label = "Woodland";
        };
    };

    class optic : cup_attachsys
    {
        values[] = { "warsaw", "picatinny" };
        alwaysSelectable=1;
    };
};
