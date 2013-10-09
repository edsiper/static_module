#include <stdio.h>
#include <stdlib.h>

#ifndef __MODULE_H__
#define __MODULE_H__

struct module_info {
  char *name;
  int (*func) (int, int);
} __attribute__((packed));

#define module_t struct module_info               \
  __attribute((__section__("modules")))           \
  __attribute((__used__))

extern struct module_info __start_modules;
extern struct module_info __stop_modules;

int func_sum(int a, int b);
int func_mult(int a, int b);

#endif
