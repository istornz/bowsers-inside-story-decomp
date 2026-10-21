#include "types.h"

struct Unk_ov034_020cb458 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov034_020cb458 data_ov034_020d0a9c[];

extern "C" s16 func_ov034_020cb458(s32 index) {
    return data_ov034_020d0a9c[index].unk00;
}
