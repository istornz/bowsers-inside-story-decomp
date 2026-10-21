#include "types.h"

struct Unk_ov116_020cb4f4 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov116_020cb4f4 data_ov116_020d2a74[];

extern "C" s16 func_ov116_020cb4f4(s32 index) {
    return data_ov116_020d2a74[index].unk00;
}
