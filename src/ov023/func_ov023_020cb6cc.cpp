#include "types.h"

struct Unk_ov023_Render {
    /* 0x00 */ u8 unk00[0xec];
    /* 0xec */ void* unkEc;
};

struct Unk_ov023_Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Unk_ov023_Render* unk10;
};

extern "C" BOOL func_ov014_02096360(void* param);
extern "C" void func_ov023_020cb700(Unk_ov023_Obj* obj);

extern "C" void func_ov023_020cb6cc(Unk_ov023_Obj* obj) {
    BOOL ok;
    if (obj->unk10->unkEc == NULL) {
        ok = TRUE;
    } else {
        ok = func_ov014_02096360(obj->unk10->unkEc);
    }
    if (ok) {
        func_ov023_020cb700(obj);
    }
}
