class rhs_hgu56p
{
    options[] = { "camo", "mask", "visor", "livery" };
    label="HGU-56/P";
    class camo
    {
        values[] = { "BLK", "GRN", "OD", "PNK", "SAF", "TAN", "USA", "WHT" };
        alwaysSelectable=1;

        class PNK
        {
            label = "Pink";
            image="#(rgb,8,8,3)color(0.96,0.86,0.9,1)";
        };

        class SAF
        {
            label = "SAF";
            image="#(rgb,8,8,3)color(0.50,0.64,0.68,1)";
        };

        class USA
        {
            label = "USA";
            description = "Flag of the United States of America";
            image = "z\aceax\compats\RHS\data\camo\usa.paa";
        };
    };

    class mask
    {
        label = "Mask";
        values[] = { "No", "Yes" };
        alwaysSelectable=1;
    };

    class visor
    {
        label = "Visor";
        values[] = { "No", "Yes" };
        alwaysSelectable=1;
    };

    class livery
    {
        label = "Livery";
        values[] = { "None", "Empire", "Skull", "Smiley", "Moustache" };
        alwaysSelectable=1;
    };
};
