class cup_g36_ag36
{
    options[] = { "camo", "optic" };
    label="G36 AG36";
    class camo
    {
        values[] = { "BLK", "CUP_G36_DES", "CUP_G36_WDL" };
        alwaysSelectable=1;
    };
    
    class optic : cup_attachsys
    {
        values[] = { "carryhandle", "picatinny" };
    };
};
