#include "types.h"

struct Unk_ov125_0207e418 {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s8 unk34;
};

extern "C" s8 func_ov125_0207e418(Unk_ov125_0207e418* self) {
    return self->unk34;
}
