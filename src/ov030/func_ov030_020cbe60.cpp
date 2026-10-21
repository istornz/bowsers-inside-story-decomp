#include "types.h"

struct Unk_ov030_Entry {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u32 unk4;
};

struct Unk_ov030_Out {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 unk8;
};

// dsd split the table in two symbols, one per field of its 8-byte entries
extern "C" Unk_ov030_Entry data_ov030_020d2168[];
extern "C" Unk_ov030_Entry data_ov030_020d216c[];

// TODO: 51.55%. The two loads must happen before the stores, and this compiles to one `stmib`. Most likely one table
// of 8-byte entries that dsd split in two symbols: merge data_ov030_020d2168/020d216c (USA and EUR) and read .unk4.
extern "C" void func_ov030_020cbe60(Unk_ov030_Out* out, s32 index) {
    out->unk0 = data_ov030_020d2168[index].unk0;
    out->unk4 = data_ov030_020d216c[index].unk0;
    out->unk8 = 0;
}
