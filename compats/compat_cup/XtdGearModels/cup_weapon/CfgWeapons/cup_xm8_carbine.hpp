class cup_xm8_carbine
{
    options[] = { "optic", "grip" };
    label="XM8 Carbine";

    class optic : cup_attachsys
    {
        values[] = { "carryhandle", "picatinny" };
        alwaysSelectable=1;
    };

    class grip : cup_grip
    {
        values[] = { "none", "vertical" };
        alwaysSelectable=1;
    };
};
