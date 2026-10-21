#include "types.h"

struct Unk_ov082_Render {
    /* 0x00 */ u8 unk00[0xec];
    /* 0xec */ void* unkEc;
};

struct Unk_ov082_Obj {
    /* 0x0 */ u8 unk0[0x8];
    /* 0x8 */ Unk_ov082_Render* unk8;
};

extern "C" BOOL func_ov014_02096360(void* param);
extern "C" void func_ov082_020ca838(Unk_ov082_Obj* obj);

extern "C" void func_ov082_020ca804(Unk_ov082_Obj* obj) {
    BOOL ok;
    if (obj->unk8->unkEc == NULL) {
        ok = TRUE;
    } else {
        ok = func_ov014_02096360(obj->unk8->unkEc);
    }
    if (ok) {
        func_ov082_020ca838(obj);
    }
}
