class rhs_6b47_alt
{
    options[] = { "goggles", "emrvar" };
    label="6B47 (Alt)";
    class goggles
    {
        label = "Goggles";
        values[] = { "None", "6B50" };
        alwaysSelectable=1;
    };

    class emrvar // There are three separate items called 6B47 (EMR) which have different models and camos. Why.
    {
        label = "Variant";
        values[] = { "1", "2", "3" };
        alwaysSelectable=1;
    };
};
