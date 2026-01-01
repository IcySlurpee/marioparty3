#include "ovl_42.h"

void omSetRot(omObjData*, f32, f32, f32);
void omSetSca(omObjData*, f32, f32, f32);
void omSetTra(omObjData*, f32, f32, f32);
s32 func_8000B638_C238(void);
void func_8000BC48_C848(u16, u16);
void func_8001C624_1D224(s16, s16, s16, s16, s32);
void func_800557A0_563A0(void);
void func_8005B63C_5C23C(s16, s32, s32);
void func_8005D294_5DE94(s16);
s16 func_8005E0C0_5ECC0(s16);
void func_8005F904_60504(void);
s16 func_80060880_61480(s16, s16, s32);
void func_80060C14_61814(u16, s32);
void func_80060EA8_61AA8(u16, u16);
void func_80061100_61D00(s16, s16);

void func_80105C40_2FC510_game_guys_roulette(void);
void func_80105CD0_2FC5A0_game_guys_roulette(omObjData*);
void func_80105E10_2FC6E0_game_guys_roulette(Unk_D8010AAD6_3013A6_Struct*);
void func_80105F70_2FC840_game_guys_roulette(void);
void func_80106428_2FCCF8_game_guys_roulette(omObjData*);
void func_801068E8_2FD1B8_game_guys_roulette(omObjData*);
void func_801069DC_2FD2AC_game_guys_roulette(omObjData*);
void func_80106B74_2FD444_game_guys_roulette(omObjData*);
void func_80106C58_2FD528_game_guys_roulette(omObjData*);
void func_80106DD8_2FD6A8_game_guys_roulette(omObjData*);
void func_80106EA4_2FD774_game_guys_roulette(omObjData*);
void func_801070C4_2FD994_game_guys_roulette(void);
void func_80107104_2FD9D4_game_guys_roulette(void);
void func_8010726C_2FDB3C_game_guys_roulette(s16);
void func_801073AC_2FDC7C_game_guys_roulette(void);
void func_80107A00_2FE2D0_game_guys_roulette(void);
void func_80107AA8_2FE378_game_guys_roulette(void);
void func_80107B20_2FE3F0_game_guys_roulette(void);
void func_80108414_2FECE4_game_guys_roulette(void);
void func_80108480_2FED50_game_guys_roulette(void);
void func_801088B0_2FF180_game_guys_roulette(omObjData*);
void func_80108998_2FF268_game_guys_roulette(void);
void func_801089EC_2FF2BC_game_guys_roulette(omObjData*);
void func_80108A9C_2FF36C_game_guys_roulette(void*, s32);

void func_80108D20_2FF5F0_game_guys_roulette(s16, s16);
s32 func_80109078_2FF948_game_guys_roulette(void);
void func_80109D14_3005E4_game_guys_roulette(void);

void func_801059A0_2FC270_game_guys_roulette() {
    func_80105C40_2FC510_game_guys_roulette();
}

s32 func_801059BC_2FC28C_game_guys_roulette(f32 arg0) {
    // rand8 returns an unsigned byte
    u8 randomByte1 = rand8();
    u8 randomByte2 = rand8();
    s32 shiftedByte1 = (randomByte1 << 8);

    // Normalize the 16-bit number to the range [0, 1), then multiply by arg0
    s32 scaledRandom = ((randomByte2 | shiftedByte1) / 65536.0f) * arg0;

    return scaledRandom;
}

void func_80105A28_2FC2F8_game_guys_roulette() {
    HmfLightColorSet(0, 0xFF, 0xFF, 0xFF);
    HmfLightColorSet(1, 0xFF, 0xFF, 0xFF);
    HmfLightDirSet(1, 0.0f, 0.0f, 95.0f);
}

