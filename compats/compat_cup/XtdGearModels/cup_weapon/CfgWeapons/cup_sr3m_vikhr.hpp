class cup_sr3m_vikhr
{
    options[] = { "optic", "grip" };
    label="SR-3M Vikhr";

    class optic : cup_attachsys
    {
        values[] = { "warsaw", "picatinny" };
        alwaysSelectable=1;
    };

    class grip : cup_grip
    {
        values[] = { "none", "vertical" };
        alwaysSelectable=1;
    };
};
