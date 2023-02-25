class AMF_FELIN
{
    options[] = { "camo", "goggles", "griffe", "ih295" }; // Always computed, do not edit
    label = "MSA FELIN";
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "CE", "none", "ONU", "TAN" }; // Always computed, do not edit
    };
    class goggles : GogglesBase
    {
        label = "goggles";
        alwaysSelectable = 1;
        values[] = { "none", "OAKLEY" }; // Always computed, do not edit
    };
    class griffe
    {
        label = "griffe";
        alwaysSelectable = 1;
        values[] = { "no", "yes" }; // Always computed, do not edit
    };
    class ih295
    {
        label = "ih295";
        alwaysSelectable = 1;
        values[] = { "no", "yes" }; // Always computed, do not edit
    };
};
