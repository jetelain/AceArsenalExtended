class rhs_spcs
{
    options[] = { "camo", "loadout" }; // Always computed, do not edit
    label="SPCS";
    class camo
    {
        values[] = { "OEF_CP", "UCP" }; // Always computed, do not edit
        alwaysSelectable=1;
    };
    class loadout
    {
        values[] = { "None", "Crewman", "Grenadier", "Machinegunner", "Medic", "Rifleman Alt", "Rifleman", "SAW", "Sniper", "Squad Lead.", "Team Lead.", "Team Lead. Alt" }; // Always computed, do not edit
        alwaysSelectable=1;
    };
};
