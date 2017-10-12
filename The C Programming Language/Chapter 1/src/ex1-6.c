#include <stdio.h>

/* EXERCISE 1-6
   Verify that the expression getchar() != EOF is 0 or 1.
 */

int main (int argc, char** argv)
{
  int c;
  c = (getchar() != EOF);
  printf("%d\n", c);
  return 0;
}

/* RESULTS:
   The expression is indeed a boolean expression.
 */
