#include "types.h"

struct Unk_ov087_Inner {
    /* 0x00 */ u8 pad0[0x20];
    /* 0x20 */ s32 unk20;
};

struct Unk_ov087_Outer {
    /* 0x00 */ u8 pad0[0x10];
    /* 0x10 */ Unk_ov087_Inner* unk10;
};

class Unk_ov087_Obj {
public:
    /* 0x00 vptr */ virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    /* 0x18 */ virtual void v6();
};

extern "C" u8* data_ov008_02064f08;

extern "C" void func_ov120_020d4a34(void* dst, u32 value, s32 count);

extern "C" void func_ov087_020c9b60(Unk_ov087_Outer** a0, s32 a1) {
    u32 r4;
    if (a1 == 0) {
        Unk_ov087_Inner* inner = *(Unk_ov087_Inner**)(data_ov008_02064f08 + 0x2f12c);
        r4 = inner->unk20;
    } else {
        r4 = (*a0)->unk10->unk20 - 0x17c00;
    }
    func_ov120_020d4a34(data_ov008_02064f08 + 0x1e96f0, r4 - 0x2800, 0x1e);
    func_ov120_020d4a34(data_ov008_02064f08 + 0x1e9720, r4 + 0x18800, 0x1e);
    func_ov120_020d4a34(data_ov008_02064f08 + 0x1e9780, 0x10000, 0x1e);
    Unk_ov087_Obj* obj = (Unk_ov087_Obj*)(data_ov008_02064f08 + 0x1e9750);
    obj->v6();
}
