#include "types.h"

struct Unk_ov124_0207e468 {
    /* 0x0 */ u8 unk0[0x8];
    /* 0x8 */ void* unk8;
};

extern "C" void func_ov124_020799d0(void* p);

extern "C" s32 func_ov124_0209ac9c(void* a, void* b, Unk_ov124_0207e468* c) {
    func_ov124_020799d0(c->unk8);
    return 0;
}
