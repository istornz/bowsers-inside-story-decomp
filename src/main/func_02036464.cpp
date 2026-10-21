#include "types.h"

struct Unk_main_02036464 {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u16 unk08;
};

extern "C" Unk_main_02036464 data_02060524;

extern "C" u16 func_02036464() {
    return data_02060524.unk08;
}
