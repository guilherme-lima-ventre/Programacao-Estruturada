#include <stdio.h>
#include <math.h>

typedef struct ponto ponto;
  struct ponto {
    int x;
    int y;
  };

int main() {

  struct ponto a, b;
  double distancia;
  scanf("%d %d %d %d", &a.x, &a.y, &b.x, &b.y);
  distancia = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
  printf("%.1lf", distancia);

  return 0;
}