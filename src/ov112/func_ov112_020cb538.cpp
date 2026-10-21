#include "types.h"

struct Unk_ov112_020cb538 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov112_020cb538 data_ov112_020d31c8[];

extern "C" s16 func_ov112_020cb538(s32 index) {
    return data_ov112_020d31c8[index].unk00;
}
