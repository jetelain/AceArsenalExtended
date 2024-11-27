class cup_beret_ger {
	label="Beret [GER]";
	author="Community Upgrade Project";
	options[]= { "camo", "unit", "headset" };

	class camo
	{
		alwaysSelectable = 1;
		label = "Color";
		values[] = {"GRN", "BLK", "RED" };
		class GRN
		{
			image = "#(rgb,8,8,3)color(0.08,0.14,0.11,1)";
		};

		class RED
		{
			label = "Red";
			image = "#(rgb,8,8,3)color(0.29,0.09,0.13,1)";
		};
	};

	class unit
	{
		alwaysSelectable = 1;
		label = "Unit";
		values[] = {"ARMOR", "INF", "KSK" };
		class ARMOR
		{
			label = "Armor";
		};

		class INF
		{
			label = "Infantry";
		};

		class KSK
		{
			label = "KSK";
			description = "Kommando Spezialkräfte";
		};
	};

	class headset
	{
		alwaysSelectable = 1;
		label = "Headset";
		values[] = {"no", "yes" };
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
