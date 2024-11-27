class cup_rpk
{
    options[] = { "optic" };
    label="RPK";

    class optic : cup_attachsys
    {
        label = "Optic";
        values[] = { "warsaw", "picatinny" };
        alwaysSelectable=1;
    };
};