void func_80105A78_2FC348_game_guys_roulette() {
    s32 temp_v0;

    omSetStatBit(omAddObj(0x7FDA, 0, 0, -1, omOutView), 0xA0);
    func_8000B5F0_C1F0(1);

    temp_v0 = func_8000B638_C238();
    ScissorSet(temp_v0, 0.0f, 0.0f, 320.0f, 240.0f);
    ViewportSet(temp_v0, 640.0f, 480.0f, 511.0f, 640.0f, 480.0f, 511.0f);
    Hu3DCamSetPerspective(temp_v0, 19.03f, 80.0f, 8000.0f);

    CZoom = 1498.69f;
    CRot.x = 334.75f;
    CRot.y = 0.0f;
    CRot.z = 0.0f;
    Center.x = 0.0f;
    Center.y = 10.82f;
    Center.z = -505.55f;
}

void func_80105BD8_2FC4A8_game_guys_roulette() {
    s16 temp_v0;

    func_8005A6B0_5B2B0();
    temp_v0 = func_80060880_61480(0x82, 0x6E, 9);
    D_8010AADE_3013AE_game_guys_roulette = temp_v0;
    func_8005B63C_5C23C(temp_v0, 2, 2);
    func_80061100_61D00(D_8010AADE_3013AE_game_guys_roulette, 1);
    func_80060EA8_61AA8(D_8010AADE_3013AE_game_guys_roulette, 1);
}

void func_80105C40_2FC510_game_guys_roulette() {
    Hu3DAnimInit(0x20);
    func_800142A0_14EA0(0x20);
    omInitObjMan(0x20, 0x20);
    func_8004A208_4AE08();

    func_80105A28_2FC2F8_game_guys_roulette();
    func_80105A78_2FC348_game_guys_roulette();
    func_80105BD8_2FC4A8_game_guys_roulette();

    omAddObj(0x3E8, 0, 0, -1, func_80105CD0_2FC5A0_game_guys_roulette);
    omAddObj(0x7D0, 0, 0, -1, func_801089EC_2FF2BC_game_guys_roulette);
}

void func_80105CD0_2FC5A0_game_guys_roulette(omObjData* arg0) {
    func_80108D20_2FF5F0_game_guys_roulette(0xA0, 0x56);
    func_80105E10_2FC6E0_game_guys_roulette(&D_8010AAD6_3013A6_game_guys_roulette);
    func_80105F70_2FC840_game_guys_roulette();

    D_8010A910_3011E0_game_guys_roulette = omAddObj(0, 0xA, 0xA, -1, func_80106428_2FCCF8_game_guys_roulette);
    D_8010A918_3011E8_game_guys_roulette = omAddObj(1, 0xA, 0xA, -1, func_801068E8_2FD1B8_game_guys_roulette);
    D_8010A914_3011E4_game_guys_roulette = omAddObj(2, 0xA, 0xA, -1, func_801069DC_2FD2AC_game_guys_roulette);
    D_8010A91C_3011EC_game_guys_roulette = omAddObj(3, 0xA, 0xA, -1, func_80106B74_2FD444_game_guys_roulette);
    D_8010A920_3011F0_game_guys_roulette = omAddObj(4, 0xA, 0xA, -1, func_80106C58_2FD528_game_guys_roulette);

    omAddObj(5, 0xA, 0xA, -1, func_80106DD8_2FD6A8_game_guys_roulette);
    WipeCreateIn(0xFF, 0x10);

    arg0->func = func_80106EA4_2FD774_game_guys_roulette;
}

