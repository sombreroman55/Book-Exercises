#include <stdio.h>

/* EXERCISE 1-8
   Write a program to count blanks, tabs, and newlines.
 */

int main (int argc, char** argv)
{
  int blanks = 0;
  int tabs = 0;
  int newlines = 0;
  int c;
  
  while ((c = getchar()) != EOF)
    {
      if (c == ' ')
	blanks++;
      else if (c == '\t')
	tabs++;
      else if (c == '\n')
	newlines++;
    }
  printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", blanks, tabs, newlines);
  return 0;
}

/* RESULT:
   The characters are counted correctly.
 */
