class tier1_hk416_d145
{
    label = "HK416 D14.5";
    author = "Tier One";
    options[] = {"camo", "stock", "handguard"};
    class camo
    {
        values[] = {"STD","DST","BDS"};
        class STD
        {
            label = "Standard";
        };
        class DST
        {
            label = "Desert";
            image = "#(rgb,8,8,3)color(0.61,0.54,0.45,1)";
        };
        class BDS
        {
            label = "Black/Desert";
            image = QPATHTOF(data\camo\bds.paa);
        };
    };
    class stock
    {
        label = "Stock";
        values[] = {"LMT","CTR","IMOD","MFT"};
        class LMT
        {
            label = "LMT";
        };
        class CTR
        {
            label = "CTR";
        };
        class IMOD
        {
            label = "IMOD";
        };
        class MFT
        {
            label = "MFT";
        };
    };

    class handguard
    {
        label = "Handguard";
        values[] = {"STD","SMR","RAHG","MW"};
        class STD
        {
            label = "Standard";
        };
        class SMR
        {
            label = "SMR";
        };
        class RAHG
        {
            label = "RAHG";
        };
        class MW
        {
            label = "Midwest";
        };
    };
};
