class rhs_6b45
{
    options[] = { "camo", "loadout" };
    label="6B45";
    class camo
    {
        values[] = { "EMR_SUM", "DESPNK" };
    };
    class loadout
    {
        values[] = { "None", "holster", "light", "mg", "off", "rifle1", "rifle2", "vog" };
        alwaysSelectable=1;
        class holster
        {
            label = "Holster";
        };
        class light
        {
            label = "Light";
        };
        class mg
        {
            label = "Machinegunner";
        };
        class off
        {
            label = "Officer";
        };
        class rifle1
        {
            label = "Rifleman 1";
        };
        class rifle2
        {
            label = "Rifleman 2";
        };
        class vog
        {
            label = "VOG";
        };
    };
};
