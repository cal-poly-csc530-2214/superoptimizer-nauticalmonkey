Aha!
====

This is Henry S. Warren's '[Aha!](http://hackersdelight.org/)' superoptimiser tool I got to work with Debian linux and running on the different fragments. Creates assembly programs from C fragments inputted to it. For each different fragment that you want to test you must remake and ensure that the file is switched to the new fragment.
here are some test outputs i have gotten below:

this is the C code that is converted

int userfun(int x)

{

  return x + x+ 4*4;
  
}


Searching for programs with 4 operations.

Found a 4-operation program:

   add   r1,rx,rx
   
   or    r2,r1,-2
   
   shl   r3,r2,#3
   
   sub   r4,r1,r3
   
   Expr: ((x + x) - (((x + x) | -2) << 3))
   

Found a 4-operation program:

   shl   r1,rx,#1
   
   or    r2,r1,-2
   
   shl   r3,r2,#3
   
   sub   r4,r1,r3
   
   Expr: ((x << 1) - (((x << 1) | -2) << 3))
   
Found 2 solutions.

Counters = 455, 10237, 2364148, 131839102, total = 134213942

Process time = 2.016 secs


There where no solutions for programs less than 4 operations, I continued to try different operations and editing the different operations. 

When using a vairable the program was not able to find solutions such as y=x in the code brakets. 

Going to 5 operations bogs the system somthing fierce and is not reccomended.

For the 5 operations solutions *Note* this is with a I9-10900k

Found 3587 solutions.

Counters = 225609, 235391, 2589302, 818086502, 43431951782, total = 44253088586

Process time = 673.891 secs
