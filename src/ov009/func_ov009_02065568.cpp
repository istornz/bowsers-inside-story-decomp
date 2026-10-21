#include "types.h"

struct Unk_ov009_Flags {
    u32 unk0 : 5;
    u32 unk5 : 2;
    u32 unk7 : 25;
};

struct Unk_ov009_Main {
    /* 0x000 */ u8 unk000[0x504];
    /* 0x504 */ Unk_ov009_Flags unk504;
};

struct Unk_ov009_02065c40 {
    /* 0x0 */ s16 unk0;
    /* 0x2 */ s16 unk2;
};

extern "C" Unk_ov009_Main data_02055fe4;
extern "C" Unk_ov009_02065c40 data_ov009_02065c40;

extern "C" void func_02035504(u32 reg, s32 value);

extern "C" void func_ov009_02065568() {
    BOOL main = ((*(volatile u16*)0x04000304 & 0x8000) >> 15) == 0;
    if (data_02055fe4.unk504.unk5 == 1) {
        main ^= 1;
    }
    if (main) {
        func_02035504(0x0400006c, data_ov009_02065c40.unk2 / 2 - 0x10);
    } else {
        func_02035504(0x0400106c, data_ov009_02065c40.unk2 / 2 - 0x10);
    }
}
