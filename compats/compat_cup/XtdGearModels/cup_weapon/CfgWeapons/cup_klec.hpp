class cup_klec
{
    options[] = { "optic", "grip" };
    label = "Klec";

    class optic : cup_attachsys
    {
        label = "Optic";
        values[] = { "warsaw", "pica_dust", "pica_gas", "pica_both" };
        alwaysSelectable=1;

        class pica_dust
        {
            label = "Picatinny Dust";
            description = "Picatinny Rail on Dust Cover";
        };

        class pica_gas
        {
            label = "Picatinny Gas";
            description = "Picatinny Rail on Gas Tube";
        };
    };

    class grip : cup_grip
    {
        values[] = { "none", "vertical" };
        alwaysSelectable=1;
    };
};
