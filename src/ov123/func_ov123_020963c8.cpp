#include "types.h"

extern "C" void func_02020300(void* p);
extern "C" void func_0201a168(void* p);

extern "C" void* func_ov123_020963c8(void* p) {
    func_02020300(p);
    func_0201a168(p);
    return p;
}
