class USP_OPSCORE_FASTFCV
{
    options[] = { "camera", "camo", "comms", "counterweight", "goggles", "light", "shroud" }; // Always computed, do not edit
    label="Ops-Core Fast MT Cover";
    author="UnderSiege Productions";
    class camera
    {
        label = "camera";
        alwaysSelectable = 1;
        values[] = { "CM", "none" }; // Always computed, do not edit
    };
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "OD", "TAN" }; // Always computed, do not edit
    };
    class comms
    {
        label = "comms";
        alwaysSelectable = 1;
        values[] = { "CT", "none" }; // Always computed, do not edit
    };
    class counterweight
    {
        label = "counterweight";
        alwaysSelectable = 1;
        values[] = { "CW", "none" }; // Always computed, do not edit
    };
    class goggles
    {
        label = "goggles";
        alwaysSelectable = 1;
        values[] = { "GG", "none" }; // Always computed, do not edit
    };
    class light
    {
        label = "light";
        alwaysSelectable = 1;
        values[] = { "none", "SF", "TL" }; // Always computed, do not edit
    };
    class shroud
    {
        label = "shroud";
        alwaysSelectable = 1;
        values[] = { "none", "SH" }; // Always computed, do not edit
    };
};
