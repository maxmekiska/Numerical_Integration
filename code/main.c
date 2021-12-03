#include <stdio.h>
#include <math.h>

float square_one_plus_x_cube(float x){
  return powf(1 + powf(x,2), 0.5); 
}

float x_cube(float x){
  return powf(x, 2);
}

float one_over_x(float x){
  return 1 / x;
}

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

  return 0;
}
