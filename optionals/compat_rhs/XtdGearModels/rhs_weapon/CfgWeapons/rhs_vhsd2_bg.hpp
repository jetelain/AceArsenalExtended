class rhs_vhsd2_bg
{
    options[] = { "attachsys" };
    label="VHS-D2 (BG)";
    class attachsys : rhs_attachsys
    {
        label = "Optic";
        values[] = { "ct15x", "picatinny" };
        alwaysSelectable=1;
        class ct15x
        {
            label = "CT-1.5x";
        };
    };
};
