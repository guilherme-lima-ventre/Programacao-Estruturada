#include <stdio.h>

int main() {
  int x = 3;
  float y = 3.4;
  char z = 'A';

  int *px = &x;
  float *py = &y;
  char *pz = &z;

  printf("Antes:\nx = %d\ny = %f\nz = %c\n", x, y, z);
  scanf("%d", &(*px));
  scanf("%f", &(*py));
  scanf(" %c", &(*pz));
  printf("\nDepois:\nx = %d\ny = %f\nz = %c\n", x, y, z);

  return 0;
}