#include "types.h"

struct Unk_ov122_0206e748 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 unk14;
};

extern "C" void func_ov122_0206e748(Unk_ov122_0206e748* self, u32 value) {
    self->unk14 = value;
}
