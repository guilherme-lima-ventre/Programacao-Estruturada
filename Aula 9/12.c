#include <stdio.h>
#include <stdlib.h>

int *funcao(int **m) {
  int i, j, *b;
  b = malloc(sizeof(int) * 3);
  b[0] = 0;
  b[1] = 0;
  b[2] = 0;
  for(j = 0; j < 3; j++) {
    for(i = 0; i < 3; i++) {
      b[j] += m[i][j]; 
    }
  }
  
  return b;
}

int main() {
  int **m, *b = NULL, i, j;
  m = malloc(sizeof(int*) * 3);
  for(i = 0; i < 3; i++)
    m[i] = malloc(sizeof(int) * 3);
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      scanf("%d", &m[i][j]);
    }
  }
  b = funcao(m);
  printf("%d %d %d", b[0], b[1], b[2]);

  return 0;
}