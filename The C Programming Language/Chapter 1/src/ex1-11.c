#include <stdio.h>

/* EXERCISE 1-11
   How would you test the word count program? What kinds of input
   are most likely to uncover bugs if there are any?
 */

/* Below is the word count program specified above */

#define IN   1
#define OUT  0

int main (int argc, char** argv)
{
  int c, n1, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF)
    {
      ++nc;
      if (c == '\n')
	++nl;
      if (c == ' ' || c == '\n' || c == '\t')
	state = OUT;
      else if (state == OUT)
	{
	  state = IN;
	  ++nw;
	}
    }
}

/* RESULT:
   Good input to test this program would be words
 */
