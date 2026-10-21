#include "types.h"

extern "C" u8 data_ov060_020ce270[];
extern "C" void func_ov016_020af944(void* p);

extern "C" void func_ov060_020ca498() {
    func_ov016_020af944(data_ov060_020ce270);
}
