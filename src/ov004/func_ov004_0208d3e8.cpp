#include "types.h"

struct Unk_ov004_0208d3e8 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 unk14;
};

extern "C" u32 func_ov004_0208d3e8(Unk_ov004_0208d3e8* self) {
    return self->unk14;
}
