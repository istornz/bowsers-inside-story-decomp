#include "types.h"

struct Unk_main_020432f4 {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ u32 unk04;
};

extern "C" Unk_main_020432f4 data_02062fc0;

extern "C" void func_020432f4() {
    data_02062fc0.unk04 = 0;
}
