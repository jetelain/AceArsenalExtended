class USP_OVERWHITE_G3C
{
    options[] = { "camo", "gloves", "kneepads", "pantscamo" }; // Always computed, do not edit
    label="Overwhite/Crye G3C";
    author="UnderSiege Productions";
    textureoptions[]={"mxcamo", "orcamo"};
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "BLK", "GRN", "MCA", "TAN" }; // Always computed, do not edit
    };
    class gloves
    {
        alwaysSelectable = 1;
        values[] = { "MX", "MX2", "none", "OR" }; // Always computed, do not edit
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
        values[] = { "G3", "G4", "no" }; // Always computed, do not edit
        label="Knee Pads";
        changeingame=0;
    };
    class pantscamo
    {
        alwaysSelectable = 1;
        values[] = { "AMCU", "AOR1", "AOR2", "BLK", "DCU", "GRY", "KHK", "M81", "MC", "MCB", "MCD", "MCT", "MCW", "MM14", "MPD", "MPW", "MTN", "NAV", "RBS", "RGR", "TSD", "TSW", "UCP" }; // Always computed, do not edit
    };
    class top
    {
        values[]={"MCA", "BLK", "GRN", "TAN"};
    };
    class mxcamo : usp_mxcamo
    {
        hiddenselection="Camo4";
    };
    class orcamo : usp_orcamo
    {
        hiddenselection="Camo3";
    };
};
