class USP_G3F
{
    options[] = { "camo", "gloves", "kneepads", "pants" }; // Always computed, do not edit
    label="Crye G3F";
    author="UnderSiege Productions";
    textureoptions[]={"pantscamo", "mxcamo", "orcamo"};
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "3CD", "AOR1", "AOR2", "BLK", "KHK", "M81", "MC", "MCA", "MCB", "MCD", "MCT", "NWU", "RGR", "UCP" }; // Always computed, do not edit
    };
    class gloves
    {
        alwaysSelectable = 1;
        values[] = { "MX", "none", "OR" }; // Always computed, do not edit
    };
    class kneepads
    {
        label = "kneepads";
        alwaysSelectable = 1;
        values[] = { "no", "yes" }; // Always computed, do not edit
    };
    class pants
    {
        alwaysSelectable = 1;
        values[] = { "Combat", "Field" }; // Always computed, do not edit
        label="Pants";
        changeingame=0;
        class Field
        {
            label="Field";
        };
        class Combat
        {
            label="Combat";
        };
    };
    class pantscamo : usp_g3c_pantscamo
    {
        requires[]={{"pants", "Combat"}};
    };
};
