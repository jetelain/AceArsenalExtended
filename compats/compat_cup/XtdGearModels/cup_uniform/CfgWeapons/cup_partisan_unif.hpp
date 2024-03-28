class cup_partisan_unif {
	label="Partisan Unif";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo 
	{
		alwaysSelectable = 1;
		values[]={ "TTsKO", "TTsKO_SLA", "VSR_MIX1", "VSR_MIX2" };
		class TTsKO
		{
			label = "TTsKO";
			image = QPATHTOF(data\camo\sla\unif_ttsko.paa);
		};

		class TTsKO_SLA
		{
			label = "TTsKO/SLA";
			image = QPATHTOF(data\camo\sla\unif_ttsko_mix.paa);
		};

		class VSR_MIX1
		{
			label = "VSR Mix 1";
			image = QPATHTOF(data\camo\sla\unif_vsr_mix1.paa);
		};

		class VSR_MIX2
		{
			label = "VSR Mix 2";
			image = QPATHTOF(data\camo\sla\unif_vsr_mix2.paa);
		};
	};
};
