class cup_chdkz_unif_2 {
	label="ChDKZ Unif 2";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "KMY_URB_SMOG", "KMY_WDL_SMOG", "KMY_WDL_URB", "SMOG" };
		class KMY_URB_SMOG
		{
			label = "KMY URB/Smog";
			description = "Kamysh Urban / Smog";
			image = QPATHTOF(data\camo\chdkz\kmy_urb_smog.paa);
		};

		class KMY_WDL_SMOG
		{
			label = "KMY WDL/Smog";
			description = "Kamysh Woodland / Smog";
			image = QPATHTOF(data\camo\chdkz\kmy_wdl_smog.paa);
		};

		class KMY_WDL_URB
		{
			label = "KMY WDL/URB";
			description = "Kamysh Woodland / Urban";
			image = QPATHTOF(data\camo\chdkz\kmy_wdl_urb.paa);
		};

		class SMOG
		{
			label = "Smog";
			image = QPATHTOF(data\camo\chdkz\smog.paa);
		};
	};
};
