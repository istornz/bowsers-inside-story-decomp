#include "types.h"

struct Unk_ov031_020cb464 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov031_020cb464 data_ov031_020d02f4[];

extern "C" s16 func_ov031_020cb464(s32 index) {
    return data_ov031_020d02f4[index].unk00;
}
