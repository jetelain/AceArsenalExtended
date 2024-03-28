class cup_fal_50_00
{
    options[] = { "camo", "optic" };
    label="FAL 50.00";

    class camo
    {
        values[] = { "BLK", "CUP_FAL_DES", "CUP_FAL_RHD", "CUP_FAL_SND", "CUP_FAL_WDL" };
    };

    class optic : cup_attachsys
    {
        values[] = { "none", "picatinny" };
        alwaysSelectable=1;
    };
};
