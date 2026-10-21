#include "types.h"

struct Unk_ov054_Obj {
    /* 0x00 */ u8 unk00[0x2a];
    /* 0x2a */ s16 unk2a;
};

struct Unk_ov054_Main {
    /* 0x000 */ u8 unk000[0x504];
    /* 0x504 */ u32 unk504;
};

extern "C" Unk_ov054_Main data_02055fe4;
extern "C" Unk_ov054_Obj* data_ov008_02064f08;

extern "C" void* func_ov011_02066c28(Unk_ov054_Obj* obj, u32 flags);
extern "C" void func_ov013_0208eb04(void* a, u32 b, s32 c, void* d, s32 e);
extern "C" void func_ov019_020cbe8c();

extern "C" void func_ov054_020cd540() {
    if (((data_02055fe4.unk504 << 0x1c) >> 0x1e) == 2) {
        Unk_ov054_Obj* obj = data_ov008_02064f08;
        void* ret = func_ov011_02066c28(obj, 0xc002);
        func_ov013_0208eb04(ret, 0xc000001e, 1, (void*)func_ov019_020cbe8c, obj->unk2a);
    } else {
        Unk_ov054_Obj* obj = data_ov008_02064f08;
        void* first = func_ov011_02066c28(obj, 0xc000);
        func_ov013_0208eb04(first, 0xc000002e, 1, NULL, obj->unk2a);
        Unk_ov054_Obj* obj2 = data_ov008_02064f08;
        void* ret = func_ov011_02066c28(obj2, 0xc001);
        func_ov013_0208eb04(ret, 0xc000002f, 1, (void*)func_ov019_020cbe8c, obj2->unk2a);
    }
}
