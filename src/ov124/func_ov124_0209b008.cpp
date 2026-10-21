#include "types.h"

struct Unk_ov124_0207e468 {
    /* 0x0 */ u8 unk0[0x8];
    /* 0x8 */ void* unk8;
};

extern "C" void func_ov124_02077488(void* p);

extern "C" s32 func_ov124_0209b008(void* a, void* b, Unk_ov124_0207e468* c) {
    func_ov124_02077488(c->unk8);
    return 0;
}
