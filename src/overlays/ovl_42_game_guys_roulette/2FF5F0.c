#include "ovl_42.h"

void func_8010A1FC_300ACC_game_guys_roulette(s32, s16, s16, s16, s16);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FF5F0", func_80108D20_2FF5F0_game_guys_roulette);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FF5F0", func_80108FEC_2FF8BC_game_guys_roulette);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FF5F0", func_80109078_2FF948_game_guys_roulette);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FF5F0", func_80109B60_300430_game_guys_roulette);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FF5F0", func_80109D14_3005E4_game_guys_roulette);

// INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FF5F0", func_80109D98_300668_game_guys_roulette);
s16 func_80109D98_300668_game_guys_roulette(s32 arg0, s32 arg1, u16 arg2, u16 arg3) {
    s16 temp_s1;
    s16 temp_v0;

    temp_s1 = func_8000B838_C438(arg0);
    temp_v0 = HuSprGrpCreate(1, 0);
    func_80055024_55C24(temp_v0, 0, temp_s1, 0);
    HuSprAttrReset(temp_v0, 0, 0xFFFF);
    HuSprAttrSet(temp_v0, 0, arg1 | 0x1000);
    HuSprPriSet(temp_v0, 0, arg2);
    func_80054904_55504(temp_v0, 0, 0xA0, 0x78);
    func_80055458_56058(temp_v0, 0, arg3);
    return temp_v0;
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FF5F0", func_80109E6C_30073C_game_guys_roulette);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FF5F0", func_80109FD0_3008A0_game_guys_roulette);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FF5F0", func_8010A060_300930_game_guys_roulette);

// INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FF5F0", func_8010A1BC_300A8C_game_guys_roulette);
void func_8010A1BC_300A8C_game_guys_roulette(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    func_8010A1FC_300ACC_game_guys_roulette(arg0, arg1, arg2, 0x2D, arg3);
}

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FF5F0", func_8010A1FC_300ACC_game_guys_roulette);

INCLUDE_ASM("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FF5F0", func_8010A3F4_300CC4_game_guys_roulette);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FF5F0", D_8010A7E8_3010B8_game_guys_roulette);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FF5F0", D_8010A7F0_3010C0_game_guys_roulette);

INCLUDE_RODATA("asm/nonmatchings/overlays/ovl_42_game_guys_roulette/2FF5F0", D_8010A800_3010D0_game_guys_roulette);
