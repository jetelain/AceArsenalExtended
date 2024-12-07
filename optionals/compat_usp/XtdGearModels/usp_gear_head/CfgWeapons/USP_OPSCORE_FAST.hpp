class USP_OPSCORE_FAST
{
    options[] = { "camera", "camo", "comms", "counterweight", "goggles", "light" }; // Always computed, do not edit
    label="Ops-Core Fast MT";
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
        values[] = { "ABU", "AOR1", "AOR2", "CBR", "DCU", "FLECKTARN", "KTBANSHEE", "KTHIGHLANDER", "KTNEPTUNE", "KTNOMAD", "KTTYPHON", "KTYETI", "M81", "MC", "MCA", "MCD", "MCT", "OD", "RGR", "TAN", "TGS", "TROPENTARN", "UCP" }; // Always computed, do not edit
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
};
