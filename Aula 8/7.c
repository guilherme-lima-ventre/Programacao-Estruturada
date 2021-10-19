#include <stdio.h>
#include <stdlib.h>

int funcao(float *vet, int N) {
  int i, cont = 0;
  for(i = 0; i < N; i++) {
    if(*(vet + i) < 0)
      cont++;
  }

  return cont;
}

int main() {
  int n, i, cont;
  scanf("%d", &n);
  float *v = malloc(sizeof(float)*n);
  for(i = 0; i < n; i++)
    scanf("%f", v + i);
  cont = funcao(v, n);
  printf("%d", cont);

  return 0;
}