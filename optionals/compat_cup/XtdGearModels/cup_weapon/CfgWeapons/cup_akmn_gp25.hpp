class cup_akmn_gp25
{
    options[] = { "attachsys" };
    label="AKMN (GP-25)";

    class attachsys : cup_attachsys
    {
        label = "Optic";
        values[] = { "warsaw", "picatinny" };
        alwaysSelectable=1;
    };
};
