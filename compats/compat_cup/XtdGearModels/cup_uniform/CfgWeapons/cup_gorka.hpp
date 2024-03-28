class cup_gorka {
	label = "Gorka";
	author = "Community Upgrade Project";
	options[] = { "camo", "gloves" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = { "GRN", "PTZN_ATM", "PTZN_SUM" };
		class GRN
		{
			image = "#(rgb,8,8,3)color(0.33,0.31,0.26,1)";
		};
		class PTZN_ATM
		{
			label = "Partizan Atm";
			description = "Partizan Autumn";
			image = QPATHTOF(data\camo\gorka_ptzn_aut.paa);
		};

		class PTZN_SUM
		{
			label = "Partizan Sum";
			description = "Partizan Summer";
			image = QPATHTOF(data\camo\gorka_ptzn_sum.paa);
		};
	};

	class gloves
	{
		label = "Gloves/Kneepads";
		alwaysSelectable = 1;
		values[] = { "None", "Gloves", "Both" };

		class None
		{
			label = "None";
		};

		class Gloves
		{
			label = "Gloves";
		};

		class Both
		{
			label = "Both";
		};
	};
};				
