class cup_famas_f1
{
    options[] = { "camo", "attachsys" };
    label="FAMAS F1";

    class camo
    {
        values[] = { "BLK", "CUP_FAMAS_ARD", "CUP_FAMAS_WDL" };
        
        class CUP_FAMAS_ARD
        {
            label = "Arid";
            image = QPATHTOF(data\camo\cup_famas_ard.paa);
        };

        class CUP_FAMAS_WDL
        {
            label = "Woodland";
            image = QPATHTOF(data\camo\cup_famas_wdl.paa);
        };
    };

    class attachsys : cup_attachsys
    {
        values[] = { "none", "ris" };
        alwaysSelectable=1;
    };
};
