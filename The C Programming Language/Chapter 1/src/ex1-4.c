#include <stdio.h>

/* EXERCISE 1-4
   Write a program to print the corresponding Celsius to
   Fahrenheit table.
 */

int main (int argc, char** argv)
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 100;
  step = 10;

  celsius = lower;
  printf("CELSIUS TO FAHRENHEIT TABLE\n");
  printf("cel \t fahr\n");
  while (celsius <= upper)
    {
      fahr = ((9.0/5.0) * celsius) + 32.0;
      printf("%3.0f \t%6.1f\n", celsius, fahr);
      celsius = celsius + step;
    }
  return 0;
}

/* RESULTS:
   The corresponding table is printed.
 */
