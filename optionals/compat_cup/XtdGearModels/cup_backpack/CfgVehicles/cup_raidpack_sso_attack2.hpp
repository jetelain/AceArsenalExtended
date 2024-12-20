class cup_raidpack_sso_attack2 {
	label="Raid Backpack SSO Attack 2";
	author="Community Upgrade Project";
	options[]= { "camo", "rug" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "GRN", "KHK", "OLI", "SWAMP" };
		class GRN
		{
			image="#(rgb,8,8,3)color(0.25,0.27,0.24,1)";
		};
		class KHK
		{
			image="#(rgb,8,8,3)color(0.58,0.54,0.45,1)";
		};
		class OLI
		{
			image="#(rgb,8,8,3)color(0.25,0.24,0.23,1)";
		};
		class SWAMP
		{
			label = CSTRING(Swamp);
			image="#(rgb,8,8,3)color(0.33,0.31,0.19,1)";
		};
	};

	class rug
	{
		alwaysSelectable = 1;
		values[] = {"no", "yes"};
		label = CSTRING(Rug);
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
