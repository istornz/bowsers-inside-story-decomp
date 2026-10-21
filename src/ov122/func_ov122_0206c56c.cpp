#include "types.h"

struct Unk_ov122_0206c56c {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 unk18;
};

extern "C" u32 func_ov122_0206c56c(Unk_ov122_0206c56c* self) {
    return self->unk18;
}
