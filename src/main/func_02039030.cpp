#include "types.h"

struct Unk_main_02039030 {
    /* 0x00 */ u8 unk00[0xb4];
    /* 0xb4 */ u32 unkb4;
};

extern "C" void func_02039030(Unk_main_02039030* self, u32 value) {
    self->unkb4 = value;
}
