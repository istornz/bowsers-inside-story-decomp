#include "types.h"

struct Unk_ov115_020cb4e8 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov115_020cb4e8 data_ov115_020d0fe0[];

extern "C" s16 func_ov115_020cb4e8(s32 index) {
    return data_ov115_020d0fe0[index].unk00;
}
