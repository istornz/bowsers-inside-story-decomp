#include "types.h"

struct Unk_ov004_020a958c {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 unk18;
};

extern "C" u32 func_ov004_020a958c(Unk_ov004_020a958c* self) {
    return self->unk18;
}
