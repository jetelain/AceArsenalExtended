class cup_6sh122 {
	label="6Sh112";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "ATM", "BGEDIGI", "EMR_DES", "DESPNK", "SUM", "WTNR" };
		class ATM
		{
			label = "Autumn";
			image = QPATHTOF(data\camo\6sh112_atm.paa);
		};

		class SUM
		{
			label = "Summer";
			image = QPATHTOF(data\camo\6sh112_sum.paa);
		};

		class WNTR
		{
			label = "Winter";
			image="\z\aceax\addons\gearinfo\data\camo\wht.paa"; // It draws from another addon so no script shorthand here.
		};
	};
};
