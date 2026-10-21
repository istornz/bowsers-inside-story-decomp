#include "types.h"

struct Unk_ov036_020cb464 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov036_020cb464 data_ov036_020d1164[];

extern "C" s16 func_ov036_020cb464(s32 index) {
    return data_ov036_020d1164[index].unk00;
}
