class USP_G3C
{
    options[] = { "camo", "collar", "gloves", "kneepads", "shoes", "sleeves" }; // Always computed, do not edit
    label="Crye G3C";
    author="UnderSiege Productions";
    textureoptions[]={"pantscamo", "mxcamo", "orcamo", "flagright", "flagleft"};
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "AMCU", "AOR1", "AOR2", "BLK", "DCU", "GRY", "KHK", "M81", "MC", "MCB", "MCD", "MCT", "MCW", "MM14", "MPD", "MPW", "MTN", "MTP", "NAV", "RBS", "RGR", "TSD", "TSW" }; // Always computed, do not edit
    };
    class collar
    {
        alwaysSelectable = 1;
        values[] = { "down", "up" }; // Always computed, do not edit
        label="Collar";
        changeingame=1;
    };
    class gloves
    {
        alwaysSelectable = 1;
        values[] = { "MX", "none", "OR" }; // Always computed, do not edit
        label="Gloves";
        changeingame=0;
        class MX
        {
            label="MX";
            description="Mechanix®";
        };
    };
    class kneepads
    {
        alwaysSelectable = 1;
        values[] = { "no", "yes" }; // Always computed, do not edit
        label="Knee Pads";
        changeingame=0;
    };
    class shoes
    {
        alwaysSelectable = 1;
        values[] = { "IST", "SL", "VQ" }; // Always computed, do not edit
        label="Shoes";
        changeingame=0;
    };
    class sleeves
    {
        alwaysSelectable = 1;
        values[] = { "Cut", "Full", "Half", "Quarter" }; // Always computed, do not edit
    };
    class pantscamo : usp_g3c_pantscamo
    {
    };
    class mxcamo : usp_mxcamo
    {
    };
    class orcamo : usp_orcamo
    {
    };
    class flagleft : usp_flags
    {
        label="Left Shoulder";
        hiddenselection="_FlagLeft";
        values[]={"DEFAULT", "aus_ir_mc", "bos_ir_mc", "bra_ir_mc", "can_ir_blk", "can_ref_gry", "cze_ir_mc", "fin_ir_rgr", "fra_ref", "ger_ir_flk", "ger_ir_mc", "ger_ir_rgr", "isr_ir_blk", "isr_ir_mc", "isr_ir_tan", "isr_ref_blk", "jap_ir_mc", "nld", "nld_ir_mc", "nld_sub2", "nld_sub", "nld_tan", "nor_ref", "pol_ref", "pol_ref_sub", "rus_ir_mc", "rus_ref", "swe_ref_rgr", "tur_ir_mc", "uk", "uk_ir_blk", "uk_ir_grn", "uk_ir_mc", "uk_ref_mc", "usa_can_blk", "usa_can_ref_mc", "usa", "usa_col", "usa_fog", "usa_ir_aor2", "usa_ir_blk_abpos", "usa_ir_blk", "usa_ir_blk_skull2", "usa_ir_blk_skull", "usa_ir_grn", "usa_ir_mc", "usa_ir_mc_skull", "usa_ir_rgr", "usa_ir_skull_mc", "usa_ir_tan", "usa_ref", "usa_tan", "usa_tx_ir_rgr", "usa_uk_ir_blk2", "usa_uk_ir_blk", "usa_uk_ir_mc", "usa_usaf", "zea_ir_mc", "aim_face", "aim_small", "all_lives", "amazingly_enough", "bad_feeling", "business_boomin_blk", "business_boomin", "business_boomin_grn", "business_boomin_gry", "calico_jack", "deez_nuts", "extremist_advisory", "fuck_face", "grow_some", "homer_bush", "knock_knock", "not_required", "outta_compliance", "pissed_off", "quality_fucks", "return_fire", "salty_bitch", "savage_mode", "shooters", "warheads_foreheads", "writing_checks", "your_best", "your_huckleberry", "zero_fucks", "cct_blk", "cct_cbr", "cct_mc", "jtac_blk", "jtac_cbr", "jtac_mc", "pj1_blk", "pj1_cbr", "pj1_mc", "pj2_blk", "pj2_cbr", "pj2_mc", "pj3_blk", "pj3_cbr", "pj3_mc", "pj4_blk", "pj4_cbr", "pj4_mc", "tacp_blk", "tacp_cbr", "tacp_mc", "v11_blk", "v11_cbr", "v11_mc", "v12_blk", "v12_cbr", "v12_mc", "va1_blk", "va1_cbr", "va1_mc", "va2_blk", "va2_cbr", "va2_mc", "va3_blk", "va3_cbr", "va3_mc", "va4_blk", "va4_cbr", "va4_mc", "va5_blk", "va5_cbr", "va5_mc", "va6_blk", "va6_cbr", "va6_mc", "vb1_blk", "vb1_cbr", "vb1_mc", "vb2_blk", "vb2_cbr", "vb2_mc", "vb3_blk", "vb3_cbr", "vb3_mc", "vb4_blk", "vb4_cbr", "vb4_mc", "vb5_blk", "vb5_cbr", "vb5_mc", "vb6_blk", "vb6_cbr", "vb6_mc", "vc1_blk", "vc1_cbr", "vc1_mc", "vc2_blk", "vc2_cbr", "vc2_mc", "vc3_blk", "vc3_cbr", "vc3_mc", "vc4_blk", "vc4_cbr", "vc4_mc", "vc5_blk", "vc5_cbr", "vc5_mc", "vc6_blk", "vc6_cbr", "vc6_mc", "vd1_blk", "vd1_cbr", "vd1_mc", "vd2_blk", "vd2_cbr", "vd2_mc", "vd3_blk", "vd3_cbr", "vd3_mc", "vd4_blk", "vd4_cbr", "vd4_mc", "vd5_blk", "vd5_cbr", "vd5_mc", "vd6_blk", "vd6_cbr", "vd6_mc", "vm3_blk", "vm3_cbr", "vm3_mc", "vm4_blk", "vm4_cbr", "vm4_mc", "vm5_blk", "vm5_cbr", "vm5_mc", "vm6_blk", "vm6_cbr", "vm6_mc", "vm7_blk", "vm7_cbr", "vm7_mc", "vn5_blk", "vn5_cbr", "vn5_mc", "vn6_blk", "vn6_cbr", "vn6_mc", "vn7_blk", "vn7_cbr", "vn7_mc", "vn8_blk", "vn8_cbr", "vn8_mc", "vq4_blk", "vq4_cbr", "vq4_mc", "vq5_blk", "vq5_cbr", "vq5_mc", "vq6_blk", "vq6_cbr", "vq6_mc", "vq7_blk", "vq7_cbr", "vq7_mc", "vr3_blk", "vr3_cbr", "vr3_mc", "vt6_blk", "vt6_cbr", "vt6_mc", "vu5_blk", "vu5_cbr", "vu5_mc", "x11_blk", "x11_cbr", "x11_mc", "x12_blk", "x12_cbr", "x12_mc", "xa1_blk", "xa1_cbr", "xa1_mc", "xa2_blk", "xa2_cbr", "xa2_mc", "xa3_blk", "xa3_cbr", "xa3_mc", "xa4_blk", "xa4_cbr", "xa4_mc", "xa5_blk", "xa5_cbr", "xa5_mc", "xa6_blk", "xa6_cbr", "xa6_mc", "xb1_blk", "xb1_cbr", "xb1_mc", "xb2_blk", "xb2_cbr", "xb2_mc", "xb3_blk", "xb3_cbr", "xb3_mc", "xb4_blk", "xb4_cbr", "xb4_mc", "xb5_blk", "xb5_cbr", "xb5_mc", "xb6_blk", "xb6_cbr", "xb6_mc", "xc1_blk", "xc1_cbr", "xc1_mc", "xc2_blk", "xc2_cbr", "xc2_mc", "xc3_blk", "xc3_cbr", "xc3_mc", "xc4_blk", "xc4_cbr", "xc4_mc", "xc5_blk", "xc5_cbr", "xc5_mc", "xc6_blk", "xc6_cbr", "xc6_mc", "xd1_blk", "xd1_cbr", "xd1_mc", "xd2_blk", "xd2_cbr", "xd2_mc", "xd3_blk", "xd3_cbr", "xd3_mc", "xd4_blk", "xd4_cbr", "xd4_mc", "xd5_blk", "xd5_cbr", "xd5_mc", "xd6_blk", "xd6_cbr", "xd6_mc", "xm3_blk", "xm3_cbr", "xm3_mc", "xm4_blk", "xm4_cbr", "xm4_mc", "xm5_blk", "xm5_cbr", "xm5_mc", "xm6_blk", "xm6_cbr", "xm6_mc", "xm7_blk", "xm7_cbr", "xm7_mc", "xn5_blk", "xn5_cbr", "xn5_mc", "xn6_blk", "xn6_cbr", "xn6_mc", "xn7_blk", "xn7_cbr", "xn7_mc", "xn8_blk", "xn8_cbr", "xn8_mc", "xq4_blk", "xq4_cbr", "xq4_mc", "xq5_blk", "xq5_cbr", "xq5_mc", "xq6_blk", "xq6_cbr", "xq6_mc", "xq7_blk", "xq7_cbr", "xq7_mc", "xr3_blk", "xr3_cbr", "xr3_mc", "xt6_blk", "xt6_cbr", "xt6_mc", "xu5_blk", "xu5_cbr", "xu5_mc", "yj1_blk", "yj1_cbr", "yj1_mc", "yj2_blk", "yj2_cbr", "yj2_mc", "yj3_blk", "yj3_cbr", "yj3_mc", "yj4_blk", "yj4_cbr", "yj4_mc", "yj5_blk", "yj5_cbr", "yj5_mc", "z21_blk", "z21_cbr", "z21_mc", "z22_blk", "z22_cbr", "z22_mc", "ze1_blk", "ze1_cbr", "ze1_mc", "ze2_blk", "ze2_cbr", "ze2_mc", "ze3_blk", "ze3_cbr", "ze3_mc", "ze4_blk", "ze4_cbr", "ze4_mc", "ze5_blk", "ze5_cbr", "ze5_mc", "ze6_blk", "ze6_cbr", "ze6_mc", "zf1_blk", "zf1_cbr", "zf1_mc", "zf2_blk", "zf2_cbr", "zf2_mc", "zf3_blk", "zf3_cbr", "zf3_mc", "zf4_blk", "zf4_cbr", "zf4_mc", "zf5_blk", "zf5_cbr", "zf5_mc", "zf6_blk", "zf6_cbr", "zf6_mc", "zg1_blk", "zg1_cbr", "zg1_mc", "zg2_blk", "zg2_cbr", "zg2_mc", "zg3_blk", "zg3_cbr", "zg3_mc", "zg4_blk", "zg4_cbr", "zg4_mc", "zg5_blk", "zg5_cbr", "zg5_mc", "zg6_blk", "zg6_cbr", "zg6_mc", "zh1_blk", "zh1_cbr", "zh1_mc", "zh2_blk", "zh2_cbr", "zh2_mc", "zh3_blk", "zh3_cbr", "zh3_mc", "zh4_blk", "zh4_cbr", "zh4_mc", "zh5_blk", "zh5_cbr", "zh5_mc", "zh6_blk", "zh6_cbr", "zh6_mc", "zm3_blk", "zm3_cbr", "zm3_mc", "zm4_blk", "zm4_cbr", "zm4_mc", "zm5_blk", "zm5_cbr", "zm5_mc", "zm6_blk", "zm6_cbr", "zm6_mc", "zm7_blk", "zm7_cbr", "zm7_mc", "zn5_blk", "zn5_cbr", "zn5_mc", "zn6_blk", "zn6_cbr", "zn6_mc", "zn7_blk", "zn7_cbr", "zn7_mc", "zn8_blk", "zn8_cbr", "zn8_mc", "zq4_blk", "zq4_cbr", "zq4_mc", "zq5_blk", "zq5_cbr", "zq5_mc", "zq6_blk", "zq6_cbr", "zq6_mc", "zq7_blk", "zq7_cbr", "zq7_mc", "zr3_blk", "zr3_cbr", "zr3_mc", "zt6_blk", "zt6_cbr", "zt6_mc", "zu5_blk", "zu5_cbr", "zu5_mc"};
    };
    class flagright : usp_flags
    {
        label="Right Shoulder";
        hiddenselection="_FlagRight";
        values[]={"DEFAULT", "aus_ir_mc", "bos_ir_mc", "bra_ir_mc", "can_ir_blk", "can_ref_gry", "cze_ir_mc", "fin_ir_rgr", "fra_ref", "ger_ir_flk", "ger_ir_mc", "ger_ir_rgr", "isr_ir_blk", "isr_ir_mc", "isr_ir_tan", "isr_ref_blk", "jap_ir_mc", "nld", "nld_ir_mc", "nld_sub2", "nld_sub", "nld_tan", "nor_ref", "pol_ref", "pol_ref_sub", "rus_ir_mc", "rus_ref", "swe_ref_rgr", "tur_ir_mc", "uk", "uk_ir_blk", "uk_ir_grn", "uk_ir_mc", "uk_ref_mc", "usa_can_blk", "usa_can_ref_mc", "usa_col2_rev", "usa_col_rev", "usa_fog", "usa_ir_aor2_rev", "usa_ir_blk_rev", "usa_ir_blk_skull_rev", "usa_ir_grn_rev", "usa_ir_mc_rev", "usa_ir_mc_skull_rev", "usa_ir_rgr_rev", "usa_ir_tan_rev", "usa_ref_rev", "usa_tan_rev", "usa_tx_ir_rgr", "usa_uk_ir_blk2", "usa_uk_ir_blk", "usa_uk_ir_mc", "usa_usaf", "zea_ir_mc", "aim_face", "aim_small", "all_lives", "amazingly_enough", "bad_feeling", "business_boomin_blk", "business_boomin", "business_boomin_grn", "business_boomin_gry", "calico_jack", "deez_nuts", "extremist_advisory", "fuck_face", "grow_some", "homer_bush", "knock_knock", "not_required", "outta_compliance", "pissed_off", "quality_fucks", "return_fire", "salty_bitch", "savage_mode", "shooters", "warheads_foreheads", "writing_checks", "your_best", "your_huckleberry", "zero_fucks"};
    };
};
