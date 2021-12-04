#ifndef   NUMERICINTEGRATION_HEADER
#define   NUMERICINTEGRATION_HEADER

float midpoint(float delta, float upper, float lower, float (*f)(float));

float trapezoidal(float delta, float upper, float lower, float (*f)(float));

float simpsons(float delta, float upper, float lower, float (*f)(float));

#endif
