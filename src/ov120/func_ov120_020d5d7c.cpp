#include "types.h"

struct Unk_ov120_Vec {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
    /* 0x8 */ s32 z;
};

class Unk_ov120_Obj {
public:
    virtual void unk00();
    /* 0x04 */ virtual void unk04(Unk_ov120_Vec* vec);
};

extern "C" void func_ov120_020d5d7c(Unk_ov120_Obj* obj, s32 x, s32 y, s32 z) {
    Unk_ov120_Vec vec;
    vec.x = x << 8;
    vec.y = y << 8;
    vec.z = z << 4;
    obj->unk04(&vec);
}
