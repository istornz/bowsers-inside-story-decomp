#include "types.h"

struct Unk_ov044_020cb440 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov044_020cb440 data_ov044_020cd680[];

extern "C" s16 func_ov044_020cb440(s32 index) {
    return data_ov044_020cd680[index].unk00;
}
