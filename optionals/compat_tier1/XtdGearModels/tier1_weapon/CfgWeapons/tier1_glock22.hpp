class tier1_glock22
{
    options[] = { "attachsys", "barrel" };
    label="Glock 22";
    class attachsys
    {
        label = "Attachment System";
        values[] = { "none", "pica" };
        alwaysSelectable=1;

        class none
        {
            label = "None";
        };

        class pica
        {
            label = "Picatinny";
            description = "Picatinny Rail";
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
            description = "Threaded Barrel";
        };
    };
};
