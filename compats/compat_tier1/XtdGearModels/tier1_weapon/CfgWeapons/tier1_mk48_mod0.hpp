class tier1_mk48_mod0
{
    options[] = { "camo", "furniture" };
    label="Mk 48 Mod 0";
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
        values[] = { "STD", "PARA" };
        alwaysSelectable=1;

        class STD
        {
            label = "Standard";
        };

        class PARA
        {
            label = "Para";
        };
    };
};
