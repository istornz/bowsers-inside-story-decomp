#include "types.h"

extern "C" void func_02047568(void* p);
extern "C" void func_0201a168(void* p);

extern "C" void* func_02047590(void* p) {
    func_02047568(p);
    func_0201a168(p);
    return p;
}
