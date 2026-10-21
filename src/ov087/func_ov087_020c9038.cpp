#include "types.h"

struct Unk_ov087_020c9030 {
    /* 0x00 */ u8 pad00[0x54];
    /* 0x54 */ void (*unk54)();
};

extern "C" void func_ov087_020c9060();
extern "C" s32 func_ov087_020c92fc(void* arg);
extern "C" u8 data_ov087_020cd9e8[];

extern "C" void func_ov087_020c9038(Unk_ov087_020c9030* self) {
    if (func_ov087_020c92fc(data_ov087_020cd9e8) != 1) {
        self->unk54 = func_ov087_020c9060;
    }
}
