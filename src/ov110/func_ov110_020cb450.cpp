#include "types.h"

struct Unk_ov110_020cb450 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov110_020cb450 data_ov110_020d0734[];

extern "C" s16 func_ov110_020cb450(s32 index) {
    return data_ov110_020d0734[index].unk00;
}
