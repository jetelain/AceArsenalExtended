class acebi_vrsuit
{
    options[] = { "faction" }; // Always computed, do not acebi
    label="VR Suit";
    class faction
    {
        values[] = { "AAF", "CIV", "CSAT", "NATO" }; // Always computed, do not acebi
        alwaysSelectable=1;
        class CIV
        {
            label = "Civilians";
            image="#(rgb,8,8,3)color(0.4,0,0.5,1)";
        };
    };
};
