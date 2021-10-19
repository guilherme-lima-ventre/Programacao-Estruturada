#include <stdio.h>
#include <stdlib.h>

int checar(int **m, int linhas, int colunas, int n) {
  int i, j;
  for(i = 0; i < linhas; i++) {
    for(j = 0; j < colunas; j++) {
      if(n == m[i][j])
        return 1;
    }
  }
  return 0;
}

int main() {
  int n, i, j, linhas, colunas;
  scanf("%d", &linhas);
  scanf("%d", &colunas);
  scanf("%d", &n);
  int **l = malloc(sizeof(int) * linhas);
  int *c = NULL;
  for(i = 0; i < colunas; i++) {
    c = malloc(sizeof(int) * colunas);
    l[i] = c;
  }
  for(i = 0; i < linhas; i++) {
    for(j = 0; j < colunas; j++) {
      scanf("%d", &l[i][j]);
    }
  }
  int ret = checar(l, linhas, colunas, n);
  printf("%d", ret);

  return 0;
}