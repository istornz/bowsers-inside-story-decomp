#include "types.h"

extern "C" void func_02047568(void* p);

extern "C" void* func_0204757c(void* p) {
    func_02047568(p);
    return p;
}
