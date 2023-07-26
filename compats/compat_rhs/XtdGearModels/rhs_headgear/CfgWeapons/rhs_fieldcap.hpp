class rhs_fieldcap
{
    options[] = { "camo", "helmet" };
    label="Fieldcap";
    class camo
    {
        values[] = { "FLRA", "EMR_SUM", "EMR_2", "Izlom", "MTNLES", "KHK", "TTsKO_CDF_DIGI", "TTsKO_CDF_FRS", "TTsKO_CDF_MTN", "TTsKO_CDF_URB", "VSR" };
        alwaysSelectable=1;
        class EMR_2
	{
		label = "EMR-Sum 2";
        description = "EMR-Summer";
		image = "z\aceax\compats\RHS\data\camo\emr_cap.paa";
	};
    };
    class helmet
    {
        label = "Chest-Slung Helmet";
        values[] = { "None", "6B27M" };
        alwaysSelectable=0;
    };
};
