class cup_mk17_std
{
    options[] = { "camo", "grip" };
    label = "MK 17 Std.";
    class camo
    {
        values[] = { "FDE", "BLK", "CUP_SCAR_WDL" };
        alwaysSelectable=1;
    };

    class grip : cup_grip
    {
        values[] = { "none", "angled", "vertical", "surefire" };
        alwaysSelectable = 1;
        class surefire
        {
            label = "Surefire";
        };
    };
};
