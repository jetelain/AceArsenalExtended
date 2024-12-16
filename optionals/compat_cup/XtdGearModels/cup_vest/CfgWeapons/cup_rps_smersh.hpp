class cup_rps_smersh {
	label="RPS Smersh";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "CBR", "GRN", "OLI", "WTHR" };

		class GRN
		{
			image = "#(rgb,8,8,3)color(0.23,0.25,0.22,1)";
		};

		class OLI
        {
           image = "#(rgb,8,8,3)color(0.34,0.32,0.31,1)";
        };

		class WTHR
		{
			label = "WTHR";
			description = "Weathered";
			image = "#(rgb,8,8,3)color(0.64,0.60,0.50,1)";
		};
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"RIFL", "MG", "MG_LIGHT", "MG_SPP", "DMR", "GL", "GL_SPP" };
		class MG_LIGHT
		{
			label = "MG Light";
			description = "Machine Gunner Light";
		};
		class MG_SPP
		{
			label = "MG/SPP";
			description = "Machine Gunner/SPP Bag";
		};
		class GL_SPP
		{
			label = "GL/SPP";
			description = "Grenadier/SPP Bag";
		};
	};
};
