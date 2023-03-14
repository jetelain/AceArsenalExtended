class rhs_savz58p
{
    options[] = { "camo", "attachsys" };
    label="Sa vz. 58P";
    class camo
    {
        values[] = { "wood", "BLK" };
        alwaysSelectable=1;

        class wood
        {
            label = "Wood";
            //image="#(rgb,8,8,3)color(0.34,0.4,0.26,1)";
        };
    };

    class attachsys : rhs_attachsys
    {
        values[] = { "none", "picatinny" };
        alwaysSelectable=1;
    };
};
