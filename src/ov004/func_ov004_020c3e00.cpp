#include "types.h"

extern "C" void func_ov004_020b5394(void* p);

extern "C" void* func_ov004_020c3e00(void* p) {
    func_ov004_020b5394(p);
    return p;
}
