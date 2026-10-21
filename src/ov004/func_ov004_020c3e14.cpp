#include "types.h"

extern "C" void func_ov004_020b5394(void* p);
extern "C" void func_0201a168(void* p);

extern "C" void* func_ov004_020c3e14(void* p) {
    func_ov004_020b5394(p);
    func_0201a168(p);
    return p;
}
