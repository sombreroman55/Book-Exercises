#include <stdio.h>

/* EXERCISE 1-9
   Write a program to copy its input to its output, replacing 
   each string of one or more blanks by a single blank.
 */

int main (int argc, char** argv)
{
  int c;
  int last = '\0';
  while ((c = getchar()) != EOF)
    {
      if (c != ' ')
	{
	if (last == ' ')
	  putchar(' ');
	putchar(c);
	}
      last = c;
    }
  return 0;
}

/* RESULT:
   The program runs as specified.
 */
