class cup_no4_mki
{
    options[] = { "optic" };
    label = "No. 4 Mk. I";
    class optic : cup_attachsys
    {
        label = "Optic Mount";
        values[] = { "proprietary", "picatinny" };

        class proprietary
        {
            label = "Proprietary";
        };
    };

};
