class cup_acr_fatigues {
	label = "ACR Fatigues";
	author = "Community Upgrade Project";
	options[] = { "camo", "top", "sleeves" };
	class camo {
		alwaysSelectable = 1;
		hiddenselection = "camo";
		values[]={ "VZ85_DES", "VZ95" };
	};

	class top {
		alwaysSelectable = 1;
		values[]={ "Normal", "MOUT", "TShirt" };
	};

	class sleeves {
		alwaysSelectable = 0;
		values[]={ "Full", "Quarter" };
	};
};
