class cup_ak_12
{
    options[] = { "camo", "grip" };
    label = "AK-12";

    class camo
    {
        values[] = { "ak1x_cup_arid", "BLK", "ak1x_cup_lush", "TAN", "ak1x_cup_snwtig", "ak1x_cup_tig", "ak1x_cup_tc", "ak1x_cup_win", "ak1x_cup_wdl" };
        alwaysSelectable=1;

        class ak1x_cup_arid
        {
            label = "Arid";
        };

        class ak1x_cup_lush
        {
            label = "Lush";
        };

        class ak1x_cup_snwtig
        {
            label = "Snow Tiger";
        };

        class ak1x_cup_tig
        {
            label = "Tiger";
        };

        class ak1x_cup_tc
        {
            label = "Two-Color";
        };

        class ak1x_cup_win
        {
            label = "Winter";
        };

        class ak1x_cup_wdl
        {
            label = "Woodland";
        };
    };

    class grip : cup_grip
    {
        values[] = { "none", "angled", "vertical" };
        alwaysSelectable=1;
    };
};
