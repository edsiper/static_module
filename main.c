#include <stdio.h>
#include <stdlib.h>

#include "module.h"

static void mod_all()
{
  struct module_info *iter = (struct module_info *) &__start_modules;
  struct module_info *iter_stop = (struct module_info *) &__stop_modules;

  for (; iter < iter_stop; ++iter) {
    printf("Module name: '%s' func()=%i\n",
           iter->name,
           iter->func(1, 1));
  }
}

int func_sum(int a, int b)
{
  return a + b;
}

int func_mult(int a, int b)
{
  return a * b;
}

int main(int argc, char *argv[])
{

  printf("Plugins are sitting from 0x%p to 0x%p\n",
         (void *)&__start_modules,
         (void *)&__stop_modules);
  mod_all();

  return 0;
}
