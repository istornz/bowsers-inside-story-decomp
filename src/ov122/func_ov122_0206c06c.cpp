#include "types.h"

struct Unk_ov122_0206c06c {
    /* 0x00 */ u8 unk00[0x59];
    /* 0x59 */ u8 unk59;
};

extern "C" void func_ov122_0206c06c(Unk_ov122_0206c06c* self, u8 value) {
    self->unk59 = value;
}
