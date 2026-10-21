#include "types.h"

struct Unk_ov027_020cb440 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov027_020cb440 data_ov027_020cd7b8[];

extern "C" s16 func_ov027_020cb440(s32 index) {
    return data_ov027_020cd7b8[index].unk00;
}
