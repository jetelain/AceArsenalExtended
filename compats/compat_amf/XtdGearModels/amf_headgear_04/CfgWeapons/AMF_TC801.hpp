class AMF_TC801
{
    options[] = { "camo", "goggles", "sordin" }; // Always computed, do not edit
    label = "MSA TC-801";
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "BLK", "GRN", "TAN" }; // Always computed, do not edit
    };
    class goggles : GogglesBase
    {
        label = "goggles";
        alwaysSelectable = 1;
        values[] = { "none", "OAKLEY" }; // Always computed, do not edit
    };
    class sordin : SordinBase
    {
        label = "sordin";
        alwaysSelectable = 1;
        values[] = { "BLK", "none", "OD", "TAN" }; // Always computed, do not edit
    };
};
