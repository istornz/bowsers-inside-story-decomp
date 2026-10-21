#include "types.h"

struct Unk_ov118_020f3fb4 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov118_020f3fb4 data_ov118_020f57a0[];

extern "C" s16 func_ov118_020f3fb4(s32 index) {
    return data_ov118_020f57a0[index].unk00;
}
