class cup_chdkz_unif_1 {
	label="ChDKZ Unif 1";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "KMY_URB_M81", "KMY_URB_WDL", "KMY_WDL", "KMY_WDL_M81" };
		class KMY_URB_M81
		{
			label = "KMY URB/M81";
			description = "Kamysh Urban / M81 Woodland";
			image = QPATHTOF(data\camo\chdkz\kmy_urb_m81.paa);
		};

		class KMY_URB_WDL
		{
			label = "KMY URB/WDL";
			description = "Kamysh Urban / Woodland";
			image = QPATHTOF(data\camo\chdkz\kmy_urb_wdl.paa);
		};

		class KMY_WDL
		{
			label = "KMY WDL";
			description = "Kamysh Woodland";
			image = QPATHTOF(data\camo\chdkz\kmy_wdl.paa);
		};

		class KMY_WDL_M81
		{
			label = "KMY WDL/M81";
			description = "Kamysh Woodland / M81 Woodland";
			image = QPATHTOF(data\camo\chdkz\kmy_wdl_m81.paa);
		};
	};
};
