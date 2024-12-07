class cup_6b45 {
	label="6B45";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout", "protection" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"EMR_SUM", "BGEDIGI", "DESPNK", "GRN" };

		class GRN
		{
			image = "#(rgb,8,8,3)color(0.43,0.39,0.24,1)";
		};
	};


	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "MG", "GL" };
	};

	class protection
	{
		alwaysSelectable = 1;
		label = "Protection";
		values[] = {"NP", "SP", "CP", "SCP", "SCTP" };

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

		class SCTP
		{
			label = "Full";
			description = "Shoulder, Crotch, and Thigh Pads";
		};
	};
};
