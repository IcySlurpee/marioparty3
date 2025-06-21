#ifndef _MINIGAME_H
#define _MINIGAME_H

#include "common.h"

// typedef struct {
//     /* 0x00 */ char unk00[2];
//     /* 0x02 */ s16 unk02;
//     /* 0x04 */ char unk04[0x14];
// } D_800CCF58_CDB58_Struct; // Size 0x18

typedef struct Unk_DataStruct01 {
    /* 0x000 */ char unk00[4];
    /* 0x004 */ void (*func04)();
    /* 0x008 */ void (*func08)(omObjData*);
    /* 0x00C */ void (*func0C)(omObjData*);
    /* 0x010 */ s32 unk10;
    /* 0x014 */ s32 unk14;
    /* 0x018 */ s32 unk18;
    /* 0x01C */ s32 unk1C;
    /* 0x020 */ s32 unk20;
    /* 0x024 */ char unk24[0x24];
    /* 0x048 */ f32 unk48;
    /* 0x05C */ char unk5C[0x236];
    /* 0x282 */ u16 unk282;
    /* 0x284 */ u16 unk284;
    /* 0x286 */ u16 unk286;
    /* 0x288 */ u16 unk288;
    /* 0x28A */ u16 unk28A;
    /* 0x28C */ u16 unk28C;
    /* 0x28E */ s16 unk28E;
} Unk_DataStruct01; // sizeof: 0x290

typedef struct {
    /* 0x00 */ u16* unk00;
    /* 0x04 */ u16* unk04;
    /* 0x08 */ f32 unk08;
    /* 0x0C */ f32 unk0C;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ u16 unk14; // bitfield?
    /* 0x16 */ u16 unk16;
} Unk_D800EBDF4_BE974_Struct;

typedef struct {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ char unk04[4];
    /* 0x08 */ u16 unk08;
    /* 0x0A */ u16 unk0A;
} Unk_ovl82_ProcessUserData_Size0C; //sizeof 0xC

extern u8 D_800EBAF4_BE674_minigame[];
extern s16 D_800EBDF0_BE970_minigame;
extern Unk_D800EBDF4_BE974_Struct* D_800EBDF4_BE974_minigame;
extern s16 D_800EBDF8_BE978_minigame;
extern s16 D_800EBDFA_BE97A_minigame;
extern u16 D_800EBDFC_BE97C_minigame;
extern s16 D_800EBE00_BE980_minigame[];

#endif
