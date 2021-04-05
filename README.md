Aha!
====

This is Henry S. Warren's '[Aha!](http://hackersdelight.org/)' superoptimiser tool I got to work with Debian linux and running on the different fragments. Creates assembly programs from C fragments inputted to it. For each different fragment that you want to test you must remake and ensure that the file is switched to the new fragment.
here are some test outputs i have gotten below: This is using the C code 

int userfun(int x)
{
  int y = 4;
  return x * x + y*y;
}


Searching for programs with 4 operations.

Found a 4-operation program:
   neg   r1,rx
   shrs  r2,rx,#31
   add   r3,r2,rx
   xor   r4,r3,r2
   Expr: (((x >>s 31) + x) ^ (x >>s 31))

Found a 4-operation program:
   neg   r1,rx
   shrs  r2,rx,#31
   sub   r3,r2,r1
   xor   r4,r3,r2
   Expr: (((x >>s 31) - -(x)) ^ (x >>s 31))

Found a 4-operation program:
   neg   r1,rx
   shrs  r2,rx,#31
   xor   r3,r2,rx
   sub   r4,r3,r2
   Expr: (((x >>s 31) ^ x) - (x >>s 31))
...

Found a 4-operation program:
   revb  r1,rx
   shrs  r2,rx,#31
   xor   r3,r2,rx
   sub   r4,r3,r2
   Expr: (((x >>s 31) ^ x) - (x >>s 31))
Found 398 solutions.
Counters = 2616334, 2626116, 4980027, 134454981, total = 144677458
Process time = 2.203 secs
