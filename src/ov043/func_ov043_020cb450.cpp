#include "types.h"

struct Unk_ov043_020cb450 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov043_020cb450 data_ov043_020d1964[];

extern "C" s16 func_ov043_020cb450(s32 index) {
    return data_ov043_020d1964[index].unk00;
}
