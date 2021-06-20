class XtdGearModels
{
	class CamoBase;
	class SleevesBase;

	class SordinBase
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
			descritpion = "Olive Drab";
			image="#(rgb,8,8,3)color(0.3,0.29,0.24,1)";
		};
		class blk
		{
			label = "Black";
			image="#(rgb,8,8,3)color(0.1,0.1,0.1,1)";
		};
		class tan
		{
			label = "TAN";
			image="#(rgb,8,8,3)color(0.49,0.43,0.33,1)";
		};
	};

	class CfgWeapons 
	{
		class amf_uniform_ubas
		{
			label = "Treillis F3/Ubas";
			author = "Arma Mod France";
			options[] = {"camo","sleeves"};
			class camo // coventional name
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
			class sleeves // coventional name
			{
				values[] = {"Full", "Half"};
			};
		};

		class amf_uniform_f3
		{
			label = "Treillis F3";
			author = "Arma Mod France";
			options[] = {"camo"};
			class camo // coventional name
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
					descritpion = "Centre-Europe";
					image = QPATHTOF(data\ce.paa);
				};
				class tan
				{
					label = "TAN";
					image="#(rgb,8,8,3)color(0.49,0.43,0.33,1)";
				};
			};
			class sordin : SordinBase {};
		};



		class amf_tc3000
		{
			label = "MSA TC-3000";
			author = "Arma Mod France";
			options[] = {"cover","sordin"};
			class cover
			{
				label = "Paint";
				changeingame = 0;
				values[] = {"grn", "tan"};
				class grn
				{
					label = "OD";
					image="#(rgb,8,8,3)color(0.3,0.29,0.24,1)";
				};
				class tan
				{
					label = "TAN";
					image="#(rgb,8,8,3)color(0.49,0.43,0.33,1)";
				};
			};
			class sordin : SordinBase {};

		};


		class amf_tc800
		{
			label = "MSA TC-800";
			author = "Arma Mod France";
			options[] = {"cover","sordin"};
			class cover
			{
				label = "Paint";
				changeingame = 0;
				values[] = {"grn", "blk", "tan"};
				class blk
				{
					label = "Black";
					image="#(rgb,8,8,3)color(0.1,0.1,0.1,1)";
				};
				class grn
				{
					label = "OD";
					image="#(rgb,8,8,3)color(0.3,0.29,0.24,1)";
				};
				class tan
				{
					label = "TAN";
					image="#(rgb,8,8,3)color(0.49,0.43,0.33,1)";
				};
			};
			class sordin : SordinBase {};

		};

		class amf_smb
		{
			label = "NFM SMB";
			author = "Arma Mod France";
			options[] = {"camo","weapon", "loadout", "belt"};
			class camo
			{
				label = "Camo";
				changeingame = 0;
				values[] = {"TAN", "OD"};
				class OD
				{
					label = "OD";
					image="#(rgb,8,8,3)color(0.3,0.29,0.24,1)";
				};
				class TAN
				{
					label = "TAN";
					image="#(rgb,8,8,3)color(0.49,0.43,0.33,1)";
				};
			};
			class weapon
			{
				label = "Magazines";
				changeingame = 0;
				values[] = {"HK416","FAMAS"};
			};
			class loadout
			{
				label = "Loadout";
				changeingame = 0;
				values[] = {"LG","GV","CDG","SC2","AR"};
			};
			class belt
			{
				label = "Belt";
				changeingame = 0;
				values[] = {"no","yes"};
			};
		};

		class amf_smb_tp
		{
			label = "NFM SMB (TP)";
			author = "Arma Mod France";
			options[] = {"camo","weapon", "loadout", "belt"};
			class camo
			{
				label = "Camo";
				changeingame = 0;
				values[] = {"TAN", "OD"};
				class OD
				{
					label = "OD";
					image="#(rgb,8,8,3)color(0.3,0.29,0.24,1)";
				};
				class TAN
				{
					label = "TAN";
					image="#(rgb,8,8,3)color(0.49,0.43,0.33,1)";
				};
			};
			class weapon
			{
				label = "Magazines";
				changeingame = 0;
				values[] = {"FRF2","HK417","SCARH"};
			};
			class loadout
			{
				label = "Loadout";
				changeingame = 0;
				values[] = {"TP"};
			};
			class belt
			{
				label = "Belt";
				changeingame = 0;
				values[] = {"no","yes"};
			};
		};


	};
};
