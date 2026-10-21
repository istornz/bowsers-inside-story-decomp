#include "types.h"

extern "C" void func_02020300(void* p);

extern "C" void* func_ov123_02097abc(void* p) {
    func_02020300(p);
    return p;
}
