class rhs3cb_fast_ballistic
{
    options[] = { "camo", "headset", "accessory" };
    label="FAST Ballistic";
    class camo
    {
        values[] = { "AOR1", "AOR2", "BLK", "CBR", "FOLGRN", "MC", "MC-Paint", "Paint", "RGR", "URBTAN"};
        alwaysSelectable=1;
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
