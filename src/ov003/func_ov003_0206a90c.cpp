#include "types.h"

struct Unk_ov003_0206a90c {
    /* 0x00 */ u8 unk00[0x98];
    /* 0x98 */ u8 unk98;
};

extern "C" void func_ov003_0206a90c(Unk_ov003_0206a90c* self, u8 value) {
    self->unk98 = value;
}
