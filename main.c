#include <stdio.h>
#include <stdlib.h>

#include "module.h"

static void mod_all()
{
  struct plugin *iter = (struct plugin *) &__start_my_plugins;
  struct plugin *iter_stop = (struct plugin *) &__stop_my_plugins;

  for (; iter < iter_stop; ++iter) {
    printf("module %s function %p\n", iter->name, iter->f);
    iter->f(1, 2);
  }
}

int main(int argc, char *argv[])
{

  printf("Plugins are sitting from 0x%p to 0x%p\n",
         (void *)&__start_my_plugins,
         (void *)&__stop_my_plugins);
  mod_all();

  return 0;
}
