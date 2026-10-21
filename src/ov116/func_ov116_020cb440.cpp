#include "types.h"

struct Unk_ov116_020cb440 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov116_020cb440 data_ov116_020d2a00[];

extern "C" s16 func_ov116_020cb440(s32 index) {
    return data_ov116_020d2a00[index].unk00;
}
