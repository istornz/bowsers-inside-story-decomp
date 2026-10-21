#include "types.h"

struct Unk_main_02017b50 {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u32 unk08;
};

extern "C" Unk_main_02017b50 data_02058f6c;

extern "C" u32 func_02017b50() {
    return data_02058f6c.unk08;
}
