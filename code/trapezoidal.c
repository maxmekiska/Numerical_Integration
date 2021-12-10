#include "numericintegration.h"

/*
 * Function:  trapezoidal 
 * -----------------------
 * numerical integration via the trapezoidal rule algorithm:
 * 
 * Tn = delta x * 1/2 * (f(x0) + 2f(x1) + 2f(x2) + ... + 2f(xn-1) + f(xn))
 * 
 *  delta (float)      : length of subintervals = (upper/lower)/ subintervals n
 *  upper (float)       : upper integral limit
 *  lower (float)	: lower integral limit
 *  (*f)(float) (float) : function to be numerically integrated
 *
 *  returns (float): numerical evaluation of integral.
 */

float trapezoidal(float delta, float upper, float lower, float (*f)(float)) {
  float interval = lower;
  float deltax;
  float area = 0;

  deltax = (upper - lower) / delta;

  for (int i = 0; i < delta+1; i++){
    if (i == 0 || i == delta) {
      area = area +  ((*f)(interval));
    }
    else {
      area = area + 2 * ((*f)(interval));
    }
    interval = interval + deltax;
  }

  area = deltax * 0.5 * area;

  return area;
}
