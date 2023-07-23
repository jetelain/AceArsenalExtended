class cup_g36k_ksk
{
    options[] = { "camo", "grip" };
    label="G36K-KSK";
    class camo
    {
        values[] = { "BLK", "CUP_G36_DES", "CUP_G36_HEX" };
        alwaysSelectable=1;
    };
    
    class grip : cup_grip
    {
        values[] = { "none", "angled", "vertical" };
        alwaysSelectable=1;
    };
};
