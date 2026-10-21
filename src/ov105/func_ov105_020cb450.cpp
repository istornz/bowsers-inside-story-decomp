#include "types.h"

struct Unk_ov105_020cb450 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov105_020cb450 data_ov105_020d0ee2[];

extern "C" s16 func_ov105_020cb450(s32 index) {
    return data_ov105_020d0ee2[index].unk00;
}
