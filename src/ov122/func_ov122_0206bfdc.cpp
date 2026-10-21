#include "types.h"

struct Unk_ov122_0206bfdc {
    /* 0x00 */ u8 unk00[0xe9];
    /* 0xe9 */ u8 unke9;
};

extern "C" void func_ov122_0206bfdc(Unk_ov122_0206bfdc* self, u8 value) {
    self->unke9 = value;
}
