#include "numericintegration.h"

/*
 * Function:  simpsons
 * -----------------------
 * numerical integration via the simpson's rule algorithm:
 * 
 * Tn = delta x * 1/3 * (f(x0) + 4f(x1) + 2f(x2) + 4f(x3) + 2f(x4) + ... + 2f(xn-2) + 4f(xn-1) + f(xn))
 * 
 *  delta (double)      : length of subintervals = (upper/lower)/ subintervals n
 *  upper (float)       : upper integral limit
 *  lower (float)	: lower integral limit
 *  (*f)(float) (float) : function to be numerically integrated
 *
 *  returns: numerical evaluation of integral.
 */

float simpsons(float delta, float upper, float lower, float (*f)(float)) {
  float interval = lower;
  float deltax;
  float area = 0;
  int factor = 4;

  deltax = (upper - lower) / delta;

  for (int i = 0; i < delta+1; i++){
    if (i == 0 || i == delta) {
      area = area +  ((*f)(interval));
    }
    else if (factor == 4) {
      area = area + 4 * ((*f)(interval));
      factor = 2;
    }
    else if (factor == 2) {
      area = area + 2 * ((*f)(interval));
      factor = 4;
    }
    interval = interval + deltax;
  }

  area = deltax/3 * area;

  return area;
}
