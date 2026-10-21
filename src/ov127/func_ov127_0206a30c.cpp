#include "types.h"

struct Unk_ov127_0206a30c {
    /* 0x00 */ u8 unk00[0xc48];
    /* 0xc48 */ u32 unkc48[1];
};

extern "C" u32 func_ov127_0206a30c(Unk_ov127_0206a30c* self, s32 index) {
    return self->unkc48[index];
}
