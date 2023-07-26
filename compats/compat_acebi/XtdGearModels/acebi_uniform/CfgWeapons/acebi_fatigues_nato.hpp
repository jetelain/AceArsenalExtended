class acebi_fatigues_nato
{
    options[] = { "camo", "top", "sleeves" };
    label="Fatigues [NATO]";
    class camo
    {
        values[] = { "MTP", "Tropic", "M81" };
        alwaysSelectable=1;
    };
    class top
    {
        label = "Top";
        values[] = { "Standard", "Tee" };
        alwaysSelectable=1;
    };
    class sleeves
    {
        values[] = { "Full", "Half" };
        alwaysSelectable=0;
    };
};
