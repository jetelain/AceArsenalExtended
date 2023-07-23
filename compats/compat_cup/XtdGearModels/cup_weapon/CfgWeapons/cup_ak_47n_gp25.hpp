class cup_ak_47n_gp25
{
    options[] = { "attachsys" };
    label="AK-47N GP-25";

    class attachsys : cup_attachsys
    {
        label = "Optic";
        values[] = { "warsaw", "picatinny" };
        alwaysSelectable=1;
    };
};
