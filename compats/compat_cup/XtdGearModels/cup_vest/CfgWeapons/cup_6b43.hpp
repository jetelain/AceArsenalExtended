class cup_6b43 {
	label="6B43";
	author="Community Upgrade Project";
	options[]= { "camo", "protection" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"EMR_SUM", "BGEDIGI" };
	};

	class protection
	{
		alwaysSelectable = 1;
		label = "Protection";
		values[] = {"NP", "SP", "CP", "SCP" };

		class NP
		{
			label = "Minimal";
			description = "No Pads";
		};

		class SP
		{
			label = "Shoulder";
			description = "Shoulder Pad";
		};

		class CP
		{
			label = "Crotch";
			description = "Crotch Pad";
		};

		class SCP
		{
			label = "Should/Crotch";
			description = "Shoulder and Crotch Pads";
		};
	};
};
