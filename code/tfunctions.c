#include <math.h>
#include "targetfunctions.h"

/*
 * Function:  square_one_plus_x_cube 
 * ----------------------------------
 * f(x) =  sqrt(1 + x^2)
 *  
 *  x (float): function input
 *
 *  returns (float): y
 */

float square_one_plus_x_cube(float x){
  return powf(1 + powf(x,2), 0.5); 
}

/*
 * Function:  x_cube
 * ------------------
 * f(x) =  x^2
 *  
 *  x (float): function input
 *
 *  returns (float): y
 */

float x_cube(float x){
  return powf(x, 2);
}

/*
 * Function:  one_over_x
 * ----------------------
 * f(x) =  1 / x
 *  
 *  x (float): function input
 *
 *  returns (float): y
 */

float one_over_x(float x){
  return 1 / x;
}

/*
 * Function:  sin_x_over_x
 * ------------------------
 * f(x) =  sin(x) / x
 *  
 *  x (float): function input
 *
 *  returns (float): y
 */


float sin_x_over_x(float x){
  return (sin(x))/x; 
}

