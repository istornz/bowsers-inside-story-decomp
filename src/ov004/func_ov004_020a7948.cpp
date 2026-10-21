#include "types.h"

struct Unk_ov004_020a7948 {
    /* 0x00 */ u8 unk00[0x150];
    /* 0x150 */ u32 unk150;
};

extern "C" u32 func_ov004_020a7948(Unk_ov004_020a7948* self) {
    return self->unk150;
}
