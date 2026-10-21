#include "types.h"

struct Unk_ov131_Flags {
    u8 unk0 : 2;
    u8 unk2 : 1;
    u8 unk3 : 5;
};

struct Unk_ov131_Block {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u8 unk0c[0xa];
    /* 0x16 */ Unk_ov131_Flags unk16;
};

extern "C" u32 data_0204ac60[];

extern "C" u32 func_ov131_0206c1b0(void* heap, Unk_ov131_Block* block) {
    return block->unk08 + data_0204ac60[block->unk16.unk2];
}
