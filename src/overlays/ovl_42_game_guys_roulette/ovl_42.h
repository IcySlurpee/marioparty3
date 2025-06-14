#ifndef _OVL_42_H
#define _OVL_42_H

#include "common.h"

typedef struct Unk_D8010AAD6_3013A6_Struct {
    /* 0x00 */ u8 unk_00;   // player index?
    /* 0x01 */ u8 unk_01;   // GwPlayer[].pad
    /* 0x02 */ u8 unk_02;   // GwPlayer[].chr
    /* 0x03 */ u8 unk_03;   // is CPU?
    /* 0x04 */ u8 unk_04;   // GwPlayer[].cpu_difficulty
    /* 0x05 */ char unk_05; // unknown
    /* 0x06 */ u16 unk_06;  // GwPlayer[].gameCoin
} Unk_D8010AAD6_3013A6_Struct;

typedef struct Unk_GameGuyRouletteStruct01 {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ char unk_01[3];
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ f32 unk_1C;
} Unk_GameGuyRouletteStruct01;

extern u8 D_8010A646_300F16_game_guys_roulette;
extern s16 D_8010A65C_300F2C_game_guys_roulette;
extern s16 D_8010A678_300F48_game_guys_roulette;
extern u8 D_8010A6A4_300F74_game_guys_roulette[];
extern omObjData* D_8010A910_3011E0_game_guys_roulette;
extern omObjData* D_8010A914_3011E4_game_guys_roulette;
extern omObjData* D_8010A918_3011E8_game_guys_roulette;
extern omObjData* D_8010A91C_3011EC_game_guys_roulette;
extern omObjData* D_8010A920_3011F0_game_guys_roulette;
extern Process* D_8010A924_3011F4_game_guys_roulette;
extern Process* D_8010A928_3011F8_game_guys_roulette;
extern Vec2f D_8010AA88_301358_game_guys_roulette;
extern Unk_D8010AAD6_3013A6_Struct D_8010AAD6_3013A6_game_guys_roulette;
extern s16 D_8010AADE_3013AE_game_guys_roulette;
extern u16 D_8010AAE0_3013B0_game_guys_roulette;
extern u16 D_8010AAE2_3013B2_game_guys_roulette;
extern u8 D_8010AB50_301420_game_guys_roulette;
extern u8 D_8010AB51_301421_game_guys_roulette;
extern s16 D_8010AB54_301424_game_guys_roulette;
extern u8 D_8010AB58_301428_game_guys_roulette;
extern s16 D_8010AB5A_30142A_game_guys_roulette;

#endif
