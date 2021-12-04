#include "numericintegration.h"


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
