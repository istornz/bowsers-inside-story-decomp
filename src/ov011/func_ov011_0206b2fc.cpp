#include "types.h"

struct Unk_ov011_Obj {
    /* 0x000 */ u8 unk000[0xf8];
    /* 0x0f8 */ u8 unkf8[0xc];
    /* 0x104 */ u16 unk104;
};

extern "C" void func_02020784(void* p);
extern "C" void func_020207ec(void* p);
extern "C" void func_ov013_0208a358(void* p);

extern "C" void func_ov011_0206b2fc(Unk_ov011_Obj* obj) {
    if (obj->unk104 == 0) {
        return;
    }
    func_02020784(obj->unkf8);
    func_020207ec(obj->unkf8);
    func_ov013_0208a358(obj->unkf8);
}
