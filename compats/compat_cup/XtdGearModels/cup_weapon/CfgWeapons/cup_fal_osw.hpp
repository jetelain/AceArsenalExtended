class cup_fal_osw
{
    options[] = { "optic" };
    label="FAL OSW";

    class optic : cup_attachsys
    {
        values[] = { "none", "picatinny" };
        alwaysSelectable=1;
    };
};
