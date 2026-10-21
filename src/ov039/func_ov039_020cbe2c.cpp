#include "types.h"

struct Unk_ov039_020cbe2c {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov039_020cbe2c data_ov039_020d1a08[];

extern "C" s16 func_ov039_020cbe2c(s32 index) {
    return data_ov039_020d1a08[index].unk00;
}
