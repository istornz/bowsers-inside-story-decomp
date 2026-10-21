#include "types.h"

struct Unk_ov033_020cb464 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov033_020cb464 data_ov033_020d190c[];

extern "C" s16 func_ov033_020cb464(s32 index) {
    return data_ov033_020d190c[index].unk00;
}
