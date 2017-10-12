#include <stdio.h>

/* EXERCISE 1-5
   Modify the temperature conversion program to print
   the table in reverse order, that is, from 300 degrees to 0.
 */

int main (int argc, char** argv)
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("FAHRENHEIT TO CELSUIS TABLE\n");
  printf("fahr \t cel\n");
  for (fahr = upper; fahr >= lower; fahr -= step)
    {
      celsius = (5.0/9.0) * (fahr - 32.0);
      printf("%3.0f \t%6.1f\n", fahr, celsius);
    }
  return 0;
}

/* RESULTS:
   The table is printed in reverse order.
 */
