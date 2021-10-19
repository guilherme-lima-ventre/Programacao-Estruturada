#include <stdio.h>
#include <stdlib.h>

int **funcao(int *n) {
  int i, j, **m;
  scanf("%d", n);
  m = malloc(sizeof(int) * (*n));
  for(i = 0; i < *n; i++) {
    m[i] = malloc(sizeof(int) * (*n));
    for(j = 0; j < *n; j++) {
      if(i == j)
        m[i][j] = 1;
      else
        m[i][j] = 0;
    }
  }

  return m;
}

int main() {
  int i, j, n, **m = NULL;
  m = funcao(&n);
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++)
      printf("%d ", m[i][j]);
    printf("\n");
  }

  return 0;
}