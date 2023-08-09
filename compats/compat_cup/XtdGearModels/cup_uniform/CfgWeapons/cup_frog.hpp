class cup_frog {
	label="FROG";
	author="Community Upgrade Project";
	options[]= { "camo", "version"

	};
	class camo {
		label="Camo";
		changeingame=0;
		alwaysSelectable = 1;
		values[]={ "MRPT_WD", "MRPT_D" };
	};
	class version {
		label="Version";
		changeingame=0;
		alwaysSelectable = 1;
		values[]={ "1", "2", "3", "4" };
	};

};
