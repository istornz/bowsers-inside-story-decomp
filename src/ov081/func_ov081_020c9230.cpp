#include "types.h"

struct Unk_ov081_020c9230 {
    /* 0x00 */ s16 unk00;
};

extern "C" Unk_ov081_020c9230 data_ov081_020cb4ec[];

extern "C" s16 func_ov081_020c9230(s32 index) {
    return data_ov081_020cb4ec[index].unk00;
}
