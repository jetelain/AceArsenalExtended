class acebi_parade_uniform
{
    options[] = { "faction", "decorated" }; // Always computed, do not acebi
    label="Parade Uniform";
    class faction
    {
        values[] = { "AAF", "CSAT", "LDF", "USA" }; // Always computed, do not acebi
        alwaysSelectable=1;
    };
    class decorated
    {
        label = "Decorated"
        values[] = { "No", "Yes" }; // Always computed, do not acebi
        alwaysSelectable=1;
    }
};
