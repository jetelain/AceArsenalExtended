class cup_l85a2
{
    options[] = { "attachsys", "grip" };
    label = "L85A2";

    class attachsys : cup_attachsys
    {
        values[] = { "picatinny", "ris" };
        alwaysSelectable=1;
    };

    class grip : cup_grip
    {
        values[] = { "none", "vertical" };
        alwaysSelectable=1;
    };

};
