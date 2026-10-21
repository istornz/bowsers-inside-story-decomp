#include "types.h"

struct Unk_ov050_020cb450 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov050_020cb450 data_ov050_020d56a0[];

extern "C" s16 func_ov050_020cb450(s32 index) {
    return data_ov050_020d56a0[index].unk00;
}
