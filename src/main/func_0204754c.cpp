#include "types.h"

extern "C" void func_02047534(void* p);
extern "C" void func_0201a168(void* p);

extern "C" void* func_0204754c(void* p) {
    func_02047534(p);
    func_0201a168(p);
    return p;
}
