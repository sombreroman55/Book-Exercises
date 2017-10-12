#include <stdio.h>

/* EXERCISE 1-2
   Experiment to find out what happens when printf's argument string
   contains \c, where c is some character not listed above.
 */

int main (int argc, char** argv)
{
  printf("\thello, \rworld!\n");
  return 0;
}

/* RESULTS:
   For the string above, \t tabs the cursor in 4 spaces,
   \r moves the cursor back to the beginning of the line, and
   \n moves the cursor to a new line.
   The resulting string is: "world! hello,"
   I also created a quick HTML table listing all of the characters
   and their effects.
 */
