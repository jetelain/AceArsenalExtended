class rhs_6b23
{
    options[] = { "camo", "loadout", "collar" }; // Always computed, do not edit
    label="6B23";
    class camo
    {
        values[] = { "KHK", "EMR_SUM", "FLRA", "FLRA_EMR", "MTNLES", "OLI", "TTsKO_CDF_DIGI", "TTsKO_CDF_FRS", "TTsKO_CDF_MTN" }; // Always computed, do not edit
        alwaysSelectable=1;

        class FLRA_EMR
	    {
            label = "Flora & EMR-S";
            description = "Flora and EMR-Summer";
            image = "z\aceax\compats\RHS\data\camo\flora_and_emr.paa";
	    };
    };
    class loadout
    {
        values[] = { "None", "6Sh116", "6Sh116/VOG", "6Sh92", "6Sh92/Hdst.", "6Sh92/Hdst./Map", "6Sh92/Radio", "6Sh92/VOG", "6Sh92/VOG/Hdst.", "6Sh92/VOG/Radio", "Off.", "NCO/Crew", "Engi.", "Medic", "Rifl.", "Snip.", "Vydra-3M" }; // Always computed, do not edit
        alwaysSelectable=1;
    };
     class collar
    {
        values[] = { "Standard", "Spetsnaz" }; // Always computed, do not edit
        alwaysSelectable=1;
    };
};
