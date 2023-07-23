class cup_cz_550
{
    options[] = { "attachsys" };
    label="CZ 550";

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
