#include "types.h"

struct Unk_ov123_Unit {
    /* 0x00 */ u8 unk00[0x7];
    /* 0x07 */ s8 unk07;
    /* 0x08 */ u8 unk08[0xa];
    /* 0x12 */ s16 unk12;
    /* 0x14 */ s16 unk14;
};

extern "C" void func_ov123_0209c224(Unk_ov123_Unit* unit, s32 a, s32 b);

extern "C" void func_ov123_0209c254(Unk_ov123_Unit* unit) {
    func_ov123_0209c224(unit, unit->unk07, unit->unk14);
}
