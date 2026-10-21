#include "types.h"

struct Unk_ov084_020c9030 {
    /* 0x00 */ u8 pad00[0x54];
    /* 0x54 */ void (*unk54)();
};

extern "C" void func_ov084_020c9058();
extern "C" s32 func_ov084_020c93dc(void* arg);
extern "C" u8 data_ov084_020d03f8[];

extern "C" void func_ov084_020c9030(Unk_ov084_020c9030* self) {
    if (func_ov084_020c93dc(data_ov084_020d03f8) != 1) {
        self->unk54 = func_ov084_020c9058;
    }
}
