#include "mgresultdealer.h"

// global
f32 _atan2d(f32, f32);
s16 HmfAnimRead(s32, s32, s32);

void func_8000BBFC_C7FC(u16, s16);
void func_8000BC48_C848(u16, u16);
void func_8000BE5C_CA5C(s32, f32, f32);
void func_80013320_13F20(s16, s16);
void func_80013390_13F90(s16, s16, s32, void (*)(s16));
s32 func_80014618_15218(s16, s32);
void func_80014714_15314(s16, s16);
void func_80017954_18554(s16, s16, s16, s16);
s16 func_80017AD8_186D8(s32);
s16 func_80019828_1A428(s16, s16);
void func_8003302C_33C2C(s16, s32);

// local
void func_8010630C_4ECB1C_mgresultdealer(s16);
void func_80106A50_4ED260_mgresultdealer(omObjData*);
void func_80106B94_4ED3A4_mgresultdealer(omObjData*);
void func_80106CC8_4ED4D8_mgresultdealer(omObjData*);
void func_80106D94_4ED5A4_mgresultdealer(void);
void func_80106D9C_4ED5AC_mgresultdealer(void);
s8 func_80106EA0_4ED6B0_mgresultdealer(void);
void func_80106EAC_4ED6BC_mgresultdealer(void);
void func_80106EC0_4ED6D0_mgresultdealer(omObjData*);
void func_80106EEC_4ED6FC_mgresultdealer(void);
// void func_8010705C_4ED86C_mgresultdealer(omObjData*);
void func_801070EC_4ED8FC_mgresultdealer(s16);
// void func_801072A8_4EDAB8_mgresultdealer(s16);
void func_801073F4_4EDC04_mgresultdealer(void);
void func_80107448_4EDC58_mgresultdealer(void);
// void func_80107888_4EE098_mgresultdealer(omObjData*);
void func_80107E44_4EE654_mgresultdealer(s32);
s8 func_80108034_4EE844_mgresultdealer(void);
// void func_80108194_4EE9A4_mgresultdealer(void);
void func_80108260_4EEA70_mgresultdealer(void);
s8 func_8010829C_4EEAAC_mgresultdealer(void);
// void func_801082A8_4EEAB8_mgresultdealer(Gfx**, s32, s32);
void func_80108544_4EED54_mgresultdealer(void);
void func_80108560_4EED70_mgresultdealer(s32);
// void func_80108AEC_4EF2FC_mgresultdealer(omObjData*);
void func_801090B4_4EF8C4_mgresultdealer(void);
s32 func_801090E8_4EF8F8_mgresultdealer(void);
s32 func_801090F4_4EF904_mgresultdealer(void);
void func_80109100_4EF910_mgresultdealer(void);
s8 func_80109478_4EFC88_mgresultdealer(void);
void func_80109710_4EFF20_mgresultdealer(omObjData*);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_801059A0_4EC1B0_mgresultdealer);

