#include "types.h"

struct Unk_ov123_02097a70 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s8 unk20;
};

extern "C" s8 func_ov123_02097a70(Unk_ov123_02097a70* self) {
    return self->unk20;
}
