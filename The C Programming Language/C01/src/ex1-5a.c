#include <stdio.h>

#define LOWER  0    /* lower limit of table */
#define UPPER  300  /* upper limit */
#define STEP   20   /* step size */

int main (int argc, char** argv)
{
  float fahr, celsius;

  printf("FAHRENHEIT TO CELSUIS TABLE\n");
  printf("fahr \t cel\n");
  for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
    {
      celsius = (5.0/9.0) * (fahr - 32.0);
      printf("%3.0f \t%6.1f\n", fahr, celsius);
    }
  return 0;
}
