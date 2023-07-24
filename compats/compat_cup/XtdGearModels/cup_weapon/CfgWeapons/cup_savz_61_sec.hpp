class cup_savz_61_sec // Secondary version of the Sa vz. 61
{
    options[] = { "optic" };
    label = "Sa vz. 61";

    class optic : cup_attachsys
    {
        label = "Optic";
        values[] = { "none", "picatinny" };
        alwaysSelectable=1;
    };
};
