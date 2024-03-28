class cup_pmc_shirt_jeans {
	label="PMC Shirt/Jeans";
	author="Community Upgrade Project";
	options[]= { "camo", "gloves" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BLK_KHK", "PLD_BLK", "PLD_BLU", "WNE_BLU" };

		class BLK_KHK
		{
			label = "Blk/Khk";
			description = "Black/Khaki";
			image = QPATHTOF(data\camo\pmc\shrtjn_blk_khk.paa);
		};

		class PLAID_BLK
		{
			label = "Pld/Blk";
			description = "Plaid/Black";
			image = QPATHTOF(data\camo\pmc\shrtjn_plaid_blk.paa);
		};

		class PLD_BLK
		{
			label = "Pld/Blk";
			description = "Plaid/Black";
			image = QPATHTOF(data\camo\pmc\shrtjn_plaid_blk.paa);
		};

		class PLD_BLU
		{
			label = "Pld/Blu";
			description = "Plaid/Blue";
			image = QPATHTOF(data\camo\pmc\shrtjn_plaid_blu.paa);
		};

		class WNE_BLU
		{
			label = "Wne/Blu";
			description = "Wine Red/Blue";
			image = QPATHTOF(data\camo\pmc\shrtjn_wne_blu.paa);
		};
	};

	class gloves
	{
		alwaysSelectable = 1;
		label = "Kneepads/Gloves";
		values[]={ "none", "KP", "BOTH" };

		class none
		{
			label = CSTRING(None);
		};

		class KP
		{
			label = CSTRING(Kneepads);
		};

		class BOTH
		{
			label = CSTRING(Both);
		};
	};
};
