#include "types.h"

struct Unk_ov026_020cb440 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov026_020cb440 data_ov026_020cdc6c[];

extern "C" s16 func_ov026_020cb440(s32 index) {
    return data_ov026_020cdc6c[index].unk00;
}