void func_80105C88_4EC498_mgresultdealer(void) {
    omObjData* temp_s1;
    f32 temp_v0;
    s32 var_v0;
    s32 var_s0;

    temp_s1 = D_8010A250_4F0A60_mgresultdealer;
    var_s0 = D_801098C0_4F00D0_mgresultdealer;
    switch (var_s0) {
    case 0:
        if ((D_8010A264_4F0A74_mgresultdealer * D_8010A258_4F0A68_mgresultdealer) > 0) {
            HuAudSeqPlay(0x46);
        } else {
            HuAudSeqPlay(0x47);
        }
        D_801098CC_4F00DC_mgresultdealer = 0;
        var_s0++;
        break;
    case 1:
        D_801098CC_4F00DC_mgresultdealer++;
        var_v0 = D_801098CC_4F00DC_mgresultdealer < 0x15;
        var_s0 += var_v0 ^ 1;
        break;
    case 2:
        var_s0++;
        func_801090B4_4EF8C4_mgresultdealer();
        break;
    case 3:
        var_v0 = func_801090E8_4EF8F8_mgresultdealer() != 0;
        var_s0 += var_v0;
        break;
    case 4:
        if (func_80109478_4EFC88_mgresultdealer() == 1) {
            D_801098CC_4F00DC_mgresultdealer = 0;
            var_s0++;
            break;
        }
        break;
    case 5:
        var_v0 = func_801090F4_4EF904_mgresultdealer() != 0;
        var_s0 += var_v0;
        break;
    case 6:
        D_801098CC_4F00DC_mgresultdealer++;
        if (D_801098CC_4F00DC_mgresultdealer > 0) {
            var_s0++;
            if ((D_8010A264_4F0A74_mgresultdealer * D_8010A258_4F0A68_mgresultdealer) <= 0) {
                var_s0 = 0xB;
            }
        }
        break;
    case 7:
        var_s0++;
        func_80107E44_4EE654_mgresultdealer(D_8010A264_4F0A74_mgresultdealer * D_8010A258_4F0A68_mgresultdealer);
        func_8001C624_1D224(temp_s1->model[0], HmfModelData[temp_s1->motion[3]].unk02, 0, 0x1E, 2);
        break;
    case 8:
        var_v0 = func_80108034_4EE844_mgresultdealer() == 1;
        var_s0 += var_v0;
        break;
    case 9:
        func_801073F4_4EDC04_mgresultdealer();
        func_8001C624_1D224(temp_s1->model[0], HmfModelData[temp_s1->motion[1]].unk02, 0, 0x1E, 0);
        func_8004ACE0_4B8E0(0x274, D_8010A266_4F0A76_mgresultdealer);
        HuAudFXPlay(0x516);
        if ((D_8010A264_4F0A74_mgresultdealer * D_8010A258_4F0A68_mgresultdealer) >= 0x64) {
            func_8001C258_1CE58(temp_s1->model[4], 4, 0);
            func_8001C258_1CE58(temp_s1->model[5], 4, 0);
            func_8001C258_1CE58(temp_s1->model[6], 4, 0);
        } else if ((D_8010A264_4F0A74_mgresultdealer * D_8010A258_4F0A68_mgresultdealer) >= 0x32) {
            func_8001C258_1CE58(temp_s1->model[4], 4, 0);
            func_8001C258_1CE58(temp_s1->model[6], 4, 0);
        } else {
            func_8001C258_1CE58(temp_s1->model[5], 4, 0);
        }
        var_s0++;
        func_80106EAC_4ED6BC_mgresultdealer();
        break;
    case 10:
        temp_v0 = HmfModelData[temp_s1->model[0]].unk40;
        if (D_800CCF58_CDB58[HmfModelData[temp_s1->model[0]].unk02].unk02 <= temp_v0) {
            D_801098CC_4F00DC_mgresultdealer = 0;
            var_s0 = 0xF;
        }
        break;
    case 11:
        var_s0++;
        func_80108260_4EEA70_mgresultdealer();
        break;
    case 12:
        if (func_8010829C_4EEAAC_mgresultdealer() == 1) {
            var_s0++;
            func_80106D9C_4ED5AC_mgresultdealer();
        }
        break;
    case 13:
        if (func_80106EA0_4ED6B0_mgresultdealer() == 1) {
            // checks if player is CPU before attempting to vibrate, even though omVibrate does the same thing?
            if (!(GwPlayer[D_8010A266_4F0A76_mgresultdealer].stat & 1)) { // 1 == PLAYER_IS_CPU?
                omVibrate(D_8010A266_4F0A76_mgresultdealer, 0x14, 0, 0x14);
            }
            var_s0++;
            func_80107448_4EDC58_mgresultdealer();
            func_8001C624_1D224(temp_s1->model[0], HmfModelData[temp_s1->motion[2]].unk02, 0, 0x1E, 0);
            func_8004ACE0_4B8E0(0x26B, D_8010A266_4F0A76_mgresultdealer);
        }
        break;
    case 14:
        temp_v0 = HmfModelData[temp_s1->model[0]].unk40;
        if (D_800CCF58_CDB58[HmfModelData[temp_s1->model[0]].unk02].unk02 <= temp_v0) {
            D_801098CC_4F00DC_mgresultdealer = 0;
            var_s0++;
            break;
        }
        break;
    case 15:
        D_801098CC_4F00DC_mgresultdealer++;
        var_v0 = D_801098CC_4F00DC_mgresultdealer < 0xF;
        var_s0 += var_v0 ^ 1;
        break;
    case 16:
        D_8010A264_4F0A74_mgresultdealer = 0;
        D_8010A258_4F0A68_mgresultdealer = 0;
        WipeCreateOut(0, 0x14);
        HuAudSeqFadeOut(0x1E);
        func_8004AB0C_4B70C(0x1E);
        var_s0++;
        break;
    case 17:
        if (WipeStatGet() == 0) {
            func_80037258_37E58();
            omOvlReturnEx(1);
        }
        break;
    }
    D_801098C0_4F00D0_mgresultdealer = var_s0;
}

