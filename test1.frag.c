/* test1.frag.c */

#include "aha.h"

int userfun(int x)
{
  int y = 5;
  y = y * y;
  return x *x * y;
}
