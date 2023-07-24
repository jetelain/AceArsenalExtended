class cup_pp_1901_vityaz
{
    options[] = { "optic", "grip" };
    label = "PP-19-01 Vityaz";

    class optic : cup_attachsys
    {
        label = "Optic";
        values[] = { "warsaw", "pica_dust", "pica_gas" };
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
