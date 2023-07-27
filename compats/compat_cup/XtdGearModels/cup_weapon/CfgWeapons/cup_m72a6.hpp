class cup_m72a6
{
    options[] = { "camo" };
    label="M72A6";
    class camo
    {
        values[] = { "plain", "grafitti" };
        alwaysSelectable=1;

        class plain
        {
            label = "Plain";
            image = QPATHTOF(data\camo\weapons\cup_m72a6_plain.paa);
        };

        class grafitti
        {
            label = "Grafitti";
            image = QPATHTOF(data\camo\weapons\cup_m72a6_grafitti.paa);
        };
    };
};
