class cup_sa58_osw
{
    options[] = { "camo", "grip" };
    label="SA58 OSW";

    class camo
    {
        values[] = { "BLK", "des", "sand", "wood" };
        alwaysSelectable=1;

        class des
        {
            label = "Desert";
        };

        class sand
        {
            label = "Sand";
        };

        class wood
        {
            label = "Woodland";
        };
    };

    class grip : cup_grip
    {
        values[] = { "none", "vertical" };
        alwaysSelectable=1;
    };
};