void func_801061C8_4EC9D8_mgresultdealer(void) {
    s16 temp_v0;

    temp_v0 = func_8000B108_BD08(0x190002, 0x2002B9);
    Hu3DModelPosSet(temp_v0, 0.0f, 0.0f, 0.0f);
    func_80019828_1A428(temp_v0, 2);
    func_80013320_13F20(temp_v0, 0);
    func_8010630C_4ECB1C_mgresultdealer(temp_v0);
}

void func_80106234_4ECA44_mgresultdealer(void) {
    if (D_800D530C_D5F0C == 1) { // omSysExitReq?
        if (D_801098D0_4F00E0_mgresultdealer == FALSE) { // if no wipe created?
            WipeCreateOut(0, 0x14);
            D_801098D0_4F00E0_mgresultdealer = 1;
            return;
        }
        if (WipeStatGet() == 0) {
            HuAudSeqFadeOut(0x1E);
            func_8004AB0C_4B70C(0x1E);
            func_80037258_37E58();
            omOvlReturnEx(1);
        }
    }
}

void func_801062B4_4ECAC4_mgresultdealer(void) {
    u16 temp_s0;

    temp_s0 = InitEspriteSlot(func_8000B838_C438(0x190000), 0U, 0U) & 0xFFFF;
    func_8000BBD4_C7D4(temp_s0, 0xA0, 0x78);
    func_8000BC48_C848(temp_s0, 0x4000);
}

// some crazy stack stuff
INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_8010630C_4ECB1C_mgresultdealer);
// void func_8010630C_4ECB1C_mgresultdealer(s16 arg0) {
//     // f32 sp10;
//     // f32 sp14;
//     // f32 sp18;
//     // f32 sp1C; // 4
//     // f32 sp20;
//     // f32 sp24;
//     // f32 sp28;
//     // f32 sp2C; // 8
//     // f32 sp30;
//     // f32 sp34;
//     // f32 sp38;
//     // f32 sp3C; // 12
//     // f32 sp40;
//     // f32 sp44;
//     // f32 sp48;
//     // f32 sp4C; // 16
//     f32 array[4][4];
//     HmfData_UnkBC_Struct *temp_s1;
//     Vec *temp_v0_2;
//     Vec *temp_v1;
//     f32 temp_f0;
//     // f32 temp_f0_2;
//     f32 temp_f0_3;
//     f32 temp_f20;
//     f32 temp_f22;
//     f32 temp_f24;
//     f32 temp_f26;
//     s32 temp_a0;
//     s32 var_a0;
//     s8 temp_v0;
//     s8 var_s0;

