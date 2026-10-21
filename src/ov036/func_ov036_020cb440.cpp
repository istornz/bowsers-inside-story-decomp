#include "types.h"

struct Unk_ov036_020cb440 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov036_020cb440 data_ov036_020d1100[];

extern "C" s16 func_ov036_020cb440(s32 index) {
    return data_ov036_020d1100[index].unk00;
}