void func_80105E10_2FC6E0_game_guys_roulette(Unk_D8010AAD6_3013A6_Struct* arg0) {
    u8 var_v0; // resolved player index?
    s8 var_a1;

    for (var_v0 = 0; var_v0 < MB_MAX_PLAYERS; var_v0++) {
        if (GwPlayer[var_v0].group == 0) {
            break;
        }
    }

    switch (var_v0) {
        case 1:
            var_v0 = 1;
            break;
        case 2:
            var_v0 = 2;
            break;
        case 3:
            var_v0 = 3;
            break;
        case 0:
        default:
            var_v0 = 0;
    }

    arg0->unk_00 = var_v0;
    arg0->unk_01 = GwPlayer[var_v0].pad;
    arg0->unk_02 = GwPlayer[var_v0].chr;
    if (GwPlayer[var_v0].stat & PLAYER_IS_CPU) {
        arg0->unk_03 = 1;
        arg0->unk_04 = GwPlayer[var_v0].cpu_difficulty;
        var_a1 = GwCommon.unkA0;
        D_8010AB5A_30142A_game_guys_roulette = var_a1;
        if (D_8010AB5A_30142A_game_guys_roulette <= 0) {
            D_8010AB5A_30142A_game_guys_roulette = 0;
        } else {
            if (D_8010AB5A_30142A_game_guys_roulette >= 2) {
                D_8010AB5A_30142A_game_guys_roulette = 2;
            }
        }
    } else {
        arg0->unk_03 = 0;
        arg0->unk_04 = 0;
    }
    arg0->unk_06 = GwPlayer[var_v0].gameCoin;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", func_80105F70_2FC840_game_guys_roulette);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", func_80106428_2FCCF8_game_guys_roulette);

void func_801068E8_2FD1B8_game_guys_roulette(omObjData* arg0) {
    *arg0->model = func_8000B108_BD08(0xA0063, 0x2B9);
    omSetTra(arg0, 0.0f, 193.0f, -117.0f);
    omSetRot(arg0, 0.0f, 0.0f, 0.0f);
    omSetSca(arg0, 1.0f, 1.0f, 1.0f);
    func_8000B460_C060(arg0, 0, 0xA0063);
    func_8000B460_C060(arg0, 1, 0xA0066);
    func_8000B460_C060(arg0, 2, 0xA0067);
    func_8001C624_1D224(*arg0->model, HmfModelData[*arg0->motion].unk02, 0, 0x1E, 2);

    arg0->func = NULL;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", func_801069DC_2FD2AC_game_guys_roulette);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", func_80106B74_2FD444_game_guys_roulette);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", func_80106C58_2FD528_game_guys_roulette);

void func_80106DD8_2FD6A8_game_guys_roulette(omObjData* arg0) {
    *arg0->model = func_8000B108_BD08(0x630014, 0x2B9);
    omSetTra(arg0, 0, 0, 0);
    omSetRot(arg0, 0, 0, 0);
    omSetSca(arg0, 1.0f, 1.0f, 1.0f);
    func_8000B460_C060(arg0, 0, 0x630014);
    func_8001C624_1D224(*arg0->model, HmfModelData[arg0->motion[0]].unk02, 0, 0x1E, 2);

    arg0->func = NULL;
}

