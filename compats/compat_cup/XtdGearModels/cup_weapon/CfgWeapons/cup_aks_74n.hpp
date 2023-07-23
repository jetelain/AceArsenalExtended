class cup_aks_74n
{
    options[] = { "attachsys" };
    label="AKS-74N";

    class attachsys : cup_attachsys
    {
        label = "Optic";
        values[] = { "warsaw", "picatinny" };
        alwaysSelectable=1;
    };
};
