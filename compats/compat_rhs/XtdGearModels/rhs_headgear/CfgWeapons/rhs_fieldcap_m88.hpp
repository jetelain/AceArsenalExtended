class rhs_fieldcap_m88
{
    options[] = { "camo", "facing" };
    label="Fieldcap M88";
    class camo
    {
        values[] = { "AFGKA", "GRY", "KLMK", "M81", "TTsKO_AIR", "TTsKO", "TTsKO 2", "TTsKO_MLDV_BLUE", "TTsKO_MLDV_COLD", "TTsKO_MLDV_DESAT", "TTsKO_MLDV_HOT", "VSR", "VSR_2" };
        alwaysSelectable=1;
        class VSR_2
	    {
            label = "VSR 2";
            image = "z\aceax\compats\RHS\data\camo\vsr_cap.paa";
	    };
    };
    class facing
    {
        label = "Facing";
        values[] = { "Front", "Back" };
        alwaysSelectable=1;
    };
};
