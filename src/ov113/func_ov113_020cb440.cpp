#include "types.h"

struct Unk_ov113_020cb440 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov113_020cb440 data_ov113_020d2b28[];

extern "C" s16 func_ov113_020cb440(s32 index) {
    return data_ov113_020d2b28[index].unk00;
}
