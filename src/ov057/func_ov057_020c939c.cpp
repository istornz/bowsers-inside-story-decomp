#include "types.h"

struct Unk_ov057_020c939c {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 unk28;
};

extern "C" Unk_ov057_020c939c data_ov057_020c9660;

extern "C" u32 func_ov057_020c939c() {
    return data_ov057_020c9660.unk28;
}
