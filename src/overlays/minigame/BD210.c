#include "minigame.h"

void* HuMemAllocTag(s32, s16);

void func_800EAA58_BD5D8_minigame(omObjData*);
void func_800EB3CC_BDF4C_minigame(omObjData*);
void func_800EB5E4_BE164_minigame(omObjData*);

void func_800EA690_BD210_minigame() {
    s32 i;

    for (i = 0; i < 4; i++) {
        D_800EBE00_BE980_minigame[i] = -1;
    }
}

omObjData* func_800EA6C4_BD244_minigame(s16 arg0, u16 arg1, u16 arg2, u16 arg3, u16 arg4) {
    Unk_DataStruct01* temp_v0_2;
    s32 i;

    omObjData* temp_v0 = omAddObj(arg0, 0x17, 0, -1, func_800EAA58_BD5D8_minigame);
    s16* var_a0 = temp_v0->model;

    for (i = 0; i < 0x17; i++) {
        *var_a0 = -1;
        var_a0++;
    }

    temp_v0_2 = HuMemAllocTag(0x290, 0x7918);
    temp_v0->data = temp_v0_2;
    memset(temp_v0_2, 0, 0x290);
    temp_v0_2->unk282 = arg1;
    temp_v0_2->unk284 = arg2;
    temp_v0_2->unk286 = arg3;
    temp_v0_2->unk288 = arg4;
    temp_v0_2->unk28A = 0x18;
    temp_v0_2->unk28C = 0x78;
    temp_v0_2->unk28E = 1;
    temp_v0_2->unk20 = 0;
    temp_v0_2->func04 = NULL;
    temp_v0_2->func08 = func_800EB3CC_BDF4C_minigame;
    temp_v0_2->func0C = func_800EB5E4_BE164_minigame;

    return temp_v0;
}

void func_800EA7D0_BD350_minigame(omObjData* arg0, f32 arg1, f32 arg2, f32 arg3) {
    arg0->trans.x = arg1;
    arg0->trans.y = arg2;
    arg0->trans.z = arg3;
}

void func_800EA7E0_BD360_minigame(omObjData* arg0, f32 arg1, f32 arg2, f32 arg3) {
    arg0->rot.x = arg1;
    arg0->rot.y = arg2;
    arg0->rot.z = arg3;
}

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BD210", func_800EA7F0_BD370_minigame);

void func_800EA8F0_BD470_minigame(omObjData* arg0, s32 arg1) {
    ((Unk_DataStruct01*) arg0->data)->unk1C = arg1;
}

void func_800EA8FC_BD47C_minigame(omObjData* arg0, s32 arg1, s32 arg2, s32 arg3) {
    Unk_DataStruct01* temp_v0 = arg0->data;

    temp_v0->unk10 = arg1;
    temp_v0->unk14 = arg2;
    temp_v0->unk18 = arg3;
}

void func_800EA910_BD490_minigame(omObjData* arg0, s32 arg1) {
    ((Unk_DataStruct01*) arg0->data)->unk20 = arg1;
}

s32 func_800EA91C_BD49C_minigame(omObjData* arg0) {
    return ((Unk_DataStruct01*) arg0->data)->unk20;
}

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BD210", func_800EA928_BD4A8_minigame);

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BD210", func_800EAA58_BD5D8_minigame);

void func_800EAE14_BD994_minigame(omObjData* arg0) {
    Unk_DataStruct01* temp_s0 = arg0->data;

    if (temp_s0->func04 != NULL) {
        temp_s0->func04();
    }

    if (temp_s0->func08 != NULL) {
        temp_s0->func08(arg0);
    }

    if (temp_s0->func0C != NULL) {
        temp_s0->func0C(arg0);
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BD210", func_800EAE7C_BD9FC_minigame);

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BD210", func_800EB3CC_BDF4C_minigame);

INCLUDE_ASM("asm/nonmatchings/overlays/minigame/BD210", func_800EB5E4_BE164_minigame);