void func_80106EA4_2FD774_game_guys_roulette(omObjData* arg0) {
    f32 temp_f0;

    switch (D_8010AB50_301420_game_guys_roulette) {
    case 0:
        func_801070C4_2FD994_game_guys_roulette();
        return;
    case 1:
        D_8010A924_3011F4_game_guys_roulette = omAddPrcObj(func_80107104_2FD9D4_game_guys_roulette, 0x3F00, 0x800, 0);
        D_8010AB50_301420_game_guys_roulette = 2;
        return;
    case 2:
        if (D_8010AAE0_3013B0_game_guys_roulette == 1) {
            D_8010AB50_301420_game_guys_roulette = 5;
            D_8010AAE0_3013B0_game_guys_roulette = 0;
            omDelPrcObj((s32) D_8010A924_3011F4_game_guys_roulette);
            D_800D6A58_D7658 = 0;
            D_8010AB54_301424_game_guys_roulette = GMesCreate(0x1A, 0xA, 0x9C, 0x38);
            return;
        }
    default:
        return;
    case 5:
        func_801073AC_2FDC7C_game_guys_roulette();
        return;
    case 6:
        D_8010A928_3011F8_game_guys_roulette = omAddPrcObj(func_80107A00_2FE2D0_game_guys_roulette, 0x3F00, 0x800, 0);
        D_8010AB50_301420_game_guys_roulette = 7;
        return;
    case 7:
        if (D_8010AA88_301358_game_guys_roulette.x > 0.0f) {
            temp_f0 = D_8010AA88_301358_game_guys_roulette.y - 0.25f;
            D_8010AA88_301358_game_guys_roulette.y = temp_f0;
            D_8010AA88_301358_game_guys_roulette.x = temp_f0;
            func_80108A9C_2FF36C_game_guys_roulette(&D_8010AA88_301358_game_guys_roulette - 3, 1);
        } else {
            D_8010AA88_301358_game_guys_roulette.x = D_8010AA88_301358_game_guys_roulette.y = 0.0f;
            func_80108A9C_2FF36C_game_guys_roulette(&D_8010AA88_301358_game_guys_roulette - 3, 0);
        }

        if ((D_8010AAE2_3013B2_game_guys_roulette == 1) && (D_8010AA88_301358_game_guys_roulette.x <= 0.0f)) {
            D_8010AB50_301420_game_guys_roulette = 8;
            D_8010AAE2_3013B2_game_guys_roulette = 0;
            omDelPrcObj((s32) D_8010A928_3011F8_game_guys_roulette);
            return;
        }
        break;
    case 8:
        func_80107AA8_2FE378_game_guys_roulette();
        return;
    case 9:
        func_80107B20_2FE3F0_game_guys_roulette();
        return;
    case 10:
        func_80108414_2FECE4_game_guys_roulette();
        return;
    case 11:
        func_80108480_2FED50_game_guys_roulette();
        return;
    case 12:
        arg0->func = &func_801088B0_2FF180_game_guys_roulette;
        break;
    }
}

void func_801070C4_2FD994_game_guys_roulette() {
    D_8010A646_300F16_game_guys_roulette = func_80109078_2FF948_game_guys_roulette();
    if (D_8010A646_300F16_game_guys_roulette == 1) {
        D_8010AB50_301420_game_guys_roulette = 1;
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", func_80107104_2FD9D4_game_guys_roulette);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", func_8010726C_2FDB3C_game_guys_roulette);
// void func_8010726C_2FDB3C_game_guys_roulette(s16 arg0) {
//     s16 i;

//     func_8005F904_60504();

//     while (func_8005E0C0_5ECC0(arg0) != 0) {
//         if (D_800D5558_D6158[D_8010AAD7_3013A7_game_guys_roulette] & 0x8000) {
//             func_8005F744_60344(-0x8000, -0x8000, -0x8000, -0x8000);
//         } else if (D_8010AAD9_3013A9_game_guys_roulette == 1) {
//             for (i = 0; i < 0xA; i++) {
//                 func_8005F698_60298(-0x8000, -0x8000, -0x8000, -0x8000, ((D_8010AB5A_30142A_game_guys_roulette * 2) + &D_8010A640_300F10_game_guys_roulette)[0]);
//             }

//             while (func_8005E0C0_5ECC0(arg0) != 0) {
//                 HuPrcVSleep();
//             }
//         }
//         HuPrcVSleep();
//     }

//     func_8005F904_60504();
// }

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", func_801073AC_2FDC7C_game_guys_roulette);

void func_80107A00_2FE2D0_game_guys_roulette() {
    func_8005D294_5DE94(D_8010AADE_3013AE_game_guys_roulette);
    func_80060C14_61814(D_8010AADE_3013AE_game_guys_roulette, 1);
    func_8005B43C_5C03C(D_8010AADE_3013AE_game_guys_roulette, 0x2D04, -1, -1);
    func_8005B6BC_5C2BC(D_8010AADE_3013AE_game_guys_roulette, D_8010AB51_301421_game_guys_roulette + 0x2D05, 0);
    func_8010726C_2FDB3C_game_guys_roulette(D_8010AADE_3013AE_game_guys_roulette);
    func_8005D294_5DE94(D_8010AADE_3013AE_game_guys_roulette);
    func_80060EA8_61AA8(D_8010AADE_3013AE_game_guys_roulette, 1);

    D_8010AAE2_3013B2_game_guys_roulette = 1;

    while (TRUE) {
        HuPrcVSleep();
    }
}

void func_80107AA8_2FE378_game_guys_roulette() {
    if (++D_8010A65C_300F2C_game_guys_roulette == 1) {
        GMesCreate(9);
        return;
    }

    if (GMesStatGet() == 0) {
        HuAudSeqFadeOut(0x1E);
        D_8010AB50_301420_game_guys_roulette = 9;
        D_8010A65C_300F2C_game_guys_roulette = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", func_80107B20_2FE3F0_game_guys_roulette);

void func_80108414_2FECE4_game_guys_roulette() {
    if (++D_8010A678_300F48_game_guys_roulette == 1) {
        GMesCreate(0x14);
        HuAudSeqFadeOut(0x78);
    } else if (GMesStatGet() == 0) {
        D_8010AB50_301420_game_guys_roulette = 11;
    }
}

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", D_8010A770_301040_game_guys_roulette);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", D_8010A77C_30104C_game_guys_roulette);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", D_8010A78C_30105C_game_guys_roulette);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", D_8010A794_301064_game_guys_roulette);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", D_8010A7A0_301070_game_guys_roulette);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", D_8010A7AC_30107C_game_guys_roulette);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", D_8010A7B8_301088_game_guys_roulette);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", D_8010A7C4_301094_game_guys_roulette);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", D_8010A7D0_3010A0_game_guys_roulette);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", func_80108480_2FED50_game_guys_roulette);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", func_801085A4_2FEE74_game_guys_roulette);