//     temp_s1 = HmfModelData[arg0].hmf->unkBC;
//     temp_f22 = temp_s1->unk08.x - temp_s1->unk14.x;
//     temp_f26 = temp_s1->unk08.y - temp_s1->unk14.y;
//     temp_f24 = temp_s1->unk08.z - temp_s1->unk14.z;
//     CZoom = HuSqrtf((temp_f22 * temp_f22) + (temp_f26 * temp_f26) + (temp_f24 * temp_f24));
//     temp_f0 = _atan2d(temp_f24, temp_f22);
//     CRot.y = -(temp_f0 - 90.0f);
//     temp_f20 = -temp_f0;
//     array[0][0] = array[2][1] = HuMathCos(temp_f20);
//     // array[10] = temp_f0_2;
//     // array[0] = temp_f0_2;
//     temp_f0_3 = -HuMathSin(temp_f20);
//     array[1][3] = temp_f0_3;
//     array[0][2] = HuMathSin(temp_f20);
//     array[3][3] = 1.0f;
//     array[1][1] = 1.0f;
//     array[1][0] = array[3][0] = array[0][1] = array[2][1] = array[3][1] = array[1][2] = array[3][2] = array[0][3] = array[1][3] = array[2][3] = 0.0f;
//     // array[7] = 0.0f;
//     // array[3] = 0.0f;
//     // sp48 = 0.0f;
//     // sp28 = 0.0f;
//     // sp44 = 0.0f;
//     // sp34 = 0.0f;
//     // sp14 = 0.0f;
//     // sp40 = 0.0f;
//     // sp20 = 0.0f;
//     CRot.x = -_atan2d((temp_f22 * array[0][0]) + temp_f26 + (temp_f24 * 0.0f), (temp_f22 * array[2][0]) + (temp_f26 * 0.0f) + (temp_f24 * temp_f0_3));
//     CRot.z = 0.0f;
//     if (CZoom > 32000.0f) {
//         CZoom = 32000.0f;
//     }
//     Center.x = temp_s1->unk14.x;
//     Center.y = temp_s1->unk14.y;
//     Center.z = temp_s1->unk14.z;
//     // var_s0 = 0;
//     // var_a0 = 0 << 0x18;
//     for (var_s0 = 0; var_s0 < 4; var_s0++) {
//         // temp_a0 = var_a0 >> 0x18;
//         temp_v1 = &CRotM[var_s0];
//         temp_v1->x = CRot.x;
//         temp_v1->y = CRot.y;
//         temp_v1->z = CRot.z;
//         temp_v0_2 = &CenterM[var_s0];
//         temp_v0_2->x = Center.x;
//         temp_v0_2->y = Center.y;
//         temp_v0_2->z = Center.z;
//         CZoomM[var_s0] = CZoom;
//         Hu3DCamSetPerspective(var_s0, temp_s1->unk2C, 80.0f, 8000.0f);
//         // temp_v0 = var_s0 + 1;
//         // var_s0 = temp_v0;
//         // var_a0 = var_s0 << 0x18;
//     }
// }

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_801065D0_4ECDE0_mgresultdealer);
// void func_801065D0_4ECDE0_mgresultdealer(void) {
//     omObjData* temp_v0;
//     s16 temp_s1;
//     s8 temp_s2;

