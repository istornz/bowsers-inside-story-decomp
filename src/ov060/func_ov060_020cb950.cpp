#include "types.h"

struct Unk_ov060_Obj {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ void (*unk54)(Unk_ov060_Obj* obj);
};

struct Unk_ov060_Mgr {
    /* 0x000000 */ u8 unk000000[0x1e96ec];
    /* 0x1e96ec */ u8 unk1e96ec[1];
};

extern "C" Unk_ov060_Mgr* data_ov008_02064f08;

extern "C" BOOL func_ov120_020d4954(void* p);

extern "C" void func_ov060_020cb950(Unk_ov060_Obj* obj) {
    if (!func_ov120_020d4954(data_ov008_02064f08->unk1e96ec)) {
        obj->unk54 = NULL;
    }
}
