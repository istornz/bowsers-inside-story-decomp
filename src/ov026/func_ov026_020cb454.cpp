#include "types.h"

struct Unk_ov026_020cb454 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov026_020cb454 data_ov026_020cdc00[];

extern "C" s16 func_ov026_020cb454(s32 index) {
    return data_ov026_020cdc00[index].unk00;
}
