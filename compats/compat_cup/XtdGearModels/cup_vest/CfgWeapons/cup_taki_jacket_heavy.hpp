class cup_taki_jacket_heavy {
	label="Taki Jacket Heavy";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "M81", "DCP", "M81_DES", "BRN", "GRY", "LBRN" };

		class M81_DES
		{
			label = "M81 Des";
			description = "M81 Desert";
			image = QPATHTOF(data\camo\taki\m81_des.paa);
		};

		class BRN
		{
			label = "Brown";
			image = "#(rgb,8,8,3)color(0.31,0.24,0.22,1)";
		};

		class GRY
		{
			image = "#(rgb,8,8,3)color(0.27,0.30,0.31,1)";
		};

		class LBRN
		{
			label = "Light Brown";
			image = "#(rgb,8,8,3)color(0.43,0.40,0.36,1)";
		};
	};
};
