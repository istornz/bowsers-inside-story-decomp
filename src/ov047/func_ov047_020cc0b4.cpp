#include "types.h"

struct Unk_ov047_020cc0b4 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov047_020cc0b4 data_ov047_020d411c[];

extern "C" s16 func_ov047_020cc0b4(s32 index) {
    return data_ov047_020d411c[index].unk00;
}
