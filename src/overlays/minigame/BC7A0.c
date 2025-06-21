#include "minigame.h"

void HuMemFree(void*);
void func_8000BB94_C794(u16);
void func_8000BBFC_C7FC(u16, s16);

void func_800E9F40_BCAC0_minigame(s16, s32, s32, s16);
void func_800EA178_BCCF8_minigame(s16, f32);
void func_800EA2A8_BCE28_minigame(s16);
s32 func_800EAE7C_BD9FC_minigame(omObjData*);

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BC7A0", func_800E9C20_BC7A0_minigame);

void func_800E9E28_BC9A8_minigame() {
    s32 i;
    s32 j;

    for (i = 0; i < D_800EBDF0_BE970_minigame; i++) {
        for (j = 0; j < D_800EBDFC_BE97C_minigame; j++) {
            func_8000C184_CD84(D_800EBDF4_BE974_minigame[i].unk00[j]);
            func_8000C184_CD84(D_800EBDF4_BE974_minigame[i].unk04[j]);
        }
        HuMemFree(D_800EBDF4_BE974_minigame[i].unk00);
        HuMemFree((&D_800EBDF4_BE974_minigame[i])->unk04);
    }
    HuSprKill(D_800EBDF8_BE978_minigame);
    HuSprKill(D_800EBDFA_BE97A_minigame);
}

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BC7A0", func_800E9F40_BCAC0_minigame);

void func_800EA0FC_BCC7C_minigame(s16 arg0, f32 arg1, f32 arg2) {
    (&D_800EBDF4_BE974_minigame[arg0])->unk08 = arg1;
    (&D_800EBDF4_BE974_minigame[arg0])->unk0C = arg2;
}

void func_800EA128_BCCA8_minigame(s16 arg0, f32 arg1) {
    (&D_800EBDF4_BE974_minigame[arg0])->unk10 = arg1;

    if (!((&D_800EBDF4_BE974_minigame[arg0])->unk14 & 1)) {
        func_800EA2A8_BCE28_minigame(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BC7A0", func_800EA178_BCCF8_minigame);

void func_800EA1E4_BCD64_minigame(s16 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < D_800EBDFC_BE97C_minigame; i++) {
        func_8000BCC8_C8C8((&D_800EBDF4_BE974_minigame[arg0])->unk00[i], (arg1 + 1) & 0xFFFF);
        func_8000BCC8_C8C8((&D_800EBDF4_BE974_minigame[arg0])->unk04[i], arg1 & 0xFFFF);
    }
}

void func_800EA2A8_BCE28_minigame(s16 arg0) {
    s32 i;
    s32 j;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    s32 temp_s3;

    Unk_D800EBDF4_BE974_Struct* temp_s2 = &D_800EBDF4_BE974_minigame[arg0];
    u16 temp_v0 = temp_s2->unk14;

    temp_s2->unk14 = temp_v0 & 0xFFFE;
    if (!(temp_v0 & 2)) {
        temp_f4 = D_800EBDFC_BE97C_minigame;
        temp_f6 = temp_s2->unk10;
        temp_s3 = temp_f4 * temp_f6;
        temp_f2 = 1.0f / temp_f4;
        temp_f20 = (temp_f6 - (temp_f2 * (f32) temp_s3)) / temp_f2;

        for (i = 0; i < D_800EBDFC_BE97C_minigame; i++) {
            func_8000BB54_C754(temp_s2->unk00[i]);
            if (i < temp_s3) {
                func_8000BB54_C754(temp_s2->unk04[i]);
                func_8000BBFC_C7FC(temp_s2->unk04[i], 0x100);
            } else if (i == temp_s3) {
                func_8000BB54_C754(temp_s2->unk04[i]);
                func_8000BBFC_C7FC(temp_s2->unk04[i], temp_f20 * 256.0f);
            } else {
                func_8000BB94_C794(temp_s2->unk04[i]);
            }
        }
    }
}

void func_800EA444_BCFC4_minigame(s16 arg0) {
    s32 i;

    (&D_800EBDF4_BE974_minigame[arg0])->unk14 |= 1;

    for (i = 0; i < D_800EBDFC_BE97C_minigame; i++) {
        func_8000BB94_C794(D_800EBDF4_BE974_minigame[arg0].unk00[i]);
        func_8000BB94_C794(D_800EBDF4_BE974_minigame[arg0].unk04[i]);
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BC7A0", func_800EA518_BD098_minigame);
