class AMF_opscore2
{
    options[] = { "camo", "goggles", "sordin" }; // Always computed, do not edit
    label = "GENTEX OPSCORE FAST BUMP";
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "BLACK", "GREY", "OD", "TAN" }; // Always computed, do not edit
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
        values[] = { "BLK", "OD", "TAN" }; // Always computed, do not edit
    };
};
