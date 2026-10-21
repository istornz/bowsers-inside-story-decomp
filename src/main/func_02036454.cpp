#include "types.h"

struct Unk_main_02036454 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u16 unk10;
};

extern "C" Unk_main_02036454 data_02060524;

extern "C" u16 func_02036454() {
    return data_02060524.unk10;
}
