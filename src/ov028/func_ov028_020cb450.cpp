#include "types.h"

struct Unk_ov028_020cb450 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov028_020cb450 data_ov028_020cf904[];

extern "C" s16 func_ov028_020cb450(s32 index) {
    return data_ov028_020cf904[index].unk00;
}
