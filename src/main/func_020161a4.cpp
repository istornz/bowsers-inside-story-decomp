#include "types.h"

extern "C" void func_02015f00(void* p);
extern "C" void func_0201a168(void* p);

extern "C" void* func_020161a4(void* p) {
    func_02015f00(p);
    func_0201a168(p);
    return p;
}
