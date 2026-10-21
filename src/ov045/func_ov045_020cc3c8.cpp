#include "types.h"

struct Unk_ov045_020cc3c8 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov045_020cc3c8 data_ov045_020d3e74[];

extern "C" s16 func_ov045_020cc3c8(s32 index) {
    return data_ov045_020d3e74[index].unk00;
}
