class rhs_m14
{
    options[] = { "camo", "attachsys" };
    label="M14";
    class camo
    {
        values[] = { "wood", "desert", "fiberglass", "woodland" };
        alwaysSelectable=1;
        class wood
        {
            label = "Wood";
        };

        class desert
        {
            label = "Desert";
        };

        class fiberglass
        {
            label = "Fiberglass";
        };

        class woodland
        {
            label = "Woodland";
        };
    };
    class attachsys : rhs_attachsys
    {
        values[] = { "none", "picatinny", "ris" };
        alwaysSelectable=1;
    };
};
