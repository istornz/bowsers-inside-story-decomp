#include "types.h"

struct Unk_ov123_02097b5c {
    /* 0x00 */ u8 unk00[0x9];
    /* 0x09 */ u8 unk09;
};

extern "C" u8 func_ov123_02097b5c(Unk_ov123_02097b5c* self) {
    return self->unk09;
}
