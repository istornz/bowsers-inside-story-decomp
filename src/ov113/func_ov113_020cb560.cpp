#include "types.h"

struct Unk_ov113_020cb560 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov113_020cb560 data_ov113_020d2ba8[];

extern "C" s16 func_ov113_020cb560(s32 index) {
    return data_ov113_020d2ba8[index].unk00;
}
