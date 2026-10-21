#include "types.h"

struct Unk_ov122_0206d860 {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ u32 unk1c;
};

extern "C" void func_ov122_0206d860(Unk_ov122_0206d860* self, u32 value) {
    self->unk1c = value;
}
