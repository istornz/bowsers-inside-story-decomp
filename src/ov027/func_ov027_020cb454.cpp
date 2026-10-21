#include "types.h"

struct Unk_ov027_020cb454 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov027_020cb454 data_ov027_020cd760[];

extern "C" s16 func_ov027_020cb454(s32 index) {
    return data_ov027_020cd760[index].unk00;
}
