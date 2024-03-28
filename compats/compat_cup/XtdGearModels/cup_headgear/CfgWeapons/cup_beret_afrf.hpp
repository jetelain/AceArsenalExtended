class cup_beret_afrf {
	label="Beret [AFRF]";
	author="Community Upgrade Project";
	options[]= { "unit" };

	class unit
	{
		alwaysSelectable = 1;
		label = "Unit";
		values[] = {"SPTNZ", "VDV" };
		class SPTNZ
		{
			label = "Spetsnaz";
		};

		class VDV
		{
			label = "VDV";
		};
	};
};
