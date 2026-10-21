#include "types.h"

struct Unk_ov101_020ccfb0 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov101_020ccfb0 data_ov101_020cf1b8[];

extern "C" s16 func_ov101_020ccfb0(s32 index) {
    return data_ov101_020cf1b8[index].unk00;
}
