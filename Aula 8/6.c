#include <stdio.h>
#include <stdlib.h>

void funcao(int *v, int n, int *maior, int *cont) {
  int i, primeiro = 0;
  for(i = 0; i < n; i++) {
    if(primeiro == 0) {
      *cont = 0;
      *maior = *(v + i);
      primeiro = 1;
    }
    if((*(v + i)) > (*maior)) {
      *maior = *(v + i);
      *cont = 1;
    }
    else if((*maior) == (*(v + i)))
      (*cont)++;
  }
}

int main() {
  int n, i, maior, cont;
  scanf("%d", &n);
  int *v = malloc(sizeof(int)*n);
  for(i = 0; i < n; i++)
    scanf("%d", v + i);
  funcao(v, n, &maior, &cont);
  printf("O numero %d ocorreu %d vezes.", maior, cont);

  return 0;
}