//     temp_v0 = omAddObj(0x14, 8U, 5U, -1, NULL);
//     D_8010A250_4F0A60_mgresultdealer = temp_v0;
//     temp_s2 = D_8010A266_4F0A76_mgresultdealer;
//     temp_s1 = GwPlayer[temp_s2].chr;
//     temp_v0->model[0] = func_8000B108_BD08(*D_800A178C[temp_s1] | *D_800A1794[temp_s1], 0x2A9);
//     func_8001C814_1D414(temp_v0->model[0], 2, 2);
//     func_8001C8A8_1D4A8(temp_v0->model[0], 1);
//     temp_v0->model[1] = func_8000B108_BD08(0x83, 0x2B9);
//     func_8001C814_1D414(temp_v0->model[1], 2, 0);
//     func_8001C258_1CE58(temp_v0->model[1], 4, 4);
//     Hu3DModelPosSet(temp_v0->model[1], 0.0f, 140.0f, 0.0f);
//     func_8001C8A8_1D4A8(temp_v0->model[1], 2);
//     temp_v0->model[2] = func_8000B108_BD08(0x190003, 0x2B9);
//     func_8001C814_1D414(temp_v0->model[2], 2, 0);
//     func_8001C258_1CE58(temp_v0->model[2], 4, 4);
//     Hu3DModelPosSet(temp_v0->model[2], 0.0f, 400.0f, -35.0f);
//     func_8001C8A8_1D4A8(temp_v0->model[2], 2);
//     temp_v0->model[3] = func_8000B108_BD08(9, 0x2B9);
//     Hu3DModelPosSet(temp_v0->model[3], 0.0f, -5.0f, -35.0f);
//     Hu3DModelScaleSet(temp_v0->model[3], 1.0f, 1.0f, 1.0f);
//     func_8001C8A8_1D4A8(temp_v0->model[3], 1);
//     temp_v0->model[4] = func_8000B108_BD08(0x190006, 0x2B9);
//     temp_v0->model[5] = func_8000B108_BD08(0x190007, 0x2B9);
//     temp_v0->model[6] = func_8000B108_BD08(0x190008, 0x2B9);
//     func_8001C8A8_1D4A8(temp_v0->model[4], 2);
//     func_8001C8A8_1D4A8(temp_v0->model[5], 2);
//     func_8001C8A8_1D4A8(temp_v0->model[6], 2);
//     func_8001C258_1CE58(temp_v0->model[4], 4, 4);
//     func_8001C258_1CE58(temp_v0->model[5], 4, 4);
//     func_8001C258_1CE58(temp_v0->model[6], 4, 4);
//     D_80109A64_4F0274_mgresultdealer[0] = func_80017790_18390(temp_v0->model[0], 2, temp_s1, func_80017BB8_187B8(temp_s1, 0xA4));
//     D_80109A64_4F0274_mgresultdealer[1] = func_80017AD8_186D8(func_80017BB8_187B8(temp_s1, 0xAA));
//     D_80109A64_4F0274_mgresultdealer[2] = func_80017AD8_186D8(func_80017BB8_187B8(temp_s1, 0xA5));
//     D_80109A64_4F0274_mgresultdealer[3] = func_80017AD8_186D8(func_80017BB8_187B8(temp_s1, 0xA6));
//     func_8001C514_1D114(temp_v0->model[0]);
//     func_80017954_18554(temp_v0->model[0], 2, GwPlayer[temp_s2].chr, D_80109A64_4F0274_mgresultdealer[0]);
//     func_8000B460_C060(temp_v0, 0U, func_80017BB8_187B8(temp_s1, 0));
//     func_8000B460_C060(temp_v0, 1U, func_80017BB8_187B8(temp_s1, 0x2F));
//     func_8000B460_C060(temp_v0, 2U, func_80017BB8_187B8(temp_s1, D_801099AA_4F01BA_mgresultdealer[temp_s1]));
//     func_8000B460_C060(temp_v0, 3U, func_80017BB8_187B8(temp_s1, 0x25));
//     func_8001C5B4_1D1B4(temp_v0->model[0], *temp_v0->motion);
//     func_8001C814_1D414(temp_v0->model[0], 2, 2);
//     temp_v0->trans.x = 0.0f;
//     temp_v0->trans.y = 0.0f;
//     temp_v0->trans.z = -35.0f;
//     Hu3DModelPosSet(temp_v0->model[0], temp_v0->trans.x, temp_v0->trans.y, -35.0f);
//     omPrcSetDestructor(0, func_80106D94_4ED5A4_mgresultdealer);
//     D_8010A250_4F0A60_mgresultdealer = func_80106A50_4ED260_mgresultdealer;
//     while(TRUE) {
//         D_8010A254_4F0A64_mgresultdealer(temp_v0);
//         HuPrcVSleep();
//     }
// }

