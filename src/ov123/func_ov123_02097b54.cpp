#include "types.h"

struct Unk_ov123_02097b54 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s16 unk10;
};

extern "C" s16 func_ov123_02097b54(Unk_ov123_02097b54* self) {
    return self->unk10;
}
