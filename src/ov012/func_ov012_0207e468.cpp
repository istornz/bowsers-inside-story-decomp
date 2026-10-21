#include "types.h"

struct Unk_ov012_0207e468 {
    /* 0x0 */ u8 unk0[0x8];
    /* 0x8 */ void* unk8;
};

extern "C" void func_ov012_0207e47c(void* p);

extern "C" s32 func_ov012_0207e468(void* a, void* b, Unk_ov012_0207e468* c) {
    func_ov012_0207e47c(c->unk8);
    return 0;
}
