class cup_akmsn_gp25
{
    options[] = { "attachsys" };
    label="AKMSN GP-25";

    class attachsys : cup_attachsys
    {
        label = "Optic";
        values[] = { "warsaw", "picatinny" };
        alwaysSelectable=1;
    };
};
