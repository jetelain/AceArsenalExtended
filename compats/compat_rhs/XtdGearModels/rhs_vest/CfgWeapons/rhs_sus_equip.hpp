class rhs_sus_equip
{
    options[] = { "loadout" };
    label="Suspender Equip.";
    class loadout
    {
        values[] = { "ak", "rifle", "rifle_light", "sks" };
        alwaysSelectable=1;
        class ak
        {
            label = "AK Chest.";
            description = "AK Chestrig";
        };
        class rifle
        {
            label = "Rifleman";
        };
        class rifle_light
        {
            label = "Rifleman Li.";
            description = "Rifleman Light";
        };
        class sks
        {
            label = "SKS";
        };
    };
};
