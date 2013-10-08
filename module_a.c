#include "module.h"

int test_func(int a, int b)
{
  return a + b;
}

struct plugin __attribute((__used__)) mod_a = {
  .name = "module a",
  .f    = test_func
};
REGISTER_MODULE(mod_a);


struct plugin __attribute((__used__)) mod_b = {
  .name = "module b",
  .f = test_func
};
REGISTER_MODULE(mod_b);
