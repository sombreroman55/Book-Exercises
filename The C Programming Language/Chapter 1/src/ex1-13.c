#include <stdio.h>

/* EXERCISE 1-13
   Write a program to print a histogram of the lengths of words in its input.
   It is easy to draw the histogram with the bars horizontal; a vertical
   orientation is more challenging.
*/

int main (int argc, char** argv)
{
  int c;
  int lengths[11] = {0};

  int length = 0;
  while ((c = getchar()) != EOF)
    {
      if (c == ' ' || c == '\n' || c== '\t')
	{
	  if (length > 10)
	    lengths[10]++;
	  else
	    lengths[length-1]++;
	  length = 0;
	}
      else
	length++;
    }

  int i;
  int j;
  printf("     LENGTHS     \n");
  for (i = 0; i < 11; i++)
    {
      (i+1 > 10) ? printf("10+ | ") : printf("%3d | ", i+1);
      for (j = 0; j < lengths[i]; j++)
	{
	  putchar('o');
	}
      putchar('\n');
    }

  return 0;
}

/* Result:
   This program runs almost as specified. Things to improve it include
   not counting punctuation or other characters as part of the word
   lengths, and printing the vertical version of the histogram. I will
   get to those improvements later.
*/
