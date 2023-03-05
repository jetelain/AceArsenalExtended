class rhs_shemagh
{
    options[] = { "camo", "position", "goggles" }; // Always computed, do not edit
    label="Shemagh";
    class camo
    {
        values[] = { "GRN", "OD", "TAN", "WHT" }; // Always computed, do not edit
        alwaysSelectable=1;
    };
    class position
    {
        label = "Position";
        values[] = { "Chin", "Mouth" }; // Always computed, do not edit
        changeingame = 1;
        alwaysSelectable=1;
    };
    class goggles
    {
        labe = "Goggles";
        values[] = { "No", "Yes" }; // Always computed, do not edit
        alwaysSelectable=1;
    };
};
