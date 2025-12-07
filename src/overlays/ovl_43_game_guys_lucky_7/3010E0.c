#include "ovl_43.h"

void omSetRot(omObjData*, f32, f32, f32);
void omSetTra(omObjData*, f32, f32, f32);
void omSetSca(omObjData*, f32, f32, f32);
s32 func_8000B638_C238(void);
void func_800370D0_37CD0(s16, s16);

void func_80105A28_301168_game_guys_lucky_7(void);
void func_80105AC0_301200_game_guys_lucky_7(void);
void func_80105AC8_301208_game_guys_lucky_7(void);
void func_80105C08_301348_game_guys_lucky_7(void);
void func_80105C24_301364_game_guys_lucky_7(void);
void func_80105E34_301574_game_guys_lucky_7(omObjData*);
void func_80105F70_3016B0_game_guys_lucky_7(omObjData*);
void func_80106248_301988_game_guys_lucky_7(omObjData*);
void func_80106370_301AB0_game_guys_lucky_7(void);
void func_80106500_301C40_game_guys_lucky_7(omObjData*);
void func_80106854_301F94_game_guys_lucky_7(omObjData*);
void func_80107668_302DA8_game_guys_lucky_7(omObjData*);
void func_80107AC4_303204_game_guys_lucky_7(omObjData*);
void func_80107DE4_303524_game_guys_lucky_7(omObjData*);
void func_80107F44_303684_game_guys_lucky_7(omObjData*);

void func_80107F6C_3036AC_game_guys_lucky_7(void);

void func_80107F98_3036D8_game_guys_lucky_7(omObjData*);
void func_80107FD8_303718_game_guys_lucky_7(void);
void func_801080E8_303828_game_guys_lucky_7(void);
void func_8010826C_3039AC_game_guys_lucky_7(void);
void func_80108374_303AB4_game_guys_lucky_7(omObjData*);
void func_801083A0_303AE0_game_guys_lucky_7(void);
void func_80108498_303BD8_game_guys_lucky_7(void);
void func_801085D4_303D14_game_guys_lucky_7(void);
void func_801087B4_303EF4_game_guys_lucky_7(omObjData*);
void func_801092B0_3049F0_game_guys_lucky_7(omObjData*);
void func_80109FA4_3056E4_game_guys_lucky_7(omObjData*);
void func_8010A0DC_30581C_game_guys_lucky_7(omObjData*);
void func_8010A278_3059B8_game_guys_lucky_7(omObjData*);
void func_8010A3B8_305AF8_game_guys_lucky_7(omObjData*);
void func_8010A8A4_305FE4_game_guys_lucky_7(omObjData*);

// 306F70
void func_8010B830_306F70_game_guys_lucky_7(s16, s16);
s16 func_8010BB88_3072C8_game_guys_lucky_7(void);
s32 func_8010C670_307DB0_game_guys_lucky_7(s16);


// INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_801059A0_3010E0_game_guys_lucky_7);
void func_801059A0_3010E0_game_guys_lucky_7() {
    func_80105A28_301168_game_guys_lucky_7();
}

// INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_801059BC_3010FC_game_guys_lucky_7);
s32 func_801059BC_3010FC_game_guys_lucky_7(f32 arg0) {
    // rand8 returns an unsigned byte
    u8 randomByte1 = rand8();
    u8 randomByte2 = rand8();
    s32 shiftedByte1 = (randomByte1 << 8);

    // Normalize the 16-bit number to the range [0, 1), then multiply by arg0
    s32 scaledRandom = ((randomByte2 | shiftedByte1) / 65536.0f) * arg0;

    return scaledRandom;
}

// INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80105A28_301168_game_guys_lucky_7);
void func_80105A28_301168_game_guys_lucky_7(void) {
    Hu3DAnimInit(0x20);
    func_800142A0_14EA0(0x20);
    omInitObjMan(0x20, 0x20);
    func_8004A208_4AE08();

    func_80105AC0_301200_game_guys_lucky_7();
    func_80105AC8_301208_game_guys_lucky_7();
    func_80105C08_301348_game_guys_lucky_7();
    func_80105C24_301364_game_guys_lucky_7();

    omAddObj(0x3E8, 0U, 0U, -1, func_80105E34_301574_game_guys_lucky_7);
    omAddObj(0x7D0, 0U, 0U, -1, func_80107F44_303684_game_guys_lucky_7);
}

