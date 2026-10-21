#include "types.h"

extern "C" void func_02015f00(void* p);

extern "C" void* func_020161c0(void* p) {
    func_02015f00(p);
    return p;
}
