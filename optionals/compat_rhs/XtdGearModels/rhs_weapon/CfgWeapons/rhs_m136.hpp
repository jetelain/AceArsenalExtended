class rhs_m136
{
    options[] = { "ammo" };
    label="M136";
    class ammo
    {
        label = "Projectile";
        values[] = { "heat", "hedp", "hp" };
        alwaysSelectable=1;
        class heat
        {
            label = "HEAT";
            description = "High-Explosive Anti-Tank";
        };

        class hedp
        {
            label = "HEDP";
            description = "High-Explosive Dual Purpose";
        };

        class hp
        {
            label = "HP";
            description = "High Penetration";
        };
    };
};
