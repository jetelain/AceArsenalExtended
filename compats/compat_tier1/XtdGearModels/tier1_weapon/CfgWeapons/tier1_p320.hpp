class tier1_p320
{
    options[] = { "barrel" };
    label="P320";
    class barrel
    {
        label = "Barrel/Iron Sights";
        values[] = { "STD", "PMM", "TB" };
        alwaysSelectable=1;

        class STD
        {
            label = "Standard";
        };

        class PMM
        {
            label = "PMM";
            description = "PMM Compensator";
        };

        class TB
        {
            label = "Threaded";
            description = "Threaded Barrel"
        };
    };
};
