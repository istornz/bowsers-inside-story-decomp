#include "types.h"

struct Unk_ov032_020cb464 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov032_020cb464 data_ov032_020d31a0[];

extern "C" s16 func_ov032_020cb464(s32 index) {
    return data_ov032_020d31a0[index].unk00;
}
