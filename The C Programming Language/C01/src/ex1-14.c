#include <stdio.h>

/* EXERCISE 1-14
   Write a program to print a histogram of the frequencies of
   different characters in its input.
*/

int main (int argc, char** argv)
{
  int c;
  int ccounts[128] = {0};

  while ((c = getchar()) != EOF)
    {
      ccounts[c]++;
    }

  int i;
  int j;
  for (i = 0; i < 128; i++)
    {
      printf("%c | ", (char)i);
      for (j = 0; j < ccounts[i]; j++)
	{
	  putchar('o');
	}
      putchar('\n');
    }

  return 0;
}

/* Result:
   Program runs as specified, however some characters in the ASCII set
   result in a messy histogram. Perhaps remove those special, not-printable
   characters.
*/
