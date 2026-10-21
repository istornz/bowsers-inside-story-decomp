#include "types.h"

struct Unk_ov101_020caf20 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov101_020caf20 data_ov101_020cf160[];

extern "C" s16 func_ov101_020caf20(s32 index) {
    return data_ov101_020cf160[index].unk00;
}
