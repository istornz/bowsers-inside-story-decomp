#include "types.h"

struct Unk_ov109_020cb964 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov109_020cb964 data_ov109_020d2e9c[];

extern "C" s16 func_ov109_020cb964(s32 index) {
    return data_ov109_020d2e9c[index].unk00;
}
