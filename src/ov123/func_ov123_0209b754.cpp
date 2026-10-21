#include "types.h"

struct Unk_ov123_020a5278 {
    /* 0x0 */ s16 unk0;
    /* 0x2 */ s16 unk2;
};

struct Unk_ov123_0209b70c {
    /* 0x0 */ u8 unk0[0x7];
    /* 0x7 */ s8 unk7;
};

extern "C" Unk_ov123_020a5278 data_ov123_020a529a[];

extern "C" s16 func_ov123_0209b754(Unk_ov123_0209b70c* self) {
    return data_ov123_020a529a[self->unk7].unk0;
}
