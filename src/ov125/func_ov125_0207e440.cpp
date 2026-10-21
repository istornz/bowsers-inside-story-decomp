#include "types.h"

extern "C" void func_02020300(void* p);

extern "C" void* func_ov125_0207e440(void* p) {
    func_02020300(p);
    return p;
}
