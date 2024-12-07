class USP_OPSCORE_FASTMT_FCV
{
    options[] = { "camera", "camo", "comms", "counterweight", "goggles", "light", "shroud" }; // Always computed, do not edit
    label = "[USP] Ops-Core Fast MT FaceCover";
    class camera
    {
        label = "camera";
        values[] = { "CM", "none" }; // Always computed, do not edit
    };
    class camo
    {
        values[] = { "OD", "TAN" }; // Always computed, do not edit
    };
    class comms
    {
        label = "comms";
        values[] = { "CT", "none" }; // Always computed, do not edit
    };
    class counterweight
    {
        label = "counterweight";
        values[] = { "CW", "none" }; // Always computed, do not edit
    };
    class goggles
    {
        label = "goggles";
        values[] = { "GG", "none" }; // Always computed, do not edit
    };
    class light
    {
        label = "light";
        values[] = { "none", "SF", "TL" }; // Always computed, do not edit
    };
    class shroud
    {
        label = "shroud";
        values[] = { "none", "SH" }; // Always computed, do not edit
    };
};
