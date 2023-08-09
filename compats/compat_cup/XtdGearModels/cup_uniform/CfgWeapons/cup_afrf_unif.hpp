class cup_afrf_unif {
	label="AFRF Uniform";
	author="Community Upgrade Project";
	options[]= { "camo", "sleeves", "gloves", "kneepads", "branch" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "EMR_SUM", "TTsKO", "VSR", "VSR_WORN", "FLRA", "FLRA_WORN", "KSOR", "AFGKA", "DESPNK", "BGEDIGI" };

		class FLRA_WORN
		{
			label = "Flora Worn";
			image = QPATHTOF(data\camo\flra_worn.paa);
		};

		class KSOR
		{
			label = "KSOR";
			image = QPATHTOF(data\camo\ksor.paa);
		};

		class VSR_WORN
		{
			label = "VSR Worn";
			image = QPATHTOF(data\camo\vsr_worn.paa);
		};

		class TTsKO
		{
			label = "TTsKO";
			image = QPATHTOF(data\camo\ttsko_afrf.paa);
		};
	};

	class sleeves
	{			
		values[]={ "Full", "Quarter" };
		alwaysSelectable = 1;
	};

	class gloves
	{
		label="Gloves";
		values[]={ "No", "Yes" };
		alwaysSelectable = 1;
	};

	class kneepads
	{
		label="Kneepads";
		values[]={ "No", "Yes" };
		alwaysSelectable = 1;
	};
	class branch
	{
		label="Branch";
		values[]={ "Army", "VDV", "ODKB VDV", "VKPO", "VKPO VDV", "Commander" };
		alwaysSelectable = 1;
	};
};
