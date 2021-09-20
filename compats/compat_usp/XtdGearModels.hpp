class XtdGearModels
{
	class CamoBase;
	class SleevesBase;


			class usp_mxcamo
			{
				label = "MX Gloves Color/Camo";
				hiddenselection = "Camo3";
				values[] = {"DEFAULT", "BLK", "GRY", "TAN", "BLK2", "WDL", "MC", "MCB"};
				requires[] = { {"gloves", "MX"} };
				#define MX_CAMO(N) class N { texture = QUOTE(\usp_gear_body\model\tx\usp_mechanix_##N##_co.paa); };
				class DEFAULT {
					label="(default)";
					texture="!DEFAULT!";
				};
				MX_CAMO(BLK)
				MX_CAMO(GRY)
				MX_CAMO(TAN)
				MX_CAMO(BLK2)
				MX_CAMO(WDL)
				MX_CAMO(MC)
				MX_CAMO(MCB)
			};

			class usp_orcamo
			{
				label = "OR Gloves Color/Camo";
				hiddenselection = "Camo2";
				values[] = {"DEFAULT", "BLK", "TAN", "MC", "CBR", "MIX"};
				requires[] = { {"gloves", "OR"} };
				#define OR_CAMO(N) class N { texture = QUOTE(\usp_gear_body\model\tx\usp_overlord_##N##_co.paa); };
				class DEFAULT {
					label="(default)";
					texture="!DEFAULT!";
				};
				OR_CAMO(BLK)
				OR_CAMO(TAN)
				OR_CAMO(GRN)
				OR_CAMO(MC)
				OR_CAMO(CBR)
				OR_CAMO(MIX)
			};



	class CfgWeapons
	{
		class USP_G3C
		{
			label = "Crye G3C";
			author = "UnderSiege Productions";
			options[] = {"camo", "gloves", "sleeves", "collar", "kneepads","shoes"};
			textureoptions[] = { "pantscamo", "mxcamo", "orcamo","flagright","flagleft" };
			class camo //: CamoBase
			{
				values[] = {"BLK","GRY","KHK","RGR","NAV","M81","MC","MCB","MCD","MCT","MCW","AOR1","AOR2", /*"ATT", due to scope=1*/ "TSD","TSW"};
			};
			class collar
			{
				label = "Collar";
				changeingame = 1;
				values[] = {"down", "up"};
			};
			class kneepads
			{
				label = "Knee Pads";
				changeingame = 0;
				values[] = {"no", "yes"};
			};
			class gloves
			{
				label = "Gloves";
				changeingame = 0;
				values[] = {"none", "MX", "OR"};
				class MX
				{
					label = "MX";
					description = "Mechanix®";
				};
			};
			class sleeves //: SleevesBase
			{
				values[] = {"Full", "Quarter", "Half"};
			};
			class shoes
			{
				label = "Shoes";
				changeingame = 0;
				values[] = {"SL", "VQ","IST"};
			};
			class pantscamo
			{
				hiddenselection = "Camo1";
				values[] = {"DEFAULT", "BLK", "GRY", "KHK", "RGR", "NAV", "M81","MC","MCB","MCD","MCT","MCW","AOR1","AOR2",/*"ATT",*/"TSD","TSW"};
				class DEFAULT {
					label="(default)";
					texture="!DEFAULT!";
				};
				#define PANT_CAMO(N) class N { texture = QUOTE(\usp_gear_body\model\tx\usp_g3c_pants_##N##_co.paa); };
				PANT_CAMO(BLK)
				PANT_CAMO(GRY)
				PANT_CAMO(KHK)
				PANT_CAMO(RGR)
				PANT_CAMO(NAV)
				PANT_CAMO(M81)
				PANT_CAMO(MC)
				PANT_CAMO(MCB)
				PANT_CAMO(MCD)
				PANT_CAMO(MCT)
				PANT_CAMO(MCW)
				PANT_CAMO(AOR1)
				PANT_CAMO(AOR2)
				PANT_CAMO(ATT)
				PANT_CAMO(TSD)
				PANT_CAMO(TSW)
			};

			class mxcamo : usp_mxcamo  {};

			class orcamo : usp_orcamo  {};

			class flags
			{
				changeingame = 0;
				centerImage = 1;

				class DEFAULT {
					label="(none)";
					texture="";
				};

				#define FLAG(N) class N { texture = QUOTE(\usp_gear_core\data\id\flag\##N##_co.paa); image = QUOTE(\usp_gear_core\data\id\flag\##N##_co.paa); label=""; description=#N; };
				FLAG(aus_ir_mc)
				FLAG(bos_ir_mc)
				FLAG(bra_ir_mc)
				FLAG(can_ir_blk)
				FLAG(can_ref_gry)
				FLAG(cze_ir_mc)
				FLAG(fin_ir_rgr)
				FLAG(fra_ref)
				FLAG(ger_ir_flk)
				FLAG(ger_ir_mc)
				FLAG(ger_ir_rgr)
				FLAG(isr_ir_blk)
				FLAG(isr_ir_mc)
				FLAG(isr_ir_tan)
				FLAG(isr_ref_blk)
				FLAG(jap_ir_mc)
				FLAG(nld)
				FLAG(nld_ir_mc)
				FLAG(nld_sub2)
				FLAG(nld_sub)
				FLAG(nld_tan)
				FLAG(nor_ref)
				FLAG(pol_ref)
				FLAG(pol_ref_sub)
				FLAG(rus_ir_mc)
				FLAG(rus_ref)
				FLAG(swe_ref_rgr)
				FLAG(tur_ir_mc)
				FLAG(uk)
				FLAG(uk_ir_blk)
				FLAG(uk_ir_grn)
				FLAG(uk_ir_mc)
				FLAG(uk_ref_mc)
				FLAG(usa_can_blk)
				FLAG(usa_can_ref_mc)
				FLAG(usa)
				FLAG(usa_flag2)
				FLAG(usa_fog)
				FLAG(usa_ir_aor2)
				FLAG(usa_ir_blk_abpos)
				FLAG(usa_ir_blk)
				FLAG(usa_ir_blk_skull2)
				FLAG(usa_ir_blk_skull)
				FLAG(usa_ir_grn)
				FLAG(usa_ir_mc)
				FLAG(usa_ir_mc_skull)
				FLAG(usa_ir_rgr)
				FLAG(usa_ir_skull_mc)
				FLAG(usa_ir_tan)
				FLAG(usa_ref)
				FLAG(usa_tan)
				FLAG(usa_tx_ir_rgr)
				FLAG(usa_uk_ir_blk2)
				FLAG(usa_uk_ir_blk)
				FLAG(usa_uk_ir_mc)
				FLAG(usa_usaf)
				FLAG(zea_ir_mc)
				#define ALL_FLAGS "aus_ir_mc","bos_ir_mc","bra_ir_mc","can_ir_blk","can_ref_gry","cze_ir_mc","fin_ir_rgr","fra_ref","ger_ir_flk","ger_ir_mc","ger_ir_rgr","isr_ir_blk","isr_ir_mc","isr_ir_tan","isr_ref_blk","jap_ir_mc","nld","nld_ir_mc","nld_sub2","nld_sub","nld_tan","nor_ref","pol_ref","pol_ref_sub","rus_ir_mc","rus_ref","swe_ref_rgr","tur_ir_mc","uk","uk_ir_blk","uk_ir_grn","uk_ir_mc","uk_ref_mc","usa_can_blk","usa_can_ref_mc","usa","usa_flag2","usa_fog","usa_ir_aor2","usa_ir_blk_abpos","usa_ir_blk","usa_ir_blk_skull2","usa_ir_blk_skull","usa_ir_grn","usa_ir_mc","usa_ir_mc_skull","usa_ir_rgr","usa_ir_skull_mc","usa_ir_tan","usa_ref","usa_tan","usa_tx_ir_rgr","usa_uk_ir_blk2","usa_uk_ir_blk","usa_uk_ir_mc","usa_usaf","zea_ir_mc"


				#define MORALE(N) class N { texture = QUOTE(\usp_gear_core\data\id\morale\##N##_co.paa); image = QUOTE(\usp_gear_core\data\id\morale\##N##_co.paa); label=""; description=#N; };
				MORALE(aim_face)
				MORALE(aim_small)
				MORALE(all_lives)
				MORALE(amazingly_enough)
				MORALE(bad_feeling)
				MORALE(business_boomin_blk)
				MORALE(business_boomin)
				MORALE(business_boomin_grn)
				MORALE(business_boomin_gry)
				MORALE(calico_jack)
				MORALE(deez_nuts)
				MORALE(extremist_advisory)
				MORALE(fuck_face)
				MORALE(grow_some)
				MORALE(homer_bush)
				MORALE(knock_knock)
				MORALE(not_required)
				MORALE(outta_compliance)
				MORALE(pissed_off)
				MORALE(quality_fucks)
				MORALE(return_fire)
				MORALE(salty_bitch)
				MORALE(savage_mode)
				MORALE(shooters)
				MORALE(warheads_foreheads)
				MORALE(writing_checks)
				MORALE(your_best)
				MORALE(your_huckleberry)
				MORALE(zero_fucks)
				#define ALL_MORALE "aim_face","aim_small","all_lives","amazingly_enough","bad_feeling","business_boomin_blk","business_boomin","business_boomin_grn","business_boomin_gry","calico_jack","deez_nuts","extremist_advisory","fuck_face","grow_some","homer_bush","knock_knock","not_required","outta_compliance","pissed_off","quality_fucks","return_fire","salty_bitch","savage_mode","shooters","warheads_foreheads","writing_checks","your_best","your_huckleberry","zero_fucks"

				#define CALLSIGN(N) class N { texture = QUOTE(\usp_gear_core\data\id\callsign\##N##_co.paa); image = QUOTE(\usp_gear_core\data\id\callsign\##N##_co.paa); label=""; description=#N; };
				CALLSIGN(cct_blk)
				CALLSIGN(cct_cbr)
				CALLSIGN(cct_mc)
				CALLSIGN(jtac_blk)
				CALLSIGN(jtac_cbr)
				CALLSIGN(jtac_mc)
				CALLSIGN(pj1_blk)
				CALLSIGN(pj1_cbr)
				CALLSIGN(pj1_mc)
				CALLSIGN(pj2_blk)
				CALLSIGN(pj2_cbr)
				CALLSIGN(pj2_mc)
				CALLSIGN(pj3_blk)
				CALLSIGN(pj3_cbr)
				CALLSIGN(pj3_mc)
				CALLSIGN(pj4_blk)
				CALLSIGN(pj4_cbr)
				CALLSIGN(pj4_mc)
				CALLSIGN(tacp_blk)
				CALLSIGN(tacp_cbr)
				CALLSIGN(tacp_mc)
				CALLSIGN(v11_blk)
				CALLSIGN(v11_cbr)
				CALLSIGN(v11_mc)
				CALLSIGN(v12_blk)
				CALLSIGN(v12_cbr)
				CALLSIGN(v12_mc)
				CALLSIGN(va1_blk)
				CALLSIGN(va1_cbr)
				CALLSIGN(va1_mc)
				CALLSIGN(va2_blk)
				CALLSIGN(va2_cbr)
				CALLSIGN(va2_mc)
				CALLSIGN(va3_blk)
				CALLSIGN(va3_cbr)
				CALLSIGN(va3_mc)
				CALLSIGN(va4_blk)
				CALLSIGN(va4_cbr)
				CALLSIGN(va4_mc)
				CALLSIGN(va5_blk)
				CALLSIGN(va5_cbr)
				CALLSIGN(va5_mc)
				CALLSIGN(va6_blk)
				CALLSIGN(va6_cbr)
				CALLSIGN(va6_mc)
				CALLSIGN(vb1_blk)
				CALLSIGN(vb1_cbr)
				CALLSIGN(vb1_mc)
				CALLSIGN(vb2_blk)
				CALLSIGN(vb2_cbr)
				CALLSIGN(vb2_mc)
				CALLSIGN(vb3_blk)
				CALLSIGN(vb3_cbr)
				CALLSIGN(vb3_mc)
				CALLSIGN(vb4_blk)
				CALLSIGN(vb4_cbr)
				CALLSIGN(vb4_mc)
				CALLSIGN(vb5_blk)
				CALLSIGN(vb5_cbr)
				CALLSIGN(vb5_mc)
				CALLSIGN(vb6_blk)
				CALLSIGN(vb6_cbr)
				CALLSIGN(vb6_mc)
				CALLSIGN(vc1_blk)
				CALLSIGN(vc1_cbr)
				CALLSIGN(vc1_mc)
				CALLSIGN(vc2_blk)
				CALLSIGN(vc2_cbr)
				CALLSIGN(vc2_mc)
				CALLSIGN(vc3_blk)
				CALLSIGN(vc3_cbr)
				CALLSIGN(vc3_mc)
				CALLSIGN(vc4_blk)
				CALLSIGN(vc4_cbr)
				CALLSIGN(vc4_mc)
				CALLSIGN(vc5_blk)
				CALLSIGN(vc5_cbr)
				CALLSIGN(vc5_mc)
				CALLSIGN(vc6_blk)
				CALLSIGN(vc6_cbr)
				CALLSIGN(vc6_mc)
				CALLSIGN(vd1_blk)
				CALLSIGN(vd1_cbr)
				CALLSIGN(vd1_mc)
				CALLSIGN(vd2_blk)
				CALLSIGN(vd2_cbr)
				CALLSIGN(vd2_mc)
				CALLSIGN(vd3_blk)
				CALLSIGN(vd3_cbr)
				CALLSIGN(vd3_mc)
				CALLSIGN(vd4_blk)
				CALLSIGN(vd4_cbr)
				CALLSIGN(vd4_mc)
				CALLSIGN(vd5_blk)
				CALLSIGN(vd5_cbr)
				CALLSIGN(vd5_mc)
				CALLSIGN(vd6_blk)
				CALLSIGN(vd6_cbr)
				CALLSIGN(vd6_mc)
				CALLSIGN(vm3_blk)
				CALLSIGN(vm3_cbr)
				CALLSIGN(vm3_mc)
				CALLSIGN(vm4_blk)
				CALLSIGN(vm4_cbr)
				CALLSIGN(vm4_mc)
				CALLSIGN(vm5_blk)
				CALLSIGN(vm5_cbr)
				CALLSIGN(vm5_mc)
				CALLSIGN(vm6_blk)
				CALLSIGN(vm6_cbr)
				CALLSIGN(vm6_mc)
				CALLSIGN(vm7_blk)
				CALLSIGN(vm7_cbr)
				CALLSIGN(vm7_mc)
				CALLSIGN(vn5_blk)
				CALLSIGN(vn5_cbr)
				CALLSIGN(vn5_mc)
				CALLSIGN(vn6_blk)
				CALLSIGN(vn6_cbr)
				CALLSIGN(vn6_mc)
				CALLSIGN(vn7_blk)
				CALLSIGN(vn7_cbr)
				CALLSIGN(vn7_mc)
				CALLSIGN(vn8_blk)
				CALLSIGN(vn8_cbr)
				CALLSIGN(vn8_mc)
				CALLSIGN(vq4_blk)
				CALLSIGN(vq4_cbr)
				CALLSIGN(vq4_mc)
				CALLSIGN(vq5_blk)
				CALLSIGN(vq5_cbr)
				CALLSIGN(vq5_mc)
				CALLSIGN(vq6_blk)
				CALLSIGN(vq6_cbr)
				CALLSIGN(vq6_mc)
				CALLSIGN(vq7_blk)
				CALLSIGN(vq7_cbr)
				CALLSIGN(vq7_mc)
				CALLSIGN(vr3_blk)
				CALLSIGN(vr3_cbr)
				CALLSIGN(vr3_mc)
				CALLSIGN(vt6_blk)
				CALLSIGN(vt6_cbr)
				CALLSIGN(vt6_mc)
				CALLSIGN(vu5_blk)
				CALLSIGN(vu5_cbr)
				CALLSIGN(vu5_mc)
				CALLSIGN(x11_blk)
				CALLSIGN(x11_cbr)
				CALLSIGN(x11_mc)
				CALLSIGN(x12_blk)
				CALLSIGN(x12_cbr)
				CALLSIGN(x12_mc)
				CALLSIGN(xa1_blk)
				CALLSIGN(xa1_cbr)
				CALLSIGN(xa1_mc)
				CALLSIGN(xa2_blk)
				CALLSIGN(xa2_cbr)
				CALLSIGN(xa2_mc)
				CALLSIGN(xa3_blk)
				CALLSIGN(xa3_cbr)
				CALLSIGN(xa3_mc)
				CALLSIGN(xa4_blk)
				CALLSIGN(xa4_cbr)
				CALLSIGN(xa4_mc)
				CALLSIGN(xa5_blk)
				CALLSIGN(xa5_cbr)
				CALLSIGN(xa5_mc)
				CALLSIGN(xa6_blk)
				CALLSIGN(xa6_cbr)
				CALLSIGN(xa6_mc)
				CALLSIGN(xb1_blk)
				CALLSIGN(xb1_cbr)
				CALLSIGN(xb1_mc)
				CALLSIGN(xb2_blk)
				CALLSIGN(xb2_cbr)
				CALLSIGN(xb2_mc)
				CALLSIGN(xb3_blk)
				CALLSIGN(xb3_cbr)
				CALLSIGN(xb3_mc)
				CALLSIGN(xb4_blk)
				CALLSIGN(xb4_cbr)
				CALLSIGN(xb4_mc)
				CALLSIGN(xb5_blk)
				CALLSIGN(xb5_cbr)
				CALLSIGN(xb5_mc)
				CALLSIGN(xb6_blk)
				CALLSIGN(xb6_cbr)
				CALLSIGN(xb6_mc)
				CALLSIGN(xc1_blk)
				CALLSIGN(xc1_cbr)
				CALLSIGN(xc1_mc)
				CALLSIGN(xc2_blk)
				CALLSIGN(xc2_cbr)
				CALLSIGN(xc2_mc)
				CALLSIGN(xc3_blk)
				CALLSIGN(xc3_cbr)
				CALLSIGN(xc3_mc)
				CALLSIGN(xc4_blk)
				CALLSIGN(xc4_cbr)
				CALLSIGN(xc4_mc)
				CALLSIGN(xc5_blk)
				CALLSIGN(xc5_cbr)
				CALLSIGN(xc5_mc)
				CALLSIGN(xc6_blk)
				CALLSIGN(xc6_cbr)
				CALLSIGN(xc6_mc)
				CALLSIGN(xd1_blk)
				CALLSIGN(xd1_cbr)
				CALLSIGN(xd1_mc)
				CALLSIGN(xd2_blk)
				CALLSIGN(xd2_cbr)
				CALLSIGN(xd2_mc)
				CALLSIGN(xd3_blk)
				CALLSIGN(xd3_cbr)
				CALLSIGN(xd3_mc)
				CALLSIGN(xd4_blk)
				CALLSIGN(xd4_cbr)
				CALLSIGN(xd4_mc)
				CALLSIGN(xd5_blk)
				CALLSIGN(xd5_cbr)
				CALLSIGN(xd5_mc)
				CALLSIGN(xd6_blk)
				CALLSIGN(xd6_cbr)
				CALLSIGN(xd6_mc)
				CALLSIGN(xm3_blk)
				CALLSIGN(xm3_cbr)
				CALLSIGN(xm3_mc)
				CALLSIGN(xm4_blk)
				CALLSIGN(xm4_cbr)
				CALLSIGN(xm4_mc)
				CALLSIGN(xm5_blk)
				CALLSIGN(xm5_cbr)
				CALLSIGN(xm5_mc)
				CALLSIGN(xm6_blk)
				CALLSIGN(xm6_cbr)
				CALLSIGN(xm6_mc)
				CALLSIGN(xm7_blk)
				CALLSIGN(xm7_cbr)
				CALLSIGN(xm7_mc)
				CALLSIGN(xn5_blk)
				CALLSIGN(xn5_cbr)
				CALLSIGN(xn5_mc)
				CALLSIGN(xn6_blk)
				CALLSIGN(xn6_cbr)
				CALLSIGN(xn6_mc)
				CALLSIGN(xn7_blk)
				CALLSIGN(xn7_cbr)
				CALLSIGN(xn7_mc)
				CALLSIGN(xn8_blk)
				CALLSIGN(xn8_cbr)
				CALLSIGN(xn8_mc)
				CALLSIGN(xq4_blk)
				CALLSIGN(xq4_cbr)
				CALLSIGN(xq4_mc)
				CALLSIGN(xq5_blk)
				CALLSIGN(xq5_cbr)
				CALLSIGN(xq5_mc)
				CALLSIGN(xq6_blk)
				CALLSIGN(xq6_cbr)
				CALLSIGN(xq6_mc)
				CALLSIGN(xq7_blk)
				CALLSIGN(xq7_cbr)
				CALLSIGN(xq7_mc)
				CALLSIGN(xr3_blk)
				CALLSIGN(xr3_cbr)
				CALLSIGN(xr3_mc)
				CALLSIGN(xt6_blk)
				CALLSIGN(xt6_cbr)
				CALLSIGN(xt6_mc)
				CALLSIGN(xu5_blk)
				CALLSIGN(xu5_cbr)
				CALLSIGN(xu5_mc)
				CALLSIGN(yj1_blk)
				CALLSIGN(yj1_cbr)
				CALLSIGN(yj1_mc)
				CALLSIGN(yj2_blk)
				CALLSIGN(yj2_cbr)
				CALLSIGN(yj2_mc)
				CALLSIGN(yj3_blk)
				CALLSIGN(yj3_cbr)
				CALLSIGN(yj3_mc)
				CALLSIGN(yj4_blk)
				CALLSIGN(yj4_cbr)
				CALLSIGN(yj4_mc)
				CALLSIGN(yj5_blk)
				CALLSIGN(yj5_cbr)
				CALLSIGN(yj5_mc)
				CALLSIGN(z21_blk)
				CALLSIGN(z21_cbr)
				CALLSIGN(z21_mc)
				CALLSIGN(z22_blk)
				CALLSIGN(z22_cbr)
				CALLSIGN(z22_mc)
				CALLSIGN(ze1_blk)
				CALLSIGN(ze1_cbr)
				CALLSIGN(ze1_mc)
				CALLSIGN(ze2_blk)
				CALLSIGN(ze2_cbr)
				CALLSIGN(ze2_mc)
				CALLSIGN(ze3_blk)
				CALLSIGN(ze3_cbr)
				CALLSIGN(ze3_mc)
				CALLSIGN(ze4_blk)
				CALLSIGN(ze4_cbr)
				CALLSIGN(ze4_mc)
				CALLSIGN(ze5_blk)
				CALLSIGN(ze5_cbr)
				CALLSIGN(ze5_mc)
				CALLSIGN(ze6_blk)
				CALLSIGN(ze6_cbr)
				CALLSIGN(ze6_mc)
				CALLSIGN(zf1_blk)
				CALLSIGN(zf1_cbr)
				CALLSIGN(zf1_mc)
				CALLSIGN(zf2_blk)
				CALLSIGN(zf2_cbr)
				CALLSIGN(zf2_mc)
				CALLSIGN(zf3_blk)
				CALLSIGN(zf3_cbr)
				CALLSIGN(zf3_mc)
				CALLSIGN(zf4_blk)
				CALLSIGN(zf4_cbr)
				CALLSIGN(zf4_mc)
				CALLSIGN(zf5_blk)
				CALLSIGN(zf5_cbr)
				CALLSIGN(zf5_mc)
				CALLSIGN(zf6_blk)
				CALLSIGN(zf6_cbr)
				CALLSIGN(zf6_mc)
				CALLSIGN(zg1_blk)
				CALLSIGN(zg1_cbr)
				CALLSIGN(zg1_mc)
				CALLSIGN(zg2_blk)
				CALLSIGN(zg2_cbr)
				CALLSIGN(zg2_mc)
				CALLSIGN(zg3_blk)
				CALLSIGN(zg3_cbr)
				CALLSIGN(zg3_mc)
				CALLSIGN(zg4_blk)
				CALLSIGN(zg4_cbr)
				CALLSIGN(zg4_mc)
				CALLSIGN(zg5_blk)
				CALLSIGN(zg5_cbr)
				CALLSIGN(zg5_mc)
				CALLSIGN(zg6_blk)
				CALLSIGN(zg6_cbr)
				CALLSIGN(zg6_mc)
				CALLSIGN(zh1_blk)
				CALLSIGN(zh1_cbr)
				CALLSIGN(zh1_mc)
				CALLSIGN(zh2_blk)
				CALLSIGN(zh2_cbr)
				CALLSIGN(zh2_mc)
				CALLSIGN(zh3_blk)
				CALLSIGN(zh3_cbr)
				CALLSIGN(zh3_mc)
				CALLSIGN(zh4_blk)
				CALLSIGN(zh4_cbr)
				CALLSIGN(zh4_mc)
				CALLSIGN(zh5_blk)
				CALLSIGN(zh5_cbr)
				CALLSIGN(zh5_mc)
				CALLSIGN(zh6_blk)
				CALLSIGN(zh6_cbr)
				CALLSIGN(zh6_mc)
				CALLSIGN(zm3_blk)
				CALLSIGN(zm3_cbr)
				CALLSIGN(zm3_mc)
				CALLSIGN(zm4_blk)
				CALLSIGN(zm4_cbr)
				CALLSIGN(zm4_mc)
				CALLSIGN(zm5_blk)
				CALLSIGN(zm5_cbr)
				CALLSIGN(zm5_mc)
				CALLSIGN(zm6_blk)
				CALLSIGN(zm6_cbr)
				CALLSIGN(zm6_mc)
				CALLSIGN(zm7_blk)
				CALLSIGN(zm7_cbr)
				CALLSIGN(zm7_mc)
				CALLSIGN(zn5_blk)
				CALLSIGN(zn5_cbr)
				CALLSIGN(zn5_mc)
				CALLSIGN(zn6_blk)
				CALLSIGN(zn6_cbr)
				CALLSIGN(zn6_mc)
				CALLSIGN(zn7_blk)
				CALLSIGN(zn7_cbr)
				CALLSIGN(zn7_mc)
				CALLSIGN(zn8_blk)
				CALLSIGN(zn8_cbr)
				CALLSIGN(zn8_mc)
				CALLSIGN(zq4_blk)
				CALLSIGN(zq4_cbr)
				CALLSIGN(zq4_mc)
				CALLSIGN(zq5_blk)
				CALLSIGN(zq5_cbr)
				CALLSIGN(zq5_mc)
				CALLSIGN(zq6_blk)
				CALLSIGN(zq6_cbr)
				CALLSIGN(zq6_mc)
				CALLSIGN(zq7_blk)
				CALLSIGN(zq7_cbr)
				CALLSIGN(zq7_mc)
				CALLSIGN(zr3_blk)
				CALLSIGN(zr3_cbr)
				CALLSIGN(zr3_mc)
				CALLSIGN(zt6_blk)
				CALLSIGN(zt6_cbr)
				CALLSIGN(zt6_mc)
				CALLSIGN(zu5_blk)
				CALLSIGN(zu5_cbr)
				CALLSIGN(zu5_mc)
				#define ALL_CALLSIGN "cct_blk","cct_cbr","cct_mc","jtac_blk","jtac_cbr","jtac_mc","pj1_blk","pj1_cbr","pj1_mc","pj2_blk","pj2_cbr","pj2_mc","pj3_blk","pj3_cbr","pj3_mc","pj4_blk","pj4_cbr","pj4_mc","tacp_blk","tacp_cbr","tacp_mc","v11_blk","v11_cbr","v11_mc","v12_blk","v12_cbr","v12_mc","va1_blk","va1_cbr","va1_mc","va2_blk","va2_cbr","va2_mc","va3_blk","va3_cbr","va3_mc","va4_blk","va4_cbr","va4_mc","va5_blk","va5_cbr","va5_mc","va6_blk","va6_cbr","va6_mc","vb1_blk","vb1_cbr","vb1_mc","vb2_blk","vb2_cbr","vb2_mc","vb3_blk","vb3_cbr","vb3_mc","vb4_blk","vb4_cbr","vb4_mc","vb5_blk","vb5_cbr","vb5_mc","vb6_blk","vb6_cbr","vb6_mc","vc1_blk","vc1_cbr","vc1_mc","vc2_blk","vc2_cbr","vc2_mc","vc3_blk","vc3_cbr","vc3_mc","vc4_blk","vc4_cbr","vc4_mc","vc5_blk","vc5_cbr","vc5_mc","vc6_blk","vc6_cbr","vc6_mc","vd1_blk","vd1_cbr","vd1_mc","vd2_blk","vd2_cbr","vd2_mc","vd3_blk","vd3_cbr","vd3_mc","vd4_blk","vd4_cbr","vd4_mc","vd5_blk","vd5_cbr","vd5_mc","vd6_blk","vd6_cbr","vd6_mc","vm3_blk","vm3_cbr","vm3_mc","vm4_blk","vm4_cbr","vm4_mc","vm5_blk","vm5_cbr","vm5_mc","vm6_blk","vm6_cbr","vm6_mc","vm7_blk","vm7_cbr","vm7_mc","vn5_blk","vn5_cbr","vn5_mc","vn6_blk","vn6_cbr","vn6_mc","vn7_blk","vn7_cbr","vn7_mc","vn8_blk","vn8_cbr","vn8_mc","vq4_blk","vq4_cbr","vq4_mc","vq5_blk","vq5_cbr","vq5_mc","vq6_blk","vq6_cbr","vq6_mc","vq7_blk","vq7_cbr","vq7_mc","vr3_blk","vr3_cbr","vr3_mc","vt6_blk","vt6_cbr","vt6_mc","vu5_blk","vu5_cbr","vu5_mc","x11_blk","x11_cbr","x11_mc","x12_blk","x12_cbr","x12_mc","xa1_blk","xa1_cbr","xa1_mc","xa2_blk","xa2_cbr","xa2_mc","xa3_blk","xa3_cbr","xa3_mc","xa4_blk","xa4_cbr","xa4_mc","xa5_blk","xa5_cbr","xa5_mc","xa6_blk","xa6_cbr","xa6_mc","xb1_blk","xb1_cbr","xb1_mc","xb2_blk","xb2_cbr","xb2_mc","xb3_blk","xb3_cbr","xb3_mc","xb4_blk","xb4_cbr","xb4_mc","xb5_blk","xb5_cbr","xb5_mc","xb6_blk","xb6_cbr","xb6_mc","xc1_blk","xc1_cbr","xc1_mc","xc2_blk","xc2_cbr","xc2_mc","xc3_blk","xc3_cbr","xc3_mc","xc4_blk","xc4_cbr","xc4_mc","xc5_blk","xc5_cbr","xc5_mc","xc6_blk","xc6_cbr","xc6_mc","xd1_blk","xd1_cbr","xd1_mc","xd2_blk","xd2_cbr","xd2_mc","xd3_blk","xd3_cbr","xd3_mc","xd4_blk","xd4_cbr","xd4_mc","xd5_blk","xd5_cbr","xd5_mc","xd6_blk","xd6_cbr","xd6_mc","xm3_blk","xm3_cbr","xm3_mc","xm4_blk","xm4_cbr","xm4_mc","xm5_blk","xm5_cbr","xm5_mc","xm6_blk","xm6_cbr","xm6_mc","xm7_blk","xm7_cbr","xm7_mc","xn5_blk","xn5_cbr","xn5_mc","xn6_blk","xn6_cbr","xn6_mc","xn7_blk","xn7_cbr","xn7_mc","xn8_blk","xn8_cbr","xn8_mc","xq4_blk","xq4_cbr","xq4_mc","xq5_blk","xq5_cbr","xq5_mc","xq6_blk","xq6_cbr","xq6_mc","xq7_blk","xq7_cbr","xq7_mc","xr3_blk","xr3_cbr","xr3_mc","xt6_blk","xt6_cbr","xt6_mc","xu5_blk","xu5_cbr","xu5_mc","yj1_blk","yj1_cbr","yj1_mc","yj2_blk","yj2_cbr","yj2_mc","yj3_blk","yj3_cbr","yj3_mc","yj4_blk","yj4_cbr","yj4_mc","yj5_blk","yj5_cbr","yj5_mc","z21_blk","z21_cbr","z21_mc","z22_blk","z22_cbr","z22_mc","ze1_blk","ze1_cbr","ze1_mc","ze2_blk","ze2_cbr","ze2_mc","ze3_blk","ze3_cbr","ze3_mc","ze4_blk","ze4_cbr","ze4_mc","ze5_blk","ze5_cbr","ze5_mc","ze6_blk","ze6_cbr","ze6_mc","zf1_blk","zf1_cbr","zf1_mc","zf2_blk","zf2_cbr","zf2_mc","zf3_blk","zf3_cbr","zf3_mc","zf4_blk","zf4_cbr","zf4_mc","zf5_blk","zf5_cbr","zf5_mc","zf6_blk","zf6_cbr","zf6_mc","zg1_blk","zg1_cbr","zg1_mc","zg2_blk","zg2_cbr","zg2_mc","zg3_blk","zg3_cbr","zg3_mc","zg4_blk","zg4_cbr","zg4_mc","zg5_blk","zg5_cbr","zg5_mc","zg6_blk","zg6_cbr","zg6_mc","zh1_blk","zh1_cbr","zh1_mc","zh2_blk","zh2_cbr","zh2_mc","zh3_blk","zh3_cbr","zh3_mc","zh4_blk","zh4_cbr","zh4_mc","zh5_blk","zh5_cbr","zh5_mc","zh6_blk","zh6_cbr","zh6_mc","zm3_blk","zm3_cbr","zm3_mc","zm4_blk","zm4_cbr","zm4_mc","zm5_blk","zm5_cbr","zm5_mc","zm6_blk","zm6_cbr","zm6_mc","zm7_blk","zm7_cbr","zm7_mc","zn5_blk","zn5_cbr","zn5_mc","zn6_blk","zn6_cbr","zn6_mc","zn7_blk","zn7_cbr","zn7_mc","zn8_blk","zn8_cbr","zn8_mc","zq4_blk","zq4_cbr","zq4_mc","zq5_blk","zq5_cbr","zq5_mc","zq6_blk","zq6_cbr","zq6_mc","zq7_blk","zq7_cbr","zq7_mc","zr3_blk","zr3_cbr","zr3_mc","zt6_blk","zt6_cbr","zt6_mc","zu5_blk","zu5_cbr","zu5_mc"
			};

			class flagleft : flags
			{
				label = "Left Shoulder";
				hiddenselection="_FlagLeft";
				values[] = {"DEFAULT",ALL_FLAGS,ALL_MORALE,ALL_CALLSIGN};
			};

			class flagright : flags
			{
				label = "Right Shoulder";
				hiddenselection="_FlagRight";
				values[] = {"DEFAULT",ALL_FLAGS,ALL_MORALE};
			};

		};

		class USP_PCU_G3C
		{
			label = "PCU/Crye G3C";
			author = "UnderSiege Productions";
			options[] = {"camo", "top", "kneepads", "gloves"};
			textureoptions[] = { "mxcamo", "orcamo" };
			class camo //: CamoBase
			{
				values[] = {"BLK","GRY","KHK","RGR","NAV","M81","MC","MCB","MCD","MCT","MCW","AOR1","AOR2","ATT","TSD","TSW"};
			};
			class top //: CamoBase
			{
				values[] = {"BLK","GRY","MC","MCA","MCB","MCD","MCT"};
			};
			class kneepads
			{
				label = "Knee Pads";
				changeingame = 0;
				values[] = {"no", "yes"};
			};
			class gloves
			{
				label = "Gloves";
				changeingame = 0;
				values[] = {"none", "MX", "OR"};
				class MX
				{
					label = "MX";
					description = "Mechanix®";
				};
			};
			class mxcamo : usp_mxcamo  {};
			class orcamo : usp_orcamo  {};
		};


		class USP_SOFTSHELL_G3C
		{
			label = "SoftShell/Crye G3C";
			author = "UnderSiege Productions";
			options[] = {"camo", "top", "kneepads", "gloves"};
			textureoptions[] = { "mxcamo", "orcamo","flagleft"};
			class camo //: CamoBase
			{
				values[] = {"BLK","GRY","KHK","RGR","NAV","M81","MC","MCB","MCD","MCT","MCW","AOR1","AOR2","ATT","TSD","TSW"};
			};
			class top //: CamoBase
			{
				values[] = {"BLK","CBR","GRY","MC","RGR"};
			};
			class kneepads
			{
				label = "Knee Pads";
				changeingame = 0;
				values[] = {"no", "yes"};
			};
			class gloves
			{
				label = "Gloves";
				changeingame = 0;
				values[] = {"none", "MX", "OR"};
				class MX
				{
					label = "MX";
					description = "Mechanix®";
				};
			};
			class mxcamo : usp_mxcamo  {};
			class orcamo : usp_orcamo  {};

			class flagleft {
				label = "Left Shoulder";
				hiddenselection="_FlagLeft";
				values[] = {
					"DEFAULT", 
					"usa_flag_base","usa_flag_blk","usa_flag_grn","usa_flag_mc","usa_flag_tan","usa_flag_tgr"
				};
				changeingame = 0;
				centerImage = 1;
				#define FLAG(N) class N { texture = QUOTE(\usp_gear_core\data\id\##N##_co.paa); image = QUOTE(\usp_gear_core\data\id\##N##_co.paa); label=""; description=#N; };
				class DEFAULT {
					label="(none)";
					texture="";
				};
				FLAG(usa_flag_base)
				FLAG(usa_flag_blk)
				FLAG(usa_flag_grn)
				FLAG(usa_flag_mc)
				FLAG(usa_flag_tan)
				FLAG(usa_flag_tgr)
			};
		};

		class USP_OVERWHITE_G3C
		{
			label = "Overwhite/Crye G3C";
			author = "UnderSiege Productions";
			options[] = {"camo", "kneepads", "gloves"};
			textureoptions[] = { "mxcamo", "orcamo" };
			class camo //: CamoBase
			{
				values[] = {"BLK","GRY","KHK","RGR","NAV","M81","MC","MCB","MCD","MCT","MCW","AOR1","AOR2","ATT","TSD","TSW"};
			};
			class kneepads
			{
				label = "Knee Pads";
				changeingame = 0;
				values[] = {"no", "yes"};
			};
			class gloves
			{
				label = "Gloves";
				changeingame = 0;
				values[] = {"none", "MX", "OR"};
				class MX
				{
					label = "MX";
					description = "Mechanix®";
				};
			};
			class mxcamo : usp_mxcamo  {};
			class orcamo : usp_orcamo  {};
		};

		class USP_TSHIRT_G3C
		{
			label = "Tshirt/Crye G3C";
			author = "UnderSiege Productions";
			options[] = {"camo", "top", "kneepads", "gloves", "inside"};
			textureoptions[] = { "mxcamo", "orcamo" };
			class camo //: CamoBase
			{
				values[] = {"BLK","GRY","KHK","RGR","NAV","M81","MC","MCB","MCD","MCT","MCW","AOR1","AOR2","ATT","TSD","TSW"};
			};
			class top //: CamoBase
			{
				values[] = {"BLK","CBR","GRY","GRN","NAV"};
			};
			class kneepads
			{
				label = "Knee Pads";
				changeingame = 0;
				values[] = {"no", "yes"};
			};
			class gloves
			{
				label = "Gloves";
				changeingame = 0;
				values[] = {"none", "MX", "OR"};
				class MX
				{
					label = "MX";
					description = "Mechanix®";
				};
			};
			class inside
			{
				label = "Tshirt inside pant";
				changeingame = 1;
				values[] = {"no", "yes"};
			};
			class mxcamo : usp_mxcamo  {};
			class orcamo : usp_orcamo  {};
		};


		class USP_CRYE_JPC
		{
			label = "Crye JPC";
			author = "UnderSiege Productions";
			options[] = {"camo", "loadout","belt"};
			class camo
			{
				values[] = {"MC","CBR","KHK","RGR"};
			};
			class loadout
			{
				values[] = {"none","ASLT","DM","GR","MG","TL","FS"};
			};
			class belt
			{
				values[] = {"no","yes"};
			};
		};

		class USP_CRYE_NCPC
		{
			label = "Crye NCPC";
			author = "UnderSiege Productions";
			options[] = {"camo", "loadout"};
			class camo
			{
				values[] = {"CBR","AOR1","AOR2","TGS","KTH","KTTY","M81"};
			};
			class loadout
			{
				values[] = {"none","ASLT","FAST"};
			};
		};

		
		class USP_CRYE_CPC
		{
			label = "Crye CPC";
			author = "UnderSiege Productions";
			options[] = {"camo", "loadout","belt"};
			class camo
			{
				values[] = {"CBR","AOR2","MC","MCA","MCB","MCD","MCT","RGR"};
			};
			class loadout
			{
				values[] = {"none","COMMS","FAST","LEAD","LIGHT","MEDIC","WEAPON"};
			};
			class belt
			{
				values[] = {"no","yes"};
			};
		};

		
		class USP_BASEBALL
		{
			label = "Baseball Cap";
			author = "UnderSiege Productions";
			options[] = {"camo", "light","eyewear","comms","side"};
			class camo
			{
				values[] = {"MC","ABU","AOR1","AOR2","ATACSAU","ATACSFG","ATACSIX","BLK","CBR","DCU","KHK","KTBANSHEE","KTHIGHLANDER","KTNEPTUNE","KTNOMAD","KTPONTUS","KTTYPHON","KTYETI","M81","MCA","MCB","MCD","MCT","MPW","MTP","OD","RGR","RT","RT2","RT3","RT4","RT5","RT6","RT7","TGR","TGRD","UCP","UCPD","US4CES", "PANTHERS"};
			};
			class light
			{
				values[] = {"none","FS","PT"};
			};
			class eyewear
			{
				values[] = {"none","GG","DC","SJ"};
			};
			class comms
			{
				values[] = {"none","BM","CT","CT3","CT3off"};
			};
			class side
			{
				values[] = {"front","back"};
			};
		};

		
		class USP_OPSCORE_FAST
		{
			label = "Ops-Core Fast MT";
			author = "UnderSiege Productions";
			options[] = {"camo", "comms","camera","goggles","light","counterweight"};
			class camo
			{
				values[] = {"TAN", "OD", "MC", "ABU", "AOR1", "AOR2", "CBR", "DCU", "FLECKTARN", "KTBANSHEE", "KTHIGHLANDER", "KTNEPTUNE", "KTNOMAD", "KTTYPHON", "KTYETI", "M81", "MCA", "MCD", "MCT", "RGR", "TGS", "TROPENTARN", "UCP"};
			};
			class comms
			{
				values[] = {"none","CT"};
			};
			class camera
			{
				values[] = {"none","CM"};
			};
			class goggles
			{
				values[] = {"none","GG"};
			};
			class light
			{
				values[] = {"none","SF","TL"};
			};
			class counterweight
			{
				values[] = {"none","CW"};
			};
		};

		class USP_AIRFRAME
		{
			label = "Crye AirFrame Helmet";
			author = "UnderSiege Productions";
			options[] = {"camo", "vlopt","camera","goggles","light","iropt","counterweight"};
			class camo
			{
				values[] = {"TAN","MC","MCD","OD","BLK"};
			};
			class vlopt
			{
				values[] = {"none","VL"};
			};
			class camera
			{
				values[] = {"none","CM"};
			};
			class goggles
			{
				values[] = {"none","GU"};
			};
			class light
			{
				values[] = {"none","SF","TL"};
			};
			class iropt
			{
				values[] = {"none","IR"};
			};
			class counterweight
			{
				values[] = {"none","CW"};
			};
		};
		
		
		class USP_OPSCORE_FASTFCV
		{
			label = "Ops-Core Fast MT Cover";
			author = "UnderSiege Productions";
			options[] = {"camo", "comms","camera","goggles","light","counterweight"};
			class camo
			{
				values[] = {"TAN", "OD"};
			};
			class comms
			{
				values[] = {"none","CT"};
			};
			class camera
			{
				values[] = {"none","CM"};
			};
			class goggles
			{
				values[] = {"none","GG"};
			};
			class light
			{
				values[] = {"none","SF","TL"};
			};
			class counterweight
			{
				values[] = {"none","CW"};
			};
		};
	};
};
