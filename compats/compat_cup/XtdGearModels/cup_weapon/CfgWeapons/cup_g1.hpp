class cup_g1
{
    options[] = { "optic" };
    label = "G1";

    class optic : cup_attachsys
    {
        label = "Optic";
        values[] = { "none", "picatinny" };
        alwaysSelectable=1;
    };
};
