#include "types.h"

struct Unk_ov004_0208d3e0 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 unk10;
};

extern "C" u32 func_ov004_0208d3e0(Unk_ov004_0208d3e0* self) {
    return self->unk10;
}
