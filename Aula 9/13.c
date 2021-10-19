#include <stdio.h>
#include <stdlib.h>

int *funcao(int **m, int *v) {
  int i, j, *c = NULL;
  c = malloc(sizeof(int) * 3);
  c[0] = 0;
  c[1] = 0;
  c[2] = 0;
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      c[i] += m[i][j]*v[j];
    }
  }

  return c;
}

int main() {
  int **a, *b, *c = NULL, i, j;
  a = malloc(sizeof(int*) * 3);
  b = malloc(sizeof(int) * 3);
  for(i = 0; i < 3; i++)
    a[i] = malloc(sizeof(int) * 3);
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for(i = 0; i < 3; i++)
    scanf("%d", &b[i]);
  c = funcao(a, b);
  for(i = 0; i < 3; i++)
    printf("%d ", c[i]);

  return 0;
}