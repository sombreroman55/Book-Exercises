#include <stdio.h>

/* EXERCISE 1-1
   Run the "hello, world" program on your system. Experiment
   with leaving out parts of the program, to see what error
   messages you get.
 */

int main (int argc, char** argv)
{
  printf("hello, world!\n");
  return 0;
}

/* RESULTS:
   The simplest program in any language. The parameters and
   return statement are not necessary. Leaving out the #include
   statement throws an implicit function call warning (error?);
   Misspelling printf throws an error, as does leaving out either
   of the double quotes; omitting semi-colons is just a syntax
   error.
 */
