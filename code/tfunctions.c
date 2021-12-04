#include <math.h>
#include "targetfunctions.h"

float square_one_plus_x_cube(float x){
  return powf(1 + powf(x,2), 0.5); 
}

float x_cube(float x){
  return powf(x, 2);
}

float one_over_x(float x){
  return 1 / x;
}

float sin_x_over_x(float x){
  return (sin(x))/x; 
}

