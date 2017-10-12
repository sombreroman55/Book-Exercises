#include <stdio.h>

/* EXERCISE 1-3
   Modify the temperature conversion program to print a heading
   above the table.
 */

int main (int argc, char** argv)
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("FAHRENHEIT TO CELSUIS TABLE\n");
  printf("fahr \t cel\n");
  while (fahr <= upper)
    {
      celsius = (5.0/9.0) * (fahr - 32.0);
      printf("%3.0f \t%6.1f\n", fahr, celsius);
      fahr = fahr + step;
    }
  return 0;
}

/* RESULTS:
   The table now has a header. That's about it.
 */
