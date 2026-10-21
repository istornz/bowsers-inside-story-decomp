#include "types.h"

struct Unk_ov058_Obj {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 unk20;
};

struct Unk_ov058_020cae5c {
    /* 0x0 */ u32 unk0;
};

extern "C" Unk_ov058_020cae5c data_ov058_020cae5c;

extern "C" void func_ov016_020af944(void* p);

// TODO: 45.91%. The original keeps the address of data_ov058_020cae5c in r4 across the call (and obj in r5); this
// compiles to loading it twice. Tried: a local pointer.
extern "C" void func_ov058_020c9ebc(Unk_ov058_Obj* obj) {
    Unk_ov058_020cae5c* state = &data_ov058_020cae5c;
    func_ov016_020af944(state);
    if (state->unk0 == 0) {
        obj->unk20 = 0;
    }
}
