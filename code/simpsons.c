#include "numericintegration.h"

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
