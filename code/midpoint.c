#include "numericintegration.h"

/*
 * Function:  midpoint
 * -------------------
 * numerical integration via the midpoint algorithm:
 * 
 * Mn = Sum(f(mi) * delta x) | sum from i = 1 until n
 * 
 *  delta (float)      : length of subintervals = (upper/lower)/ subintervals n
 *  upper (float)       : upper integral limit
 *  lower (float)	: lower integral limit
 *  (*f)(float) (float) : function to be numerically integrated
 *
 *  returns (float): numerical evaluation of integral.
 */


float midpoint(float delta, float upper, float lower, float (*f)(float)) {
  float mid;
  float deltax;
  float area = 0;

  deltax = (upper - lower) / delta;
  mid = lower + deltax/2;

  for (int i = 0; i < delta; i++){
    area = area + deltax * ((*f)(mid));
    mid = mid + deltax;
  }

  return area;

}
