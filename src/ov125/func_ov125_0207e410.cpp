#include "types.h"

struct Unk_ov125_0207e410 {
    /* 0x00 */ u8 unk00[0x35];
    /* 0x35 */ s8 unk35;
};

extern "C" s8 func_ov125_0207e410(Unk_ov125_0207e410* self) {
    return self->unk35;
}
