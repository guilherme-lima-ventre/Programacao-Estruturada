#include <stdio.h>
#include <stdlib.h>

void calculo(float R, float *area, float *volume) {
  float pi = 3.14;
  *area = 4 * pi * R * R;
  *volume = (4 * pi * R * R * R)/3;
}

int main() {
  float raio, area, volume;

  scanf("%f", &raio);
  calculo(raio, &area, &volume);
  printf("Area: %.2f\nVolume: %.2f", area, volume);

  return 0;
}