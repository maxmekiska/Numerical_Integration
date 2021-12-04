#include <stdio.h>
#include <stdlib.h>
#include "targetfunctions.h"
#include "numericintegration.h"



int main(void) {
  float result1, result2, result3, result4, result5, result6;
  result1 = midpoint(6, 4, 1, square_one_plus_x_cube);
  result2 = midpoint(4, 1, 0, x_cube);
  result3 = trapezoidal(4, 1, 0, x_cube);
  result4 = trapezoidal(2, 2, 1, one_over_x);
  result5 = simpsons(6, 4, 1, square_one_plus_x_cube);
  result6 = simpsons(2, 2, 1, one_over_x);



  printf("%.10f", result1);
  printf("\n");
  printf("%.10f", result2);
  printf("\n");
  printf("%.10f", result3);
  printf("\n");
  printf("%.10f", result4);
  printf("\n");
  printf("%.10f", result5);
  printf("\n");
  printf("%.10f", result6);

  system("pause");

  return 0;
}
