#include <stdio.h>

int calcular(int x, int y) {
  if(y > 1)
    x = x*(calcular(x, y - 1));
  return x;
}

int main() {
  int x, y, res = 0;
  scanf("%d %d", &x, &y);
  res = calcular(x, y);
  printf("%d", res);

  return 0;
}