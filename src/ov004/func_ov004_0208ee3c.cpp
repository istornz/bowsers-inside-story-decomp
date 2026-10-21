#include "types.h"

struct Unk_ov004_0208ee3c {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u32 unk08;
};

extern "C" u32 func_ov004_0208ee3c(Unk_ov004_0208ee3c* self) {
    return self->unk08;
}
