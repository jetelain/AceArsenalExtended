class cup_cz_584
{
    options[] = { "attachsys" };
    label="CZ 584";

    class attachsys : cup_attachsys
    {
        label = "Optic";
        values[] = { "integral", "picatinny" };
        alwaysSelectable=1;
        class integral
        {
            label = "Integral Scope";
        };
    };
};
