#include "types.h"

struct Unk_ov048_020cb450 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov048_020cb450 data_ov048_020ced54[];

extern "C" s16 func_ov048_020cb450(s32 index) {
    return data_ov048_020ced54[index].unk00;
}
