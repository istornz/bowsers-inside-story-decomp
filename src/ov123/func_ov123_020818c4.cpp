#include "types.h"

struct Unk_ov123_020818c4 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 unk20;
};

extern "C" u32 func_ov123_020818c4(Unk_ov123_020818c4* self) {
    return self->unk20;
}
