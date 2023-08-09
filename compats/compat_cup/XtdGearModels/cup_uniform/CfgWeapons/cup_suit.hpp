class cup_suit {
	label="Suit";
	author="Community Upgrade Project";
	options[]= { "camo", "jacket" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BLK", "BRN", "MRN" };

		class BLK
		{
			image = "#(rgb,8,8,3)color(0.10,0.11,0.13,1)";
		};

		class BRN
		{
			label = "Brown";
			image = "#(rgb,8,8,3)color(0.19,0.15,0.15,1)";
		};

		class MRN
		{
			label = "Maroon";
			image = "#(rgb,8,8,3)color(0.22,0.09,0.10,1)";
		};
	};

	class jacket
	{
		label = "Jacket";
		changeingame=0;
		values[] = {"no", "yes"};
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
