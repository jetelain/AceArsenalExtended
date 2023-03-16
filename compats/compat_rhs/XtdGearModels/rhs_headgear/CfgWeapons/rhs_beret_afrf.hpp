class rhs_beret_afrf
{
    options[] = { "unit", "variant" };
    label="Beret [AFRF]";
    class unit
    {
        label = "Unit";
        values[] = { "MP", "MVD", "OMON", "VDV", "VP" };
        alwaysSelectable=1;
    };
    class variant // For unit berets with multiple versions.
    {
        label = "Variant";
        values[] = { "1", "2", "3", "Early" };
        alwaysSelectable=0;
    };
};
