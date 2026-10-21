#include "types.h"

struct Unk_ov102_Obj {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ void (*unk54)(Unk_ov102_Obj* obj);
};

struct Unk_ov102_Inner {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 unk20;
};

// The object at 0x020ccf8c follows a 0xc-byte block at 0x020ccf80, the code addresses both from 0x020ccf80
struct Unk_ov102_020ccf80 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 unk14[0xc];
    /* 0x20 */ Unk_ov102_Inner* unk20;
};

extern "C" Unk_ov102_020ccf80 data_ov102_020ccf80;
extern "C" u8 data_ov102_020ccf8c[];

extern "C" void func_ov016_020af944(void* p);
extern "C" void func_ov102_020cc814(Unk_ov102_Obj* obj);

extern "C" void func_ov102_020cc7bc(Unk_ov102_Obj* obj) {
    func_ov016_020af944(data_ov102_020ccf8c);
    if (data_ov102_020ccf80.unk10 != 0) {
        data_ov102_020ccf80.unk0c = data_ov102_020ccf80.unk10;
        data_ov102_020ccf80.unk10 = 0;
    }
    if (data_ov102_020ccf80.unk0c == 0 && data_ov102_020ccf80.unk20->unk20 == 0) {
        obj->unk54 = func_ov102_020cc814;
    }
}
