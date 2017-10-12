#include <stdio.h>

int main (int argc, char** argv)
{
  int c;

  while ((c = getchar()) != EOF)
    {
      if (c == ' ' || c == '\n' || c == '\t')
	putchar('\n');
      else
	putchar(c);
    }

  return 0;
}

/* Result:
   Program runs as specified.
 */
