#include "types.h"

struct Unk_ov117_020cb440 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov117_020cb440 data_ov117_020d2d60[];

extern "C" s16 func_ov117_020cb440(s32 index) {
    return data_ov117_020d2d60[index].unk00;
}
