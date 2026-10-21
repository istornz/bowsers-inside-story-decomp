#include "types.h"

struct Unk_ov124_Unit {
    /* 0x00 */ u8 unk00[0x7];
    /* 0x07 */ s8 unk07;
    /* 0x08 */ u8 unk08[0xa];
    /* 0x12 */ s16 unk12;
    /* 0x14 */ s16 unk14;
};

extern "C" BOOL func_ov124_0207ef90(Unk_ov124_Unit* unit) {
    return unit->unk12 == 0;
}
