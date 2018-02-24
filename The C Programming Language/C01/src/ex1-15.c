#include <stdio.h>

/* EXERCISE 1-15
   Rewrite the temperature conversion program of Section 1.2 to use
   a function for conversion.
*/

float CtoF(float c);

int main (int argc, char** argv)
{
  printf("CELSIUS TO FAHRENHEIT TABLE\n");
  int i;
  for (i = 0; i < 101; i += 10)
    {
      printf("%3.0f \t%6.1f\n", (float)i, CtoF(i));
    }
  return 0;
}

float CtoF(float c)
{
  float fahr = ((9.0/5.0) * c) + 32.0;
  return fahr;
}

/* Result:
   The corresponding table is printed.
*/
