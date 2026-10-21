#include "types.h"

struct Unk_ov007_0211091c {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 unk14;
};

extern "C" u32 func_ov007_0211091c(Unk_ov007_0211091c* self) {
    return self->unk14;
}
