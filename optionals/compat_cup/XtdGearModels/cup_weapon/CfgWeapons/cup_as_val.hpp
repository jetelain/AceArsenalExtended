class cup_as_val
{
    options[] = { "attachsys", "underbarrel" };
    label="AS Val";

    class attachsys : cup_attachsys
    {
        label = "Optic";
        values[] = { "warsaw", "picatinny" };
        alwaysSelectable=1;
    };

    class underbarrel : cup_grip
    {
        label = "Underbarrel";
        values[] = { "none", "vertical", "flashlight" };
        alwaysSelectable=1;
        class flashlight
        {
            label = "Flashlight";
        };
    };
};