void func_80106A50_4ED260_mgresultdealer(omObjData* arg0) {
    if (D_801098E0_4F00F0_mgresultdealer != 0) {
        D_801098E8_4F00F8_mgresultdealer.x -= D_80109A60_4F0270_mgresultdealer;
        D_80109A60_4F0270_mgresultdealer += 0.98f;
        D_801098F0_4F0100_mgresultdealer.x += 30.0f;
        if (D_801098E8_4F00F8_mgresultdealer.x <= 180.0f) {
            func_8001C258_1CE58(arg0->model[1], 4, 0);
            D_801098E8_4F00F8_mgresultdealer.x = 180.0f;
            D_80109A60_4F0270_mgresultdealer = -10.0f;
            D_801098E2_4F00F2_mgresultdealer = 1;
            HuAudFXPlay(0x515);
            HuAudFXPlay(0x518);
            D_8010A254_4F0A64_mgresultdealer = func_80106B94_4ED3A4_mgresultdealer;
        }
        Hu3DModelPosSet(arg0->model[2], D_801098E4_4F00F4_mgresultdealer.x, D_801098E4_4F00F4_mgresultdealer.y, D_801098E4_4F00F4_mgresultdealer.z);
        Hu3DModelRotSet(arg0->model[2], D_801098F0_4F0100_mgresultdealer.x, D_801098F0_4F0100_mgresultdealer.y, D_801098F0_4F0100_mgresultdealer.z);
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80106B94_4ED3A4_mgresultdealer);

void func_80106CC8_4ED4D8_mgresultdealer(omObjData* arg0) {
    D_801098E8_4F00F8_mgresultdealer.x -= D_80109A60_4F0270_mgresultdealer;
    D_80109A60_4F0270_mgresultdealer += 0.98f;
    if (D_801098E8_4F00F8_mgresultdealer.x <= 0.0f) {
        D_801098E8_4F00F8_mgresultdealer.x = 0.0f;
        D_801098E0_4F00F0_mgresultdealer = 0;
        D_8010A254_4F0A64_mgresultdealer = func_80106A50_4ED260_mgresultdealer;
    }
    Hu3DModelPosSet(arg0->model[2], D_801098E4_4F00F4_mgresultdealer.x, D_801098E4_4F00F4_mgresultdealer.y, D_801098E4_4F00F4_mgresultdealer.z);
    Hu3DModelRotSet(arg0->model[2], D_801098F0_4F0100_mgresultdealer.x, D_801098F0_4F0100_mgresultdealer.y, D_801098F0_4F0100_mgresultdealer.z);
}

void func_80106D94_4ED5A4_mgresultdealer(void) {
}

void func_80106D9C_4ED5AC_mgresultdealer(void) {
    omObjData* temp_s1;

    temp_s1 = D_8010A250_4F0A60_mgresultdealer;
    D_801098E0_4F00F0_mgresultdealer = 1;
    D_801098E1_4F00F1_mgresultdealer = 0;
    D_801098E2_4F00F2_mgresultdealer = 0;
    D_801098E4_4F00F4_mgresultdealer.x = 0.0f;
    D_801098E4_4F00F4_mgresultdealer.y = 400.0f;
    D_801098E4_4F00F4_mgresultdealer.z = -55.0f;
    D_801098F0_4F0100_mgresultdealer.x = 160.0f;
    D_801098F0_4F0100_mgresultdealer.y = 20.0f;
    D_801098F0_4F0100_mgresultdealer.z = 0.0f;
    D_80109A60_4F0270_mgresultdealer = 0.0f;
    Hu3DModelPosSet(temp_s1->model[2], D_801098E4_4F00F4_mgresultdealer.x, 400.0f, -55.0f);
    Hu3DModelRotSet(temp_s1->model[2], D_801098F0_4F0100_mgresultdealer.x, D_801098F0_4F0100_mgresultdealer.y, D_801098F0_4F0100_mgresultdealer.z);
    func_8001C258_1CE58(temp_s1->model[1], 4, 4);
    func_8001C258_1CE58(temp_s1->model[2], 4, 0);
}

s8 func_80106EA0_4ED6B0_mgresultdealer(void) {
    return D_801098E2_4F00F2_mgresultdealer;
}

void func_80106EAC_4ED6BC_mgresultdealer(void) {
    D_8010A254_4F0A64_mgresultdealer = func_80106EC0_4ED6D0_mgresultdealer;
}

void func_80106EC0_4ED6D0_mgresultdealer(omObjData* arg0) {
    func_80106EEC_4ED6FC_mgresultdealer();
    D_8010A254_4F0A64_mgresultdealer = func_80106A50_4ED260_mgresultdealer;
}

INCLUDE_RODATA("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", D_801099A8_4F01B8_mgresultdealer);
// const s16 D_801099AA_4F01BA_mgresultdealer[8] = {
//     0x36, 0x37, 0x3A, 0x37, 0x36, 0x37, 0x36, 0x37
// };

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80106EEC_4ED6FC_mgresultdealer);

