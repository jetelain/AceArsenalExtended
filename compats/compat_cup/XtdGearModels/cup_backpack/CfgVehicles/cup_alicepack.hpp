class cup_alicepack {
	label="ALICE Pack";
	author="Community Upgrade Project";
	options[]= { "camo", "bedroll" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "KHK", "OD" };
	};

	class bedroll
	{
		alwaysSelectable = 1;
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
