#include <stdio.h>

/* EXERCISE 1-17
   Write a program to print all input lines that are longer than 80
   characters.
*/

#define MAXLINE 1000

int get_line(char line[], int maxline);

int main (int argc, char** argv)
{
  int len;
  char line[MAXLINE];
  char longest[MAXLINE];

  while ((len = get_line(line, MAXLINE)) > 0)
    {
      if (len > 80)
	{
	  printf("%s", line);
	}
    }
  return 0;
}

/* getline: read a line into s, return length */
int get_line(char s[], int lim)
{
  int c, i;
  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
      s[i] = c;
    }
  if (c == '\n')
    {
      s[i] = c;
      ++i;
    }
  s[i] = '\0';
  return i;
}

/* Result:
   Lines greater than 80 characters are printed.
*/
