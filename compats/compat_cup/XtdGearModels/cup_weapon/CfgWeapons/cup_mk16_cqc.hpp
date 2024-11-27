class cup_mk16_cqc
{
    options[] = { "camo", "grip" };
    label = "MK 16 CQC";
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
