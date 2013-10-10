#include "module.h"

static int func_value(int a, int b)
{
  return ((a + b) * 2);
}

module_t mod_c = {
  .name = "module c",
  .func = func_value
};
