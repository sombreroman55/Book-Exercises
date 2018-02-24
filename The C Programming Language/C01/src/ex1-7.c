#include <stdio.h>

/* EXERCISE 1-7
   Write a program to print the value of EOF.
 */

int main (int argc, char** argv)
{
  int c;
  c = EOF;
  printf("%d\n", c);
  return 0;
}

/* RESULTS:
   EOF is -1 it seems. This makes sense because
   there are no negative character values, so it
   is impossible for EOF to be mixed up with
   another character.
 */
