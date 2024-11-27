class cup_g36c
{
    options[] = { "camo", "optic", "grip" };
    label="G36C";
    class camo
    {
        values[] = { "BLK", "CUP_G36_DES", "CUP_G36_HEX", "CUP_G36_WDL" };
        alwaysSelectable=1;
    };
    
    class optic : cup_attachsys
    {
        values[] = { "carryhandle", "picatinny" };
    };

    class grip : cup_grip
    {
        values[] = { "none", "vertical" };
    };
};
