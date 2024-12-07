class tier1_m110k5
{
    options[] = { "stock", "caliber" };
    label="M110k5";
    class stock
    {
        label = "Stock";
        values[] = { "STD", "ACS" };
        alwaysSelectable=1;

        class STD
        {
            label = "Standard";
        };

        class ACS
        {
            label = "ACS";
        };
    };

    class caliber
    {
        label = "Caliber";
        values[] = { "762MM", "65MM" };
        alwaysSelectable=1;

        class 762MM
        {
            label = "7.62mm";
        };

        class 65MM
        {
            label = "6.5mm";
        };
    };
};
