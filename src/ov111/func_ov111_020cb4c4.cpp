#include "types.h"

struct Unk_ov111_020cb4c4 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov111_020cb4c4 data_ov111_020d3c28[];

extern "C" s16 func_ov111_020cb4c4(s32 index) {
    return data_ov111_020d3c28[index].unk00;
}
