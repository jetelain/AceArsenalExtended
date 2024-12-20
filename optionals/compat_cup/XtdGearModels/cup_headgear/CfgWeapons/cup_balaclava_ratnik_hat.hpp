class cup_balaclava_ratnik_hat {
	label="Balaclava [Ratnik]";
	author="Community Upgrade Project";
	options[]= { "camo", "nose", "microphone" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"ATACS_FG", "ATACS_FG_ALT", "DESPNK", "DESTAN", "EMR_ATM", "EMR_SUM", "DGRN", "GRN", "OLI", "SGG", "WNTR" };
		
		class ATACS_FG
		{
			image = QPATHTOF(data\camo\atacs_fg_balaclava.paa);
		};

		class ATACS_FG_ALT
		{
			label = CSTRING(ATACSFG_Alt_Label);
			description = CSTRING(ATACSFG_Alt_description);
			image = QPATHTOF(data\camo\atacs_fg_balaclava_alt.paa);
		};
		class DESPNK
		{
			image = "#(rgb,8,8,3)color(0.85,0.80,0.78,1)";
		};
		class DESTAN
		{
			label = CSTRING(DesertTan_Label);
			description = CSTRING(DesertTan_Description);
			image = "#(rgb,8,8,3)color(0.79,0.63,0.49,1)";
		};
		class DGRN
		{
			label = CSTRING(DarkGreen_Label);
			description = CSTRING(DarkGreen_Description);
			image = "#(rgb,8,8,3)color(0.26,0.31,0.16,1)";
		};
		class GRN
		{
			
			image = "#(rgb,8,8,3)color(0.42,0.49,0.27,1)";
		};
		class OLI
		{
			image = "#(rgb,8,8,3)color(0.46,0.42,0.29,1)";
		};
		class SGG
		{
			label = CSTRING(Sage_Label);
			description = CSTRING(Sage_Description);
			image = "#(rgb,8,8,3)color(0.69,0.78,0.66,1)";
		};
		class WNTR
		{
			label = CSTRING(Winter_Label);
			description = CSTRING(Winter_Description);
			image = "#(rgb,8,8,3)color(0.87,0.87,0.87,1)";
		};
	};

	class nose
	{
		alwaysSelectable = 1;
		label = CSTRING(BalaclavaNoseCover);
		changeingame = 1;
		values[] = {"on", "off" };
		class on
		{
			label = CSTRING(BalaclavaOnNose_Label);
			actionLabel = CSTRING(BalaclavaOnNose_Action);
		};

		class off
		{
			label = CSTRING(BalaclavaOffNose_Label);
			actionLabel = CSTRING(BalaclavaOffNose_Action);
		};
	};
	class microphone
	{
		alwaysSelectable = 1;
		values[] = { "no", "yes" };
		label = CSTRING(Microphone);
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
