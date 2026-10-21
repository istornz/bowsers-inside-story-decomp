#include "types.h"

struct Unk_ov123_0207c42c {
    /* 0x00 */ u8 unk00[0x7];
    /* 0x07 */ s8 unk07;
};

extern "C" s8 func_ov123_0207c42c(Unk_ov123_0207c42c* self) {
    return self->unk07;
}
