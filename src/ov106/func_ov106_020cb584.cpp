#include "types.h"

struct Unk_ov106_020cb584 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov106_020cb584 data_ov106_020d421c[];

extern "C" s16 func_ov106_020cb584(s32 index) {
    return data_ov106_020d421c[index].unk00;
}
