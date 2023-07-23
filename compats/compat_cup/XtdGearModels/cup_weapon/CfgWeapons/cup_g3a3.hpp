class cup_g3a3
{
    options[] = { "camo", "grip" };
    label="G3A3";

    class camo
    {
        label = "Furniture";
        values[] = { "OD", "BLK" };
    };

    class grip : cup_grip
    {
        values[] = { "none", "vertical", "widegrip" };
        alwaysSelectable=1;

        class widegrip
        {
            label = "Widegrip";
        };
    };
};
