class cup_aks
{
    options[] = { "camo", "attachsys" };
    label = "AKS";

    class camo
    {
        label = "Material";
        values[] = { "steel", "gold" };
        alwaysSelectable=1;
        class steel
        {
            label = "Steel";
        };

        class gold
        {
            label = "Gold";
        };
    };

    class attachsys : cup_attachsys
    {
        label = "Optic";
        values[] = { "warsaw", "picatinny" };
        alwaysSelectable=1;
    };
};
