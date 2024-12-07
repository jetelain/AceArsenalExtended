class cup_m21_sws
{
    options[] = { "optic" };
    label="M21 SWS";
    class optic : cup_attachsys
    {
        values[] = { "proprietary", "picatinny" };
        alwaysSelectable=1;

        class proprietary
        {
            label = "Proprietary";
        };
    };
};
