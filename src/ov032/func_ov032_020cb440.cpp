#include "types.h"

struct Unk_ov032_020cb440 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov032_020cb440 data_ov032_020d3180[];

extern "C" s16 func_ov032_020cb440(s32 index) {
    return data_ov032_020d3180[index].unk00;
}
