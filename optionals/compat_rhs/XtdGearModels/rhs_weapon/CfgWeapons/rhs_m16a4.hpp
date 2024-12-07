class rhs_m16a4
{
    options[] = { "handle", "stock" };
    label="M16A4";
    class handle
    {
        label = "Carryhandle";
        values[] = { "no", "yes" };
        alwaysSelectable=1;
        class no
        {
            label = "No";
        };

        class yes
        {
            label = "Yes";
        };
    };

    class stock
    {
        label = "Stock";
        values[] = { "standard", "imod" };
        alwaysSelectable=1;
        class standard
        {
            label = "Standard";
        };

        class imod
        {
            label = "IMOD";
        };
    };
};
