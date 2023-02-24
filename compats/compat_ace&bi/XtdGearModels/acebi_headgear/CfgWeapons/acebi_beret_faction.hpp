class acebi_beret_faction
{
    options[] = { "faction", "rank" }; // Always computed, do not acebi
    label="Beret [Faction]";
    class faction
    {
        values[] = { "Gendarmerie", "CSAT", "LDF", "NATO" }; // Always computed, do not acebi
        alwaysSelectable=1;
    };
    class rank
    {
        values[] = { "Unspecified", "Colonel" }; // Always computed, do not acebi
        alwaysSelectable=1;
    };
};
