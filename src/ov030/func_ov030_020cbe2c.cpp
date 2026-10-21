#include "types.h"

struct Unk_ov030_020cbe2c {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov030_020cbe2c data_ov030_020d21e8[];

extern "C" s16 func_ov030_020cbe2c(s32 index) {
    return data_ov030_020d21e8[index].unk00;
}
