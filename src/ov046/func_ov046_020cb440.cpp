#include "types.h"

struct Unk_ov046_020cb440 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov046_020cb440 data_ov046_020d1cc0[];

extern "C" s16 func_ov046_020cb440(s32 index) {
    return data_ov046_020d1cc0[index].unk00;
}
