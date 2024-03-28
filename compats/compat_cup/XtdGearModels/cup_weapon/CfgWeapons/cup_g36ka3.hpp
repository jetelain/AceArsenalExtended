class cup_g36ka3
{
    options[] = { "camo", "grip" };
    label="G36KA3";
    class camo
    {
        values[] = { "BLK", "CUP_G36_DES", "CUP_G36_HEX", "CUP_G36_WDL" };
        alwaysSelectable=1;
    };
    
    class grip : cup_grip
    {
        values[] = { "none", "angled", "vertical" };
    };
};
