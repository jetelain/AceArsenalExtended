class cup_m1014
{
    options[] = { "grip", "stock" };
    label="M1014";
    class grip : cup_grip
    {
        values[] = { "none", "vertical" };
        alwaysSelectable=1;
    };

    class stock
    {
        label = "Stock";
        values[] = { "telescopic", "solid" };
        alwaysSelectable=1;

        class telescopic
        {
            label = "Telescopic";
        };

        class solid
        {
            label = "Solid";
        };
    };
};
