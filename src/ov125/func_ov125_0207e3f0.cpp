#include "types.h"

struct Unk_ov125_0207e3f0 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 unk20;
};

extern "C" BOOL func_ov125_0207e3f0(Unk_ov125_0207e3f0* self) {
    return self->unk20 != 0;
}
