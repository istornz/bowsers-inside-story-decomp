#include "types.h"

struct Unk_ov009_02064f20 {
    /* 0x0 */ s16 unk0;
    /* 0x2 */ s16 unk2;
};

extern "C" void func_ov009_02064f20(Unk_ov009_02064f20* self) {
    self->unk2 = 0;
    self->unk0 = 0;
}
