class cup_mk16_std
{
    options[] = { "camo", "grip" };
    label = "MK 16 Std.";
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
