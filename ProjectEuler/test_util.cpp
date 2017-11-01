#include "util.h"

static_assert(mypow(3, 0) == 1, "3^0 is 1");
static_assert(mypow(2, 1) == 2, "2^1 is 2");
static_assert(mypow(4, 2) == 16, "4^2 is 16");

static_assert(mylog10(3) == 0, "log10(3) is 0");
static_assert(mylog10(26) == 1, "log10(26) is 1");
static_assert(mylog10(412) == 2, "log10(412) is 2");
