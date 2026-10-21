#include "types.h"

struct Unk_ov056_Vec {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
    /* 0x8 */ s32 z;
};

class Unk_ov056_Obj {
public:
    virtual void unk00();
    /* 0x04 */ virtual void unk04(Unk_ov056_Vec* vec);
};

extern "C" void func_ov056_020c8ffc(Unk_ov056_Obj* obj, s32 x, s32 y, s32 z) {
    Unk_ov056_Vec vec;
    vec.x = x << 8;
    vec.y = y << 8;
    vec.z = z << 4;
    obj->unk04(&vec);
}
