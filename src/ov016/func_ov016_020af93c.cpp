#include "types.h"

struct Unk_ov016_020af93c {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ u32 unk04;
};

extern "C" void func_ov016_020af93c(Unk_ov016_020af93c* self, u32 value) {
    self->unk04 = value;
}
