class XtdGearModels
{
	class CamoBase;
	class SleevesBase;

	class CfgWeapons 
	{
		class amf_uniform_ubas
		{
			label = "Treillis F3/Ubas";
			author = "Arma Mod France";
			options[] = {"camo","sleeves"};
			class camo //: CamoBase
			{
				values[] = {"CE_TAN","CE_OD","DA","SERVAL"};
				class CE_TAN
				{
					label = "CE/TAN";
					image = QPATHTOF(data\ce_tan.paa);
				};
				class CE_OD
				{
					label = "CE/OD";
					image = QPATHTOF(data\ce_od.paa);
				};
				class DA
				{
					label = "DA";
					image = QPATHTOF(data\da.paa);
				};
				class SERVAL
				{
					label = "SERVAL";
					image = QPATHTOF(data\serval.paa);
				};
			};
			class sleeves //: SleevesBase
			{
				values[] = {"Full", "Half"};
			};
		};

		class amf_uniform_f3
		{
			label = "Treillis F3";
			author = "Arma Mod France";
			options[] = {"camo"};
			class camo //: CamoBase
			{
				values[] = {"CE","DA","SERVAL"};
				class CE
				{
					label = "CE";
					image = QPATHTOF(data\ce.paa);
				};
				class DA
				{
					label = "DA";
					image = QPATHTOF(data\da.paa);
				};
				class SERVAL
				{
					label = "SERVAL";
					image = QPATHTOF(data\serval.paa);
				};
			};
		};

		class amf_felin
		{
			label = "MSA Felin";
			author = "Arma Mod France";
			options[] = {"cover","sordin"};
			class cover
			{
				label = "Cover";
				changeingame = 0;
				values[] = {"none", "mount", "ce", "tan"};
				class none
				{
					label = "(none)";
				};
				class mount
				{
					label = "Mount";
				};
				class ce
				{
					label = "CE";
				};
				class tan
				{
					label = "TAN";
				};
			};
			class sordin
			{
				label = "MSA SORDIN";
				changeingame = 0;
				values[] = {"none", "od", "blk", "tan"};
				class none
				{
					label = "(none)";
				};
				class od
				{
					label = "OD";
				};
				class blk
				{
					label = "Black";
				};
				class tan
				{
					label = "TAN";
				};
			};

		};


	};
};
