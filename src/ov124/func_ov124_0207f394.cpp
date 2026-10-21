#include "types.h"

// Placeholder until the owning class is identified
struct Unk_ov124_0206d978 {
    /* 0x00 */ u8 unk0[4];
    /* 0x04 */ s8 unk4;
    /* 0x05 */ s8 unk5;
    /* 0x06 */ u8 unk6[2];
    /* 0x08 */ u8 unk8;
    /* 0x09 */ u8 unk9;
};

extern "C" BOOL func_ov124_0207f394(Unk_ov124_0206d978* self) {
    if (self->unk4 != 0) {
        u8 min = self->unk9;
        if (self->unk8 <= min) {
            min = self->unk8;
        }
        if (self->unk5 >= min) {
            return TRUE;
        }
    }
    return FALSE;
}
