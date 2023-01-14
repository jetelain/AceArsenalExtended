class USP_PCU_G3C
{
    options[] = { "camo", "gloves", "kneepads", "pantscamo" }; // Always computed, do not edit
    label="PCU/Crye G3C";
    author="UnderSiege Productions";
    textureoptions[]={"mxcamo", "orcamo"};
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "BLK", "GRY", "MC", "MCA", "MCB", "MCD", "MCT" }; // Always computed, do not edit
    };
    class gloves
    {
        alwaysSelectable = 1;
        values[] = { "MX", "none", "OR" }; // Always computed, do not edit
        label="Gloves";
        changeingame=0;
        class MX
        {
            label="MX";
            description="Mechanix®";
        };
    };
    class kneepads
    {
        alwaysSelectable = 1;
        values[] = { "no", "yes" }; // Always computed, do not edit
        label="Knee Pads";
        changeingame=0;
    };
    class pantscamo
    {
        alwaysSelectable = 1;
        values[] = { "AMCU", "AOR1", "AOR2", "BLK", "DCU", "GRY", "KHK", "M81", "MC", "MCB", "MCD", "MCT", "MCW", "MM14", "MPD", "MPW", "MTN", "MTP", "NAV", "RBS", "RGR", "TSD", "TSW" }; // Always computed, do not edit
    };
    class top
    {
        values[]={"BLK", "GRY", "MC", "MCA", "MCB", "MCD", "MCT"};
    };
    class mxcamo : usp_mxcamo
    {
    };
    class orcamo : usp_orcamo
    {
    };
};
