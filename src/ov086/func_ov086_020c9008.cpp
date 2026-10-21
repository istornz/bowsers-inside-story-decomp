#include "types.h"

struct Unk_ov086_020c9030 {
    /* 0x00 */ u8 pad00[0x54];
    /* 0x54 */ void (*unk54)();
};

extern "C" void func_ov086_020c9030();
extern "C" s32 func_ov086_020c9348(void* arg);
extern "C" u8 data_ov086_020cf400[];

extern "C" void func_ov086_020c9008(Unk_ov086_020c9030* self) {
    if (func_ov086_020c9348(data_ov086_020cf400) != 1) {
        self->unk54 = func_ov086_020c9030;
    }
}
