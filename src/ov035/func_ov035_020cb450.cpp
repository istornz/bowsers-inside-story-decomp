#include "types.h"

struct Unk_ov035_020cb450 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov035_020cb450 data_ov035_020ce4a0[];

extern "C" s16 func_ov035_020cb450(s32 index) {
    return data_ov035_020ce4a0[index].unk00;
}
