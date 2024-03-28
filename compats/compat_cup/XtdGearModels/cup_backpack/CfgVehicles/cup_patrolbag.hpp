class cup_patrolbag {
	label="Patrol Bag";
	author="Community Upgrade Project";
	options[]= { "camo", "shovel" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BGEDIGI", "GRN", "DESPNK", "EMR_SUM", "WHT" };
		class WHT
		{
			label = "WNTR";
			description = "Winter";
		};
	};

	class shovel
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
