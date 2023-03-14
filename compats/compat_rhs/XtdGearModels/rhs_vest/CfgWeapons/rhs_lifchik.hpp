class rhs_lifchik
{
    options[] = { "loadout" };
    label="Lifchik Rig";
    class loadout
    {
        label = "Loadout";
        values[] = { "stan", "light", "off", "vog" };
        alwaysSelectable=1;
        class stan
        {
            label = "Standard";
        };
        class light
        {
            label = "Light";
        };
        class off
        {
            label = "Officer";
        };
        class vog
        {
            label = "VOG";
        };
    };
};
