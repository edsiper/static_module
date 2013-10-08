#include <stdio.h>

#ifndef __MODULE_H__
#define __MODULE_H__

typedef int (*finit_t) (int, int);

struct plugin {
  char *name;
  finit_t f;
};

extern struct module __start_my_plugins;
extern struct module __stop_my_plugins;

#define REGISTER_MODULE(mod)                            \
  static struct plugin __dmp_ ## mod                    \
  __attribute((__section__("my_plugins")))              \
       __attribute((__used__)) = {                      \
    .name = #mod                                        \
    .f    = mod.f                                       \
  }

#endif /* __SECTION_HACKING_H__ */
