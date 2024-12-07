class amf_balaclava
{
    options[] = { "camo", "goggles", "sordin" }; // Always computed, do not edit
    label = "CAGOULE";
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "BLK", "GRN", "RG", "TAN" }; // Always computed, do not edit
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
