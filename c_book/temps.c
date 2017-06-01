#include <stdio.h>

/*Print Fahrenheit-Celsius Table
  for fahr = 0, 20, ..., 300*/

#define LOWER 0
#define UPPER 300
#define STEP 20

void main()
{
  /*float fahr, celsius;*/
  /*float lower, upper, step;*/

  /*lower = 0;*/
  /*upper = 300;*/
  /*step = 20;*/

  /*fahr = lower;*/
  /*while (fahr <= upper) {*/
    /*celsius = (5.0/9.0) * (fahr-32.0);*/
    /*printf("%3.0f %6.1f\n", fahr, celsius);*/
    /*fahr = fahr + step;*/
  /*}*/

  /*for (int fahr = 0; fahr <= 300; fahr = fahr + 20) {*/
    /*printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));*/
  /*}*/

  for (int fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));
  }
}
