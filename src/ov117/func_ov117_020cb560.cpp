#include "types.h"

struct Unk_ov117_020cb560 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov117_020cb560 data_ov117_020d2de8[];

extern "C" s16 func_ov117_020cb560(s32 index) {
    return data_ov117_020d2de8[index].unk00;
}
