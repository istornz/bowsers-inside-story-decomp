#include "types.h"

struct Unk_ov042_020cb450 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov042_020cb450 data_ov042_020d3880[];

extern "C" s16 func_ov042_020cb450(s32 index) {
    return data_ov042_020d3880[index].unk00;
}
