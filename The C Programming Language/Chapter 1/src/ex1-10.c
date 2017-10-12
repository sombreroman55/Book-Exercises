#include <stdio.h>

/* EXERCISE 1-10
   Write a program to copy its input to its output, replacing each tab by \t,
   each backspace by \b, and each backslash by \\. This makes tabs and backspaces
   visible in an unambiguous way.
 */

int main (int argc, char** argv)
{
  int c;
  while ((c = getchar()) != EOF)
    {
      if (c == '\b')
	{
	  putchar('\\');
	  putchar('b');
	}
      else if (c == '\t')
	{
	  putchar('\\');
	  putchar('t');
	}
      else if (c == '\\')
	{
	  putchar('\\');
	}
      else
	{
	  putchar(c);
	}
    }
  return 0;
}

/* RESULT:
   The program runs as specified.
 */
