#include "types.h"

struct Unk_ov123_0208a7c4 {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ s16 unk12;
};

extern "C" s16 func_ov123_0208a7c4(Unk_ov123_0208a7c4* self) {
    return self->unk12;
}
