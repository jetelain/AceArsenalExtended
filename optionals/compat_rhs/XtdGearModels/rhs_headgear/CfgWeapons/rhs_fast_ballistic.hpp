class rhs_fast_ballistic
{
    options[] = { "camo", "headset", "accessory" };
    label="FAST Ballistic";
    class camo
    {
        values[] = { "AOR1", "AOR2", "BLK", "CBR", "FOLGRN", "MC", "MCPaint", "Paint", "RGR", "URBTAN"};
        alwaysSelectable=1;
        class MCPaint
        {
            label = "MC (Paint)";
            description = "MultiCam (Paint)";
            image = "z\aceax\compats\RHS\data\camo\mc_opscore.paa";
        };

        class Paint // Unspecified paint
	    {
            label = "Paint";
            image = "z\aceax\compats\RHS\data\camo\paint_opscore.paa";
	    };
    };
    class headset
    {
        label = "Headset";
        values[] = { "No", "Yes"};
        alwaysSelectable=1;
    };
    class accessory
    {
        label = "Accessory";
        values[] = { "None", "NSW", "Camera", "NSW & Cam."};
        alwaysSelectable=1;
    };
};
