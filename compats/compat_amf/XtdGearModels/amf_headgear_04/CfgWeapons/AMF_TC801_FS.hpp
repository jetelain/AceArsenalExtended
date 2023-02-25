class AMF_TC801_FS
{
    options[] = { "camo", "sordin" }; // Always computed, do not edit
    label = "MSA TC801/FACESHIELD";
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "BLK", "GRN", "TAN" }; // Always computed, do not edit
    };
    class sordin : SordinBase
    {
        label = "sordin";
        alwaysSelectable = 1;
        values[] = { "BLK", "none", "OD", "TAN" }; // Always computed, do not edit
    };
};
