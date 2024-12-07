class rhs_belt_equip
{
    options[] = { "loadout" };
    label="Belt Equipment";
    class loadout
    {
        values[] = { "6sh46", "6sh46_alt", "auto", "gl", "holster", "rifle", "rifle_alt", "sks", "svd" };
        alwaysSelectable=1;
        class 6sh46
        {
            label = "6Sh46";
        };
        class 6sh46_alt
        {
            label = "6Sh46/Alt";
        };
        class auto
        {
            label = "Autorifl.";
            description = "Autorifleman";
        };
        class gl
        {
            label = "Grenadier";
        };
        class holster
        {
            label = "Holster";
        };
        class rifle
        {
            label = "Rifleman";
        };
        class rifle_alt
        {
            label = "Rifleman/Alt";
        };
        class sks
        {
            label = "SKS";
        };
        class svd
        {
            label = "SVD";
        };
    };
};
