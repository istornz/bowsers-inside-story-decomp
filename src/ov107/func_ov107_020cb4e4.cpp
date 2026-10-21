#include "types.h"

struct Unk_ov107_020cb4e4 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov107_020cb4e4 data_ov107_020d3b20[];

extern "C" s16 func_ov107_020cb4e4(s32 index) {
    return data_ov107_020d3b20[index].unk00;
}
