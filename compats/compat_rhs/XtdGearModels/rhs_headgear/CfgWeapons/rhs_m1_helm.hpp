class rhs_m1_helm
{
    options[] = { "camo", "strap" };
    label="M1";
    class camo
    {
        values[] = { "6CDP", "ERDL_H", "Liner", "Mitchell", "OG107", "Painted" };
        alwaysSelectable=1;
        class Liner
        {
            label = "Liner";
            image="#(rgb,8,8,3)color(0.36,0.34,0.22,1)";
        };
       
        class Mitchell
        {
            label = "Mitchell";
            image = "z\aceax\compats\RHS\data\camo\mitchell.paa";
        };

        class Painted
        {
            label = "Painted";
            image = "z\aceax\compats\RHS\data\camo\m1_paint.paa";
        };
    };

    class strap
    {
        label = "Strap";
        values[] = { "Up", "Down" };
        alwaysSelectable=0;
    };
};
