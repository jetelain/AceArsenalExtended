class cup_g36k_ag36
{
    options[] = { "camo", "optic" };
    label="G36K AG36";
    class camo
    {
        values[] = { "BLK", "CUP_G36_DES", "CUP_G36_HEX", "CUP_G36_WDL" };
        alwaysSelectable=1;
    };
    
    class optic : cup_attachsys
    {
        values[] = { "carryhandle", "picatinny" };
    };
};