void func_8010705C_4ED86C_mgresultdealer(omObjData* arg0) {
    s16 i;

    for (i = 0; i < 4; i++) { // MB_MAX_PLAYERS?
        if (!((D_8010990C_4F011C_mgresultdealer + i) & 7)) {
            func_801070EC_4ED8FC_mgresultdealer(D_801099F8_4F0208_mgresultdealer[i]);
        }
    }
    D_8010990C_4F011C_mgresultdealer++;
}

void func_801070EC_4ED8FC_mgresultdealer(s16 arg0) {
    HmfModelData_UnkBC_Unk58_Struct* var_s0;
    s16 temp_v0_2;
    s16 var_a0;

    temp_v0_2 = HmfModelData[arg0].hmf->unk1A;
    var_s0 = HmfModelData[arg0].unkBC->unk58;

    for (var_a0 = 0; var_a0 < temp_v0_2; var_a0++) {
        if (var_s0->unk0C.y <= 0.0f) {
            var_s0->unk0C.x = 2.0f * (100.0f - (((rand8() & 0xFF) % 200) & 0xFF));
            var_s0->unk0C.y = 500.0f;
            var_s0->unk0C.z = ((((rand8() & 0xFF) * 0x7D) >> 5) - 0x1F4);

            var_a0 = (rand8() & 0xFF) * 5;
            var_s0->unk18.x = ((var_a0 >> 7) - 5) / 2.0f;
            var_s0->unk18.y = 0.0f;
            var_a0 = (rand8() & 0xFF) * 5;
            var_s0->unk18.z = ((var_a0 >> 7) - 5) / 2.0f;

            var_s0->unk08 = 3.0f;
            return;
        }
        var_s0++;
    }
}

void func_801072A8_4EDAB8_mgresultdealer(s16 arg0) {
    HmfData* temp00 = HmfModelData[arg0].hmf;
    HmfModelData_UnkBC_Struct* temp_a0 = HmfModelData[arg0].unkBC;
    s16 temp_t0 = temp00->unk1A;
    s16 temp_a3 = temp_a0->unk02;

    HmfModelData_UnkBC_Unk58_Struct* var_v1;
    s16 i;

    if (!temp_a3) {
        temp_a0->unk04 &= 0xFFFB;
        var_v1 = temp_a0->unk58;
            for (i = 0; i < temp_t0; i++) {
                var_v1->unk0C.x = var_v1->unk0C.y = var_v1->unk0C.z = 0.0f;
                var_v1->unk24.x = var_v1->unk24.y = var_v1->unk24.z = 0.0f;
                var_v1->unk08 = 0.0f;
                var_v1->unk04 = 1.0f;
                var_v1++;
            }
        temp_a0->unk02++;
    }

    var_v1 = temp_a0->unk58;
    for (i = 0; i < temp_t0; i++) {
        if (var_v1->unk0C.y > 0.0f) {
            var_v1->unk0C.x += var_v1->unk18.x;
            var_v1->unk0C.y += var_v1->unk18.y - 8.0f;
            var_v1->unk0C.z += var_v1->unk18.z;
        } else {
            var_v1->unk08 = 0.0f;
        }
        var_v1++;
    }
}

void func_801073F4_4EDC04_mgresultdealer(void) {
    func_80017954_18554(D_8010A250_4F0A60_mgresultdealer->model[0], 2, GwPlayer[D_8010A266_4F0A76_mgresultdealer].chr, D_80109A68_4F0278_mgresultdealer);
}

// apparently this adds a nop for some reason, throwing off everything after
INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80107448_4EDC58_mgresultdealer);
// void func_80107448_4EDC58_mgresultdealer(void) {
//     func_80017954_18554(D_8010A250_4F0A60_mgresultdealer->model[0], 2, GwPlayer[D_8010A266_4F0A76_mgresultdealer].chr, D_80109A6A_4F027A_mgresultdealer);
// }

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_801074A0_4EDCB0_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80107888_4EE098_mgresultdealer);

