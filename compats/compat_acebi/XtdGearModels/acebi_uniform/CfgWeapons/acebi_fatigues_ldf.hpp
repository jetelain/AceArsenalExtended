class acebi_fatigues_ldf
{
    options[] = { "top", "sleeves" };
    label="Fatigues [LDF]";
    class top
    {
        label = "Top";
        values[] = { "Standard", "Sweater", "Tank Top" };
        alwaysSelectable=1;
    };
    class sleeves
    {
        values[] = { "Full", "Half" };
        alwaysSelectable=0;
    };
};
