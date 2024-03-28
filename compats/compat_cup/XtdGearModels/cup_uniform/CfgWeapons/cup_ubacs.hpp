class cup_ubacs {
	label = "UBACS";
	author = "Community Upgrade Project";
	options[]= { "camo", "sleeves", "top", "gloves", "kneepads", "diving" };
	class camo
	{
		alwaysSelectable = 1;
		values[] = { "MTP", "DDPM", "DPM" };
	};
	class sleeves
	{
		alwaysSelectable = 1;
		values[] = { "Full", "Half" };
	};

	class top
	{
		alwaysSelectable = 1;
		label = "Top";
		values[] = { "standard", "tshirt" };
		class standard
		{
			label = "Standard";
		};

		class tshirt
		{
			label = "T-Shirt";
		};
	};

	class gloves
	{
		alwaysSelectable = 1;
		label = "Gloves";
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

	class kneepads
	{
		alwaysSelectable = 1;
		label = "Kneepads";
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

	class diving
	{
		alwaysSelectable = 1;
		label = "Diving Gear";
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
