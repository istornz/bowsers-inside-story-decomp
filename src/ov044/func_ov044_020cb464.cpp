#include "types.h"

struct Unk_ov044_020cb464 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov044_020cb464 data_ov044_020cd698[];

extern "C" s16 func_ov044_020cb464(s32 index) {
    return data_ov044_020cd698[index].unk00;
}
