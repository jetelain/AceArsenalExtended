class rhs_gorka_r
{
    options[] = { "camo", "gloves" }; // Always computed, do not edit
    label="Gorka-R";
    class camo
    {
        values[] = { "GRN", "YLW" }; // Always computed, do not edit
        alwaysSelectable=1;

        class YLW
        {
            label = "Yellow";
            image="#(rgb,8,8,3)color(0.64,0.58,0.37,1)";
        };
    };
    class gloves
    {
        values[] = { "No", "Yes" }; // Always computed, do not edit
        alwaysSelectable=1;
    };
};
