class cup_savz_58_carbine
{
    options[] = { "camo", "grip" };
    label = "Sa vz. 58 Carbine";

    class camo
    {
        values[] = { "BLK", "CUP_SAVZ_58_DES", "CUP_SAVZ_58_WDL" };
        alwaysSelectable=1;
    };

    class grip : cup_grip
    {
        values[] = { "angled", "vertical" };
        alwaysSelectable=1;
    };
};
