#include "types.h"

struct Unk_ov072_020cce40 {
    /* 0x0 */ s32 unk0;
    /* 0x4 */ s32 unk4;
};

struct Unk_ov072_Obj {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ void (*unk54)(Unk_ov072_Obj* obj);
};

extern "C" Unk_ov072_020cce40 data_ov072_020cce40;

extern "C" void func_01ff8228(void* dst, s32 value, s32 size);
extern "C" void func_ov072_020c9024(Unk_ov072_Obj* obj);

inline void Unk_ov072_020cce40_clear(Unk_ov072_020cce40* state) {
    func_01ff8228(state, 0, sizeof(Unk_ov072_020cce40));
}

// TODO: 93.71%. The original has two literal pool entries for data_ov072_020cce40 (one for the clear, one for the
// stores); this compiles to one. Tried: an inline clear helper.
extern "C" void func_ov072_020c8fe0(Unk_ov072_Obj* obj, s32 a, s32 b) {
    Unk_ov072_020cce40_clear(&data_ov072_020cce40);
    data_ov072_020cce40.unk0 = a;
    data_ov072_020cce40.unk4 = b;
    obj->unk54 = func_ov072_020c9024;
}
