#include "types.h"

struct Unk_ov040_020cb450 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov040_020cb450 data_ov040_020d31f8[];

extern "C" s16 func_ov040_020cb450(s32 index) {
    return data_ov040_020d31f8[index].unk00;
}