void func_80107E3C_4EE64C_mgresultdealer(void) {
}

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80107E44_4EE654_mgresultdealer);

s8 func_80108034_4EE844_mgresultdealer(void) {
    return D_80109911_4F0121_mgresultdealer;
}

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80108040_4EE850_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80108194_4EE9A4_mgresultdealer);
// void func_80108194_4EE9A4_mgresultdealer(void) {
//     f32 temp_f2;
//     s32 var_a0;

//     if (D_80109930_4F0140_mgresultdealer != 0) {
//         temp_f2 = D_80109934_4F0144_mgresultdealer * 8.5f;
//         if (temp_f2 >= 2.1474836e9f) {
//             var_a0 = (s32) (temp_f2 - 2.1474836e9f) | 0x80000000;
//         } else {
//             var_a0 = temp_f2;
//         }
//         func_80108560_4EED70_mgresultdealer(var_a0 & 0xFF);
//         D_80109934_4F0144_mgresultdealer++;
//         if (D_80109934_4F0144_mgresultdealer >= 0x1E) {
//             func_80108560_4EED70_mgresultdealer(0xFF);
//             D_80109931_4F0141_mgresultdealer = 1;
//             D_80109930_4F0140_mgresultdealer = 0;
//         }
//     }
// }

void func_80108258_4EEA68_mgresultdealer(void) {
}

void func_80108260_4EEA70_mgresultdealer(void) {
    D_80109930_4F0140_mgresultdealer = 1;
    D_80109931_4F0141_mgresultdealer = 0;
    D_80109934_4F0144_mgresultdealer = 0;
    func_80108544_4EED54_mgresultdealer();
    func_80108560_4EED70_mgresultdealer(0);
}

s8 func_8010829C_4EEAAC_mgresultdealer(void) {
    return D_80109931_4F0141_mgresultdealer;
}

// display lists, help
INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_801082A8_4EEAB8_mgresultdealer);

void func_80108544_4EED54_mgresultdealer(void) {
    D_80109938_4F0148_mgresultdealer = 1;
}

void func_80108554_4EED64_mgresultdealer(void) {
    D_80109938_4F0148_mgresultdealer = 0;
}

void func_80108560_4EED70_mgresultdealer(s32 arg0) {
    D_8010993A_4F014A_mgresultdealer = arg0 & 0xFF;
}

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80108570_4EED80_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80108AEC_4EF2FC_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80108BD4_4EF3E4_mgresultdealer);

void func_80109044_4EF854_mgresultdealer(void) {
    s32 temp_v0;

    if (D_80109940_4F0150_mgresultdealer != 0) {
        temp_v0 = D_80109950_4F0160_mgresultdealer + 1;
        D_80109950_4F0160_mgresultdealer = temp_v0;
        if (temp_v0 >= 0xF) {
            D_80109940_4F0150_mgresultdealer = 0;
            D_80109941_4F0151_mgresultdealer = 1;
            D_80109950_4F0160_mgresultdealer = 0;
            D_8010A244_4F0A54_mgresultdealer = 0;
            D_8010A260_4F0A70_mgresultdealer = func_80109710_4EFF20_mgresultdealer;
        }
    }
}

void func_801090AC_4EF8BC_mgresultdealer(void) {
}

void func_801090B4_4EF8C4_mgresultdealer(void) {
    D_80109940_4F0150_mgresultdealer = 1;
    D_80109941_4F0151_mgresultdealer = 0;
    D_80109944_4F0154_mgresultdealer = 0;
    func_80109100_4EF910_mgresultdealer();
}

s32 func_801090E8_4EF8F8_mgresultdealer(void) {
    return D_8010A240_4F0A50_mgresultdealer;
}

s32 func_801090F4_4EF904_mgresultdealer(void) {
    return D_8010A244_4F0A54_mgresultdealer;
}

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80109100_4EF910_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_801093A0_4EFBB0_mgresultdealer);

s8 func_80109478_4EFC88_mgresultdealer(void) {
    return D_80109941_4F0151_mgresultdealer;
}

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80109484_4EFC94_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80109710_4EFF20_mgresultdealer);
