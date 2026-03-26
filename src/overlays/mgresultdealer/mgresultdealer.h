#ifndef _MGRESULTDEALER_H
#define _MGRESULTDEALER_H

#include "common.h"

#define __INT_MAX__ 0x7fffffff

typedef struct {
    /* 0x00 */ char unk00[0xC];
    /* 0x0C */ f32 unk0C;
    /* 0x10 */ f32 unk10;
} Unk_D_80109A78_4F0288_mgresultdealer_Struct;

typedef struct {
    /* 0x00 */ char unk00[4];
    /* 0x04 */ void (*func)(void);
} MGResultDealer_UnkStruct;

extern s32 D_800A178C[][6];
extern s32 D_800A1794[][6];

extern s8 D_801098C0_4F00D0_mgresultdealer;
extern s32 D_801098CC_4F00DC_mgresultdealer;
extern s8 D_801098D0_4F00E0_mgresultdealer;
extern s8 D_801098E0_4F00F0_mgresultdealer;
extern s8 D_801098E1_4F00F1_mgresultdealer;
extern s8 D_801098E2_4F00F2_mgresultdealer;
extern Vec D_801098E4_4F00F4_mgresultdealer;
extern Vec2f D_801098E8_4F00F8_mgresultdealer;
extern Vec D_801098F0_4F0100_mgresultdealer;
extern s32 D_801098FC_4F010C_mgresultdealer[];
extern s16 D_8010990C_4F011C_mgresultdealer;
extern s8 D_80109910_4F0120_mgresultdealer;
extern s8 D_80109911_4F0121_mgresultdealer;
extern s32 D_80109914_4F0124_mgresultdealer;
extern s32 D_80109918_4F0128_mgresultdealer;
extern s32 D_8010991C_4F012C_mgresultdealer;
extern s32 D_80109920_4F0130_mgresultdealer;
extern s32 D_80109924_4F0134_mgresultdealer;
extern s8 D_80109930_4F0140_mgresultdealer;
extern s8 D_80109931_4F0141_mgresultdealer;
extern s32 D_80109934_4F0144_mgresultdealer;
extern s8 D_80109938_4F0148_mgresultdealer;
extern s16 D_8010993A_4F014A_mgresultdealer;
extern s8 D_80109940_4F0150_mgresultdealer;
extern s8 D_80109941_4F0151_mgresultdealer;
extern s32 D_80109944_4F0154_mgresultdealer;
extern s32 D_80109950_4F0160_mgresultdealer;
extern s32 D_801099AA_4F01BA_mgresultdealer[8];
extern s16 D_801099F8_4F0208_mgresultdealer[];
extern f32 D_80109A60_4F0270_mgresultdealer;
extern s16 D_80109A64_4F0274_mgresultdealer[];
extern s16 D_80109A68_4F0278_mgresultdealer;
extern s16 D_80109A6A_4F027A_mgresultdealer;
extern u8 D_80109A78_4F0288_mgresultdealer[];
extern s32 D_80109A7C_4F028C_mgresultdealer[];
extern f32 D_80109A80_4F0290_mgresultdealer[];
extern f32 D_80109A8C_4F029C_mgresultdealer[];
extern s16 D_8010A200_4F0A10_mgresultdealer;
extern s32 D_8010A204_4F0A14_mgresultdealer;
extern HuSprite* D_8010A208_4F0A18_mgresultdealer;
extern void* D_8010A20C_4F0A1C_mgresultdealer;
extern s32 D_8010A240_4F0A50_mgresultdealer;
extern s32 D_8010A244_4F0A54_mgresultdealer;
extern omObjData* D_8010A250_4F0A60_mgresultdealer;
extern void (*D_8010A254_4F0A64_mgresultdealer)(omObjData*);
extern s16 D_8010A258_4F0A68_mgresultdealer;
extern omObjData* D_8010A25C_4F0A6C_mgresultdealer;
extern void (*D_8010A260_4F0A70_mgresultdealer)(omObjData *);
extern s16 D_8010A264_4F0A74_mgresultdealer;
extern s8 D_8010A266_4F0A76_mgresultdealer; // current player index?
extern MGResultDealer_UnkStruct D_8010A26C_4F0A7C_mgresultdealer;
extern void (*D_8010A270_4F0A80_mgresultdealer)(omObjData *);
extern omObjData* D_8010A274_4F0A84_mgresultdealer;
extern void (*D_8010A278_4F0A88_mgresultdealer)(omObjData *);

#endif
