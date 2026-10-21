#include "types.h"

struct Unk_ov012_Args {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u32 unk0c;
    /* 0x10 */ u32 unk10;
};

extern "C" void func_ov012_02085508(void* a, u32 b, u32 c, u32 d);

extern "C" s32 func_ov012_02079eb0(void* a, void* b, Unk_ov012_Args* args) {
    func_ov012_02085508(a, args->unk08, args->unk0c, args->unk10);
    return 0;
}
