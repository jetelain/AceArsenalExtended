class cup_patrolbag_6sh117 {
	label="Patrol Bag 6Sh117";
	author="Community Upgrade Project";
	options[]= { "camo", "shovel" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BGEDIGI", "EMR_SUM", "WHT" };
		class WHT
		{
			label = "Winter";
		};
	};

	class shovel
	{
		alwaysSelectable = 1;
		values[] = {"no", "yes"};
		label = CSTRING(Shovel);
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
