#include "types.h"

struct Unk_main_02039888 {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ u32 unk04;
};

extern "C" Unk_main_02039888 data_0206085c;

extern "C" void func_02039888() {
    data_0206085c.unk04 = 1;
}
