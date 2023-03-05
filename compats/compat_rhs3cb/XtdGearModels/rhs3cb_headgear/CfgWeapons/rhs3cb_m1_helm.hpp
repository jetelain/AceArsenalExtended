class rhs3cb_m1_helm
{
    options[] = { "camo", "strap" };
    label="M1";
    class camo
    {
        values[] = { "Desert", "ERDL", "Liner", "Mitchell", "OG107", "Painted" };
        alwaysSelectable=1;
    };

    class strap
    {
        label = "Strap";
        values[] = { "Up", "Down" };
        alwaysSelectable=0;
    };
};
