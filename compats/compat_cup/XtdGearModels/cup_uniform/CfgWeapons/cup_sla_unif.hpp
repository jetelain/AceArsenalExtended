class cup_sla_unif {
	label="SLA Uniform";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "Woodland", "Desert", "Urban", "Militia" };
		class Woodland
		{
			label = "Woodland";
			image = QPATHTOF(data\camo\sla\unif_wdl.paa);
		};

		class Desert
		{
			label = "Desert";
			image = QPATHTOF(data\camo\sla\unif_des.paa);
		};

		class Urban
		{
			label = "Urban";
			image = QPATHTOF(data\camo\sla\unif_urb.paa);
		};

		class Militia
		{
			label = "Militia";
			image = QPATHTOF(data\camo\sla\unif_militia.paa);
		};
	};
};