void func_80105AC0_301200_game_guys_lucky_7() {
}

// INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80105AC8_301208_game_guys_lucky_7);
void func_80105AC8_301208_game_guys_lucky_7(void) {
    s16 temp_v0;
    u8 temp_s1;

    omSetStatBit(omAddObj(0x7FDA, 0, 0, -1, omOutView), 0xA0);
    func_8000B5F0_C1F0(1);

    temp_v0 = func_8000B638_C238();
    ScissorSet(temp_v0, 0.0f, 0.0f, 320.0f, 240.0f);
    ViewportSet(temp_v0, 640.0f, 480.0f, 511.0f, 640.0f, 480.0f, 511.0f);
    Hu3DCamSetPerspective(temp_v0, 6.57f, 2000.0f, 8500.0f);

    CZoom = 8075.0f;
    CRot.x = 0.0f;
    CRot.y = 0.0f;
    CRot.z = 0.0f;
    Center.x = 0.0f;
    Center.y = 350.0f;
    Center.z = 0.0f;
}

// INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80105C08_301348_game_guys_lucky_7);
void func_80105C08_301348_game_guys_lucky_7() {
    func_8005A6B0_5B2B0();
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80105C24_301364_game_guys_lucky_7);

// INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80105E34_301574_game_guys_lucky_7);
void func_80105E34_301574_game_guys_lucky_7(omObjData *arg0) {
    func_80107F6C_3036AC_game_guys_lucky_7();
    func_8010B830_306F70_game_guys_lucky_7(0xA0, 0xC2);

    omAddObj(0xA, 0xA, 0xA, -1, func_80107F98_3036D8_game_guys_lucky_7);
    omAddObj(0x14, 0xA, 0x14, -1, func_801087B4_303EF4_game_guys_lucky_7);
    omAddObj(0x1E, 0xA, 0x14, -1, func_801092B0_3049F0_game_guys_lucky_7);
    omAddObj(0x28, 0xA, 0xA, -1, func_8010A3B8_305AF8_game_guys_lucky_7);
    omAddObj(0x29, 0xA, 0xA, -1, func_80109FA4_3056E4_game_guys_lucky_7);
    omAddObj(0x2A, 0xA, 0xA, -1, func_8010A0DC_30581C_game_guys_lucky_7);
    omAddObj(0x2A, 0xA, 0xA, -1, func_8010A278_3059B8_game_guys_lucky_7);
    omAddObj(0x32, 0xA, 0xA, -1, func_8010A8A4_305FE4_game_guys_lucky_7);

    arg0->func = func_80105F70_3016B0_game_guys_lucky_7;
}

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", D_8010D310_308A50_game_guys_lucky_7);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", D_8010D31C_308A5C_game_guys_lucky_7);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", D_8010D32C_308A6C_game_guys_lucky_7);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", D_8010D334_308A74_game_guys_lucky_7);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", D_8010D340_308A80_game_guys_lucky_7);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", D_8010D34C_308A8C_game_guys_lucky_7);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", D_8010D358_308A98_game_guys_lucky_7);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", D_8010D364_308AA4_game_guys_lucky_7);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", D_8010D370_308AB0_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80105F70_3016B0_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80106248_301988_game_guys_lucky_7);
// void func_80106248_301988_game_guys_lucky_7(omObjData* arg0) {
//     // s16 temp_v0;
//     // u16 temp_v0_2;

