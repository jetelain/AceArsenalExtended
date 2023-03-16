class rhs_m40_helm
{
    options[] = { "camo", "strap" };
    label="M40";
    class camo
    {
        values[] = { "GRY", "Painted", "Winter" };
        alwaysSelectable=1;
        class Painted
        {
            label = "Painted";
            image = "z\aceax\compats\RHS\data\camo\m1940_paint.paa";
        };
        
        class Winter
        {
            label = "Winter";
            image="#(rgb,8,8,3)color(0.91,0.90,0.91,1)";
        };
    };

    class strap
    {
        label = "Strap";
        values[] = { "Up", "Down" };
    };
};
