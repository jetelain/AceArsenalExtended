class acebi_crew_helm
{
    options[] = { "faction", "camo" }; // Always computed, do not acebi
    label="Crew Helm";
    class faction
    {
        values[] = { "AAF", "CSAT", "LDF", "NATO" }; // Always computed, do not acebi
        alwaysSelectable=1;
    };
    class camo
    {
        values[] = { "HEX", "GHEX", "OLI", "RGR" }; // Always computed, do not acebi
        alwaysSelectable=0;
    };
};
