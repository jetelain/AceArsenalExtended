class rhs_m4_m203s
{
    options[] = { "handle" };
    label="M4 (M203S)";
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
};
