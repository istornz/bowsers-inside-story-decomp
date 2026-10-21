#include "types.h"

struct Unk_ov033_020cb440 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov033_020cb440 data_ov033_020d1904[];

extern "C" s16 func_ov033_020cb440(s32 index) {
    return data_ov033_020d1904[index].unk00;
}
