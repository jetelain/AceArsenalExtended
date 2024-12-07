class AMF_TC800
{
    options[] = { "camo", "goggles", "sordin" }; // Always computed, do not edit
    label = "MSA TC";
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "BLK", "GRN", "TAN" }; // Always computed, do not edit
    };
    class goggles : GogglesOrFaceShieldBase
    {
        label = "goggles";
        alwaysSelectable = 1;
        values[] = { "FS", "none", "OAKLEY" }; // Always computed, do not edit
    };
    class sordin : SordinBase
    {
        label = "sordin";
        alwaysSelectable = 1;
        values[] = { "BLK", "none", "OD", "TAN" }; // Always computed, do not edit
    };
};
