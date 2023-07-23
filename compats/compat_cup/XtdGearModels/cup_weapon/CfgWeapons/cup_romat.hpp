class cup_romat
{
    options[] = { "optic" };
    label="Romat";

    class optic : cup_attachsys
    {
        label = "Optic";
        values[] = { "none", "picatinny" };
        alwaysSelectable=1;
    };
};
