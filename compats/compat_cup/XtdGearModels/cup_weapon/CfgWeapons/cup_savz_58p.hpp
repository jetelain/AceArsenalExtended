class cup_savz_58p
{
    options[] = { "camo", "optic", "grip" };
    label = "Sa vz. 58P";

    class camo
    {
        values[] = { "CUP_SAVZ_58_COMP", "CUP_SAVZ_58_DES", "CUP_SAVZ_58_WDL", "CUP_SAVZ_58_WOOD" };
        alwaysSelectable=1;
    };

    class optic : cup_attachsys
    {
        label = "Optic";
        values[] = { "none", "pica_dust", "pica_gas" };
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
