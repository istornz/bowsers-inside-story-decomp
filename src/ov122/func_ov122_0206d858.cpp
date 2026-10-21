#include "types.h"

struct Unk_ov122_0206d858 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 unk20;
};

extern "C" void func_ov122_0206d858(Unk_ov122_0206d858* self, u32 value) {
    self->unk20 = value;
}
