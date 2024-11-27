class cup_fal_50_61
{
    options[] = { "camo", "optic" };
    label="FAL 50.61";

    class camo
    {
        values[] = { "BLK", "CUP_FAL_RHD" };
    };

    class optic : cup_attachsys
    {
        values[] = { "none", "picatinny" };
        alwaysSelectable=1;
    };
};
