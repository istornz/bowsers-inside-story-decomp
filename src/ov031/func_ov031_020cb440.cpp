#include "types.h"

struct Unk_ov031_020cb440 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov031_020cb440 data_ov031_020d02e0[];

extern "C" s16 func_ov031_020cb440(s32 index) {
    return data_ov031_020d02e0[index].unk00;
}
