class acebi_parade_uniform
{
    options[] = { "faction", "decorated" };
    label="Parade Uniform";
    class faction
    {
        values[] = { "AAF", "CSAT", "LDF", "USA" };
        alwaysSelectable=1;
    };
    class decorated
    {
        label = "Decorated";
        values[] = { "No", "Yes" };
        alwaysSelectable=1;
    };
};
