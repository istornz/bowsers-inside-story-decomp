#include "types.h"

struct Unk_main_02014ff0 {
    /* 0x00 */ u8 unk00[0x6];
    /* 0x06 */ s16 unk06;
};

extern "C" Unk_main_02014ff0 data_02052640;

extern "C" s16 func_02014ff0() {
    return data_02052640.unk06;
}
