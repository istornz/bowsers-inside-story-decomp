#include "types.h"

struct Unk_ov124_Args {
    /* 0x00 */ u8 unk00[0x2];
    /* 0x02 */ u16 unk02;
    /* 0x04 */ u8 unk04[0x4];
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u32 unk0c;
};

extern "C" void* func_ov124_0209c4a8(void* a, u32 b, u32 c);
extern "C" void func_02005a78(u16 id, void* p, void* a, void* b);

extern "C" s32 func_ov124_0209b10c(void* a, void* b, Unk_ov124_Args* args) {
    void* p = func_ov124_0209c4a8(a, args->unk08, args->unk0c);
    func_02005a78(args->unk02, p, a, b);
    return 0;
}
