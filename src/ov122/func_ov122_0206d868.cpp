#include "types.h"

struct Unk_ov122_0206d868 {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 unk18;
};

extern "C" void func_ov122_0206d868(Unk_ov122_0206d868* self, u32 value) {
    self->unk18 = value;
}
