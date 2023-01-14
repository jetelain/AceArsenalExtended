class USP_TSHIRT_G3C
{
    options[] = { "camo", "gloves", "inside", "kneepads", "pantscamo" }; // Always computed, do not edit
    label="Tshirt/Crye G3C";
    author="UnderSiege Productions";
    textureoptions[]={"mxcamo", "orcamo"};
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "BLK", "CBR", "GRN", "GRY", "NAV" }; // Always computed, do not edit
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
    class inside
    {
        alwaysSelectable = 1;
        values[] = { "no", "yes" }; // Always computed, do not edit
        label="Tshirt inside pant";
        changeingame=1;
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
        values[] = { "AOR1", "AOR2", "BLK", "GRY", "KHK", "M81", "MC", "MCB", "MCD", "MCT", "MCW", "NAV", "RGR", "TSD", "TSW" }; // Always computed, do not edit
    };
    class top
    {
        values[]={"BLK", "CBR", "GRY", "GRN", "NAV"};
    };
    class mxcamo : usp_mxcamo
    {
    };
    class orcamo : usp_orcamo
    {
    };
};
