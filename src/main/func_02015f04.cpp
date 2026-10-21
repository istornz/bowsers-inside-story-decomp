#include "types.h"

struct Unk_main_02015f04 {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ u32 unk04;
};

extern "C" void func_02015f04(Unk_main_02015f04* self, u32 value) {
    self->unk04 = value;
}
