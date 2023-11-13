class tier1_mk46_mod1
{
    options[] = { "camo", "furniture" };
    label="Mk 46 Mod 1";
    class camo
    {
        values[] = { "BLK", "DES" };
        alwaysSelectable=1;

        class DES
        {
            label = "Desert";
            image = "#(rgb,8,8,3)color(0.71,0.62,0.44,1)";
        };
    };

    class furniture
    {
        label = "Furniture";
        values[] = { "PARA", "SAVIT" };
        alwaysSelectable=1;

        class PARA
        {
            label = "Para";
        };

        class SAVIT
        {
            label = "Savit";
        };
    };
};
