class rhs_socom16
{
    options[] = { "attachsys" }; // Always computed, do not edit
    label="SOCOM 16";
    class attachsys : rhs_attachsys
    {
        values[] = { "picatinny", "picatinny_and_flash" }; // Always computed, do not edit
        alwaysSelectable=1;
        class picatinny_and_flash
        {
            label = "Pica. & Side";
            description = "Picatinny Rail and Side Mount (e.g. flashlights and lasers)";
        };
    };
};
