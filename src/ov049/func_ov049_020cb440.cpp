#include "types.h"

struct Unk_ov049_020cb440 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov049_020cb440 data_ov049_020d4d60[];

extern "C" s16 func_ov049_020cb440(s32 index) {
    return data_ov049_020d4d60[index].unk00;
}
