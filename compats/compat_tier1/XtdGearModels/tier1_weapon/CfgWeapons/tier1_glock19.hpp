class tier1_glock19
{
    options[] = { "furniture", "barrel" };
    label="Glock 19";
    class furniture
    {
        label = "Furniture";
        values[] = { "URB", "WAR" };
        alwaysSelectable=1;

        class URB
        {
            label = "Urban";
        };

        class WAR
        {
            label = "WAR";
        };
    };

    class barrel
    {
        label = "Barrel/Iron Sights";
        values[] = { "STD", "TB" };
        alwaysSelectable=1;

        class STD
        {
            label = "Standard";
        };

        class TB
        {
            label = "Threaded";
            description = "Threaded Barrel"
        };
    };
};
