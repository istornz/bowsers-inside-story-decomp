#include "types.h"

struct Unk_ov123_Args {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u32 unk0c;
    /* 0x10 */ u32 unk10;
};

extern "C" void func_ov123_0209ffb0(void* a, u32 b, u32 c, u32 d);

extern "C" s32 func_ov123_0209e8d4(void* a, void* b, Unk_ov123_Args* args) {
    func_ov123_0209ffb0(a, args->unk08, args->unk0c, args->unk10);
    return 0;
}
