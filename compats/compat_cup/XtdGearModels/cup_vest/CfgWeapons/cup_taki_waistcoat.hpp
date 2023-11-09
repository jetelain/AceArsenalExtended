class cup_taki_waistcoat {
	label="Taki Waistcoat";
	author="Community Upgrade Project";
	options[]= { "camo", "belt" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "M81", "6CDP", "DCP", "BRN", "GRY", "LBRN" };
		class BRN
		{
			label = "Brown";
			image = "#(rgb,8,8,3)color(0.23,0.21,0.21,1)";
		};

		class LBRN
		{
			label = "Light Brown";
			image = "#(rgb,8,8,3)color(0.48,0.44,0.40,1)";
		};
	};

	class belt
	{
		alwaysSelectable = 1;
		label = "Ammo Belt";
		values[] = {"yes", "no" };
		class no
		{
			label = CSTRING(No);
		};

		class yes
		{
			label = CSTRING(Yes);
		};
	};
};
