class rhs_m42_helm_cover
{
    options[] = { "camo" };
    label="M42 Covered";
    class camo
    {
        values[] = { "Splitter31", "Sumpf44", "Mouse", "Winter" };
        alwaysSelectable=1;

        class Mouse
        {
            label = "Mouse Grey";
            image="#(rgb,8,8,3)color(0.70,0.65,0.62,1)";
        };

        class Splitter31
        {
            label = "Splitter 31";
            description = "Splittermuster 31";
            image = "z\aceax\compats\RHS\data\camo\splitter31.paa";
        };

        class Sumpf44
        {
            label = "Sumpf 44";
            description = "Sumpfmuster 44";
            image = "z\aceax\compats\RHS\data\camo\sumpf44.paa";
        };

        class Winter
        {
            label = "Winter";
            image="#(rgb,8,8,3)color(0.91,0.90,0.91,1)";
        };
    };
};
