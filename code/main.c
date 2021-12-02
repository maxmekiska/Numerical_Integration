#include <stdio.h>
#include <math.h>

float square_one_plus_x_cube(float x){
  return powf(1 + powf(x,2), 0.5); 
}

float x_cube(float x){
  return powf(x, 2);
}



float midpoint(float delta, float upper, float lower, float (*f)(float)) {
  float mid;
  float deltax;
  float area = 0;

  deltax = (upper - lower) / delta;

  for (int i = 0; i < delta; ++i){
    if (i == 0){
      mid = lower+ deltax/2;
    }
    else {
      mid = mid + deltax;
    }
    area = area + deltax * ((*f)(mid));

  }

  return area;

}

int main(void) {
  float result1, result2;
  result1 = midpoint(6, 4, 1, square_one_plus_x_cube);
  result2 = midpoint(4, 1, 0, x_cube);

  printf("%.10f", result1);
  printf("\n");
  printf("%.10f", result2);



  return 0;
}