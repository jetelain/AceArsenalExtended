class rhs_m4
{
    options[] = { "handle", "stock" };
    label="M4";
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
        values[] = { "standard", "magpull" };
        alwaysSelectable=1;
        class standard
        {
            label = "Standard";
        };

        class magpull
        {
            label = "Magpull";
        };
    };
};
