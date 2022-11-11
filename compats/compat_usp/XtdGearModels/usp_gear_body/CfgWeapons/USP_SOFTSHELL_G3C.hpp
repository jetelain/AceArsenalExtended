class USP_SOFTSHELL_G3C
{
    options[] = { "camo", "gloves", "kneepads", "pantscamo" }; // Always computed, do not edit
    label="SoftShell/Crye G3C";
    author="UnderSiege Productions";
    textureoptions[]={"mxcamo", "orcamo", "flagleft"};
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "BLK", "CBR", "GRY", "MC", "RGR" }; // Always computed, do not edit
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
        values[] = { "AOR1", "AOR2", "BLK", "GRY", "KHK", "M81", "MC", "MCB", "MCD", "MCT", "MCW", "NAV", "RGR", "TSD", "TSW" }; // Always computed, do not edit
    };
    class top
    {
        values[]={"BLK", "CBR", "GRY", "MC", "RGR"};
    };
    class mxcamo : usp_mxcamo
    {
    };
    class orcamo : usp_orcamo
    {
    };
    class flagleft
    {
        label="Left Shoulder";
        hiddenselection="_FlagLeft";
        values[]={"DEFAULT", "usa_flag_base", "usa_flag_blk", "usa_flag_grn", "usa_flag_mc", "usa_flag_tan", "usa_flag_tgr"};
        changeingame=0;
        centerImage=1;
        class DEFAULT
        {
            label="(none)";
            texture="";
        };
        class usa_flag_base
        {
            texture="\usp_gear_core\data\id\usa_flag_base_co.paa";
            image="\usp_gear_core\data\id\usa_flag_base_co.paa";
            label="";
            description="usa_flag_base";
        };
        class usa_flag_blk
        {
            texture="\usp_gear_core\data\id\usa_flag_blk_co.paa";
            image="\usp_gear_core\data\id\usa_flag_blk_co.paa";
            label="";
            description="usa_flag_blk";
        };
        class usa_flag_grn
        {
            texture="\usp_gear_core\data\id\usa_flag_grn_co.paa";
            image="\usp_gear_core\data\id\usa_flag_grn_co.paa";
            label="";
            description="usa_flag_grn";
        };
        class usa_flag_mc
        {
            texture="\usp_gear_core\data\id\usa_flag_mc_co.paa";
            image="\usp_gear_core\data\id\usa_flag_mc_co.paa";
            label="";
            description="usa_flag_mc";
        };
        class usa_flag_tan
        {
            texture="\usp_gear_core\data\id\usa_flag_tan_co.paa";
            image="\usp_gear_core\data\id\usa_flag_tan_co.paa";
            label="";
            description="usa_flag_tan";
        };
        class usa_flag_tgr
        {
            texture="\usp_gear_core\data\id\usa_flag_tgr_co.paa";
            image="\usp_gear_core\data\id\usa_flag_tgr_co.paa";
            label="";
            description="usa_flag_tgr";
        };
    };
};
