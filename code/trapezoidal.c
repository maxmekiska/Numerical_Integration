#include "numericintegration.h"

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
