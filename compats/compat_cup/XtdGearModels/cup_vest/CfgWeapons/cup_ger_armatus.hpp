class cup_ger_armatus {
	label="GER Armatus";
	author="Community Upgrade Project";
	options[]= { "camo", "belt" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BLK", "CYT", "FLCK", "OD", "TRPTRN" };
	};

	class belt
	{
		alwaysSelectable = 1;
		label = "Belt";
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
