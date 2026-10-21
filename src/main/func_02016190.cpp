#include "types.h"

extern "C" void func_02015f00(void* p);

extern "C" void* func_02016190(void* p) {
    func_02015f00(p);
    return p;
}
