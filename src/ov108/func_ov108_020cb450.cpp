#include "types.h"

struct Unk_ov108_020cb450 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov108_020cb450 data_ov108_020d2494[];

extern "C" s16 func_ov108_020cb450(s32 index) {
    return data_ov108_020d2494[index].unk00;
}
