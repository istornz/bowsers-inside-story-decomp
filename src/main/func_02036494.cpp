#include "types.h"

struct Unk_main_02036494 {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u16 unk16;
};

extern "C" Unk_main_02036494 data_02060524;

extern "C" u16 func_02036494() {
    return data_02060524.unk16;
}
