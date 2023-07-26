class rhs_m88
{
    options[] = { "camo", "coat", "boots" };
    label="M88";
    class camo
    {
        values[] = { "AFGKA", "GRY", "KLMK", "M81", "Spetsodezhda", "TTsKO", "TTsKO_ALT", "TTsKO_MLDV_BLUE", "TTsKO_MLDV_COLD", "TTsKO_MLDV_DESAT", "TTsKO_MLDV_HOT", "VSR", "VSR_2", "VSR_3" };
        alwaysSelectable=1;

        class VSR_2
	    {
            label = "VSR 2";
            image = "z\aceax\compats\RHS\data\camo\vsr_m88_1.paa";
	    };

        class VSR_3
	    {
            label = "VSR 3";
            image = "z\aceax\compats\RHS\data\camo\vsr_m88_2.paa";
	    };
    };
    class coat
    {
        label = "Coat";
        values[] = { "Standard", "Winter" };
        alwaysSelectable=1;
    };
    class boots
    {
        label = "Boots";
        values[] = { "Standard", "Sapogi" };
        alwaysSelectable=1;
    };
};
