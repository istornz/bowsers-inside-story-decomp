#include "types.h"

struct Unk_ov029_020cb450 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov029_020cb450 data_ov029_020d13f4[];

extern "C" s16 func_ov029_020cb450(s32 index) {
    return data_ov029_020d13f4[index].unk00;
}