//     switch (D_8010D1B4_3088F4_game_guys_lucky_7[0]) {
//     case 0:
//         D_8010D1B4_3088F4_game_guys_lucky_7[0] = func_8010BB88_3072C8_game_guys_lucky_7();
//         if (++D_8010D1B4_3088F4_game_guys_lucky_7[1] >= 0x73) {
//             D_8010D1B4_3088F4_game_guys_lucky_7[0]++;
//         }
//         return;
//     case 1:
//         D_8010D77C_308EBC_game_guys_lucky_7 = 0;
//         D_8010D6D4_308E14_game_guys_lucky_7 = omAddPrcObj(func_80106370_301AB0_game_guys_lucky_7, 0x3F00, 0x800, 0);
//         D_8010D1B4_3088F4_game_guys_lucky_7[0]++;
//         return;
//     case 2:
//         if (D_8010D77C_308EBC_game_guys_lucky_7 != 0) {
//             HuPrcKill(D_8010D6D4_308E14_game_guys_lucky_7);
//             D_8010D77C_308EBC_game_guys_lucky_7 = 0;
//             D_8010D1B4_3088F4_game_guys_lucky_7[0]++;
//         }
//         return;
//     default:
//         arg0->func = func_80106500_301C40_game_guys_lucky_7;
//         D_8010D1B4_3088F4_game_guys_lucky_7[0]++;
//         return;
//     case 4:
//         arg0->func = func_80105F70_3016B0_game_guys_lucky_7;
//         return;
//     }
// }

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80106370_301AB0_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80106500_301C40_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80106854_301F94_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80106A0C_30214C_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80106CF4_302434_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80107090_3027D0_game_guys_lucky_7);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", D_8010D3B4_308AF4_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80107270_3029B0_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80107668_302DA8_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010783C_302F7C_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80107AC4_303204_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80107DE4_303524_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80107EEC_30362C_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80107F44_303684_game_guys_lucky_7);

// INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80107F6C_3036AC_game_guys_lucky_7);
void func_80107F6C_3036AC_game_guys_lucky_7() {
    D_8010D772_308EB2_game_guys_lucky_7 = 0;
    D_8010D774_308EB4_game_guys_lucky_7 = 0;
    D_8010D776_308EB6_game_guys_lucky_7 = 0;
    D_8010D778_308EB8_game_guys_lucky_7 = 0;
    D_8010D77A_308EBA_game_guys_lucky_7 = 0;
}

// INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80107F98_3036D8_game_guys_lucky_7);
void func_80107F98_3036D8_game_guys_lucky_7(omObjData* arg0) {
    func_80107FD8_303718_game_guys_lucky_7();
    func_801080E8_303828_game_guys_lucky_7();
    func_8010826C_3039AC_game_guys_lucky_7();
    arg0->func = func_80108374_303AB4_game_guys_lucky_7;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80107FD8_303718_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_801080E8_303828_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010826C_3039AC_game_guys_lucky_7);

// INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80108374_303AB4_game_guys_lucky_7);
void func_80108374_303AB4_game_guys_lucky_7(omObjData* arg0) {
    func_801083A0_303AE0_game_guys_lucky_7();
    func_80108498_303BD8_game_guys_lucky_7();
    func_801085D4_303D14_game_guys_lucky_7();
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_801083A0_303AE0_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80108498_303BD8_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_801085D4_303D14_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_801087B4_303EF4_game_guys_lucky_7);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", D_8010D404_308B44_game_guys_lucky_7);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", D_8010D434_308B74_game_guys_lucky_7);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", D_8010D488_308BC8_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80108B64_3042A4_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_801092B0_3049F0_game_guys_lucky_7);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", D_8010D508_308C48_game_guys_lucky_7);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", D_8010D518_308C58_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80109570_304CB0_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_80109FA4_3056E4_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010A04C_30578C_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010A0DC_30581C_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010A19C_3058DC_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010A278_3059B8_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010A328_305A68_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010A3B8_305AF8_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010A458_305B98_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010A8A4_305FE4_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010AA8C_3061CC_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010AD44_306484_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010ADB8_3064F8_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010ADF8_306538_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010AF44_306684_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010B13C_30687C_game_guys_lucky_7);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", D_8010D580_308CC0_game_guys_lucky_7);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", D_8010D598_308CD8_game_guys_lucky_7);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", D_8010D5A0_308CE0_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010B334_306A74_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010B498_306BD8_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010B528_306C68_game_guys_lucky_7);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_43_game_guys_lucky_7/3010E0", func_8010B6E0_306E20_game_guys_lucky_7);
