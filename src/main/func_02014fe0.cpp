#include "types.h"

struct Unk_main_02014fe0 {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ s16 unk04;
};

extern "C" Unk_main_02014fe0 data_02052640;

extern "C" s16 func_02014fe0() {
    return data_02052640.unk04;
}
