class rhs3cb_shemagh
{
    options[] = { "color", "position", "goggles" }; // Always computed, do not edit
    label="Shemagh [RHSUSAF]";
    class color
    {
        values[] = { "GRN", "OD", "TAN", "WHT" }; // Always computed, do not edit
        alwaysSelectable=1;
    };
    class position
    {
        values[] = { "Chin", "Mouth" }; // Always computed, do not edit
        changeingame = 1;
        alwaysSelectable=1;
    };
    class goggles
    {
        values[] = { "No", "Yes" }; // Always computed, do not edit
        alwaysSelectable=1;
    };
};
