#include "types.h"

extern "C" void func_02021f98(void* p);
extern "C" void func_0201a168(void* p);

extern "C" void* func_ov126_0208363c(void* p) {
    func_02021f98(p);
    func_0201a168(p);
    return p;
}