void func_801088B0_2FF180_game_guys_roulette(omObjData* arg0) {
    GwPlayer[D_8010AAD6_3013A6_game_guys_roulette.unk_00].gameCoin = D_8010AAD6_3013A6_game_guys_roulette.unk_06;
    if (D_8010AB58_301428_game_guys_roulette == 1) {
        GwPlayer[D_8010AAD6_3013A6_game_guys_roulette.unk_00].bonusCoin = D_8010A6A4_300F74_game_guys_roulette[D_8010AB51_301421_game_guys_roulette];
    } else if (D_8010AB58_301428_game_guys_roulette == 0) {
        GwPlayer[D_8010AAD6_3013A6_game_guys_roulette.unk_00].bonusCoin = 0;
    }

    WipeCreateOut(0, 0x14);
    HuAudSeqFadeOut(0x1E);
    func_8004AB0C_4B70C(0x1E);

    arg0->func = &func_80108998_2FF268_game_guys_roulette;
}

void func_80108998_2FF268_game_guys_roulette() {
    if (WipeStatGet() == 0) {
        osViBlack(0);
        func_80109D14_3005E4_game_guys_roulette();
        GMesClose();
        func_8005F524_60124();
        func_800557A0_563A0();
        omOvlReturnEx(1);
    }
}

void func_801089EC_2FF2BC_game_guys_roulette(omObjData* arg0) {
    if (D_800D530C_D5F0C == 1) {
        arg0->func = &func_801088B0_2FF180_game_guys_roulette;
    }
}

void func_80108A14_2FF2E4_game_guys_roulette(Unk_GameGuyRouletteStruct01* arg0, s32 arg1, s32 arg2) {
    arg0->unk_00 = InitEspriteSlot(func_8000B838_C438(arg1), 0, 1);
    func_8000BC48_C848(arg0->unk_00, arg2 & 0xFFFF);
}

void func_80108A6C_2FF33C_game_guys_roulette(Unk_GameGuyRouletteStruct01* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 arg6, f32 arg7) {
    arg0->unk_04 = arg1;
    arg0->unk_08 = arg2;
    arg0->unk_0C = arg3;
    arg0->unk_10 = arg4;
    arg0->unk_14 = arg5;
    arg0->unk_18 = arg6;
    arg0->unk_1C = arg7;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", func_80108A9C_2FF36C_game_guys_roulette);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FC270", func_80108B44_2FF414_game_guys_roulette);
