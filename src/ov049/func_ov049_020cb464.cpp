#include "types.h"

struct Unk_ov049_020cb464 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov049_020cb464 data_ov049_020d4dd8[];

extern "C" s16 func_ov049_020cb464(s32 index) {
    return data_ov049_020d4dd8[index].unk00;
}